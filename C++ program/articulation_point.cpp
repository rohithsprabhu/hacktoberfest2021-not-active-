/*  undirected connected graph
    Articulation Point:- Removing of point and its edges leads to increase in connected components;
*/

#include<iostream>
#include<vector>
using namespace std;

class Graph{
    private:
        int V , E;
        vector<int> * adj;

    public:

        void add_edge(int u1 , int v1){
            adj[u1].push_back(v1);
            adj[v1].push_back(u1);
        }

        void helper(int u , int * low , int * dtime , bool * visited ,  int &ctime ,  int par , bool * art);

        int art_pt();
        
        Graph(int v , int e){
            this->V = v;
            this->E = e;
            adj = new vector<int> [V];
        }

};

int main(){

    int v , e;

    cin>>v>>e;

    Graph g1(v,e);

    for(int i = 0 ; i < e ; ++i){
        int u1 , v1;
        cin>>u1>>v1;
        g1.add_edge(u1 , v1);
    }

    int ans = g1.art_pt();
    cout<<ans;

    return 0;
}

int Graph::art_pt(){

    int * low       = new int [V];
    int * dtime     = new int [V];
    bool * visited  = new bool [V];
    bool * art      = new bool[V];
    int ctime = 0;
    int ans = 0;

    for(int i = 0 ; i < V ; ++i){
        visited[i] = false;
    }

    helper(0 , low , dtime , visited ,  ctime  , -1 , art);

    for(int i = 0 ; i < V ; ++i){
        if(art[i] == true){
            ans++;
        }
    }
    return ans;
}

void Graph::helper(int u , int * low , int * dtime , bool * visited , int &ctime  , int par , bool * art){

    dtime[u]   = ctime;
    low[u]     = ++ctime;
    visited[u] = true;
    int child = 0;

    for(int i = 0 ; i < adj[u].size() ; ++i){
        int v = adj[u][i];
        if(!visited[v]){
                child++;
                helper(v , low , dtime , visited , ctime , u , art);

                low[u] = min(low[u] , low[v]);

                if(par == -1 && child > 1){
                    art[u] = true;
                }

                if(low[v] >= dtime[u]){
                    art[u] = true;
                }

                //for bridge if(low[v] > disc[u]) : then bridge

        }
        else if(adj[u][i] != par){
            low[u] = min(low[u] , dtime[v]);
        }

    }

}