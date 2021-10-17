#include<bits/stdc++.h>
using namespace std;

class graph{
    private:
        int edges,vertex;    
        map<int,list<int> > cnt;
        int* ind;

    public:

        void addedge(int a,int b){
            cnt[a].push_back(b);
            ind[b]++;
        }

        //topological sorting using bfs
        void topobfs(){

            queue<int> q1;
            for(int i=0;i<vertex;++i){
                if(ind[i]==0){
                    q1.push(i);
                }
            }
            int temp;
            while(!q1.empty()){
                temp=q1.front();
                cout<<temp<<" ";
                q1.pop();
                list<int>::iterator it1=cnt[temp].begin();
                for(;it1!=cnt[temp].end();++it1){
                        ind[*it1]--;
                        if(ind[*it1]==0){
                            q1.push(*it1);
                        }
                }
                
            }
            return ;

        }

        //topological sorting using dfs

        void dfshelp(int source,bool visited[],stack <int> &st){
            visited[source]=true;

            list<int>::iterator it1=cnt[source].begin();
            for(;it1!=cnt[source].end();++it1){
                if(visited[*it1]==false){
                    dfshelp(*it1,visited,st);
                }
            }

            st.push(source);
            return ;
        }

        
        void topodfs(){
            cout<<"\nTopo dfs ";
            stack<int> st1;
            bool visited[vertex];
            for(int i=0;i<vertex;++i){
                visited[i]=false;
            }
            for(int i=0;i<vertex;++i){
                if(visited[i]==false){
                    dfshelp(i,visited,st1);
                }
            }

            while(!st1.empty()){
                cout<<st1.top()<<" ";
                st1.pop();
            }

            return ;

        }


        //cycle detection using kahn's algo
        

        graph(int v,int e){
            
            vertex = v;
            
            edges = e;
            ind=new int[vertex];
            for(int i=0;i<vertex;i++){
                ind[i]=0;
            }

        }
};

int main(){
    int v,e;
    cout<<"Enter number of vertices and edges: ";
    cin>>v>>e;
    graph g1(v,e);
    int a,b;
    cout<<"\nEnter edges: ";
    for(int i=0;i<e;i++){
        cin>>a>>b;
        g1.addedge(a,b);
    }
    cout<<"\nTopological sort is: ";
    g1.topobfs();

    g1.topodfs();

    return 0;
}