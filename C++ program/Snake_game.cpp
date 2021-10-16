#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
bool gameover;
const int width=20;
const int height=20;
int x,y,fruitX,fruitY,score;
int tailX[100],tailY[100];
int nTail;
enum eDirection{STOP=0,LEFT,RIGHT,UP,DOWN};
eDirection dir;

void Setup(){
gameover=false;
dir=STOP;
x=width/2;
y=height/2;
fruitX=rand()%width;
fruitY=rand()%height;
score=0;
}

void Draw(){
system("cls");
for(int i=0;i<width+2;i++)
{
	cout<<"#";
}
cout<<endl;
for(int i=0;i<height;i++){
for(int j=0;j<width;j++){

if(j==0)
cout<<"#";
if(i==y&&j==x)
cout<<"*";
else if(i==fruitY&&j==fruitX)
cout<<"%";
else{
bool print=false;
for(int k=0;k<nTail;k++){ 
if(tailX[k]==j&&tailY[k]==i){
cout<<"*";
print=true;
}
}
if(!print)
cout<<" " ;
}
if(j==width-1) cout<<"#";
}
cout<<endl;
}
for(int i=0;i<width+2;i++) cout<<"#";
cout<<endl;
cout<<"Score:"<<score<<endl;
}

void input()
{
	if(_kbhit())
	{
		switch(getch())
		{
			case 'a':
				dir = LEFT;
				break;
			case 'd':
				dir = RIGHT;
				break;
			case 'w':
				dir = UP;
				break;
			case 's':
				dir = DOWN;
				break;
			case 'x':
				gameover = true;
				break; 
		}
	}
}


int main()
{
	Setup();
	while(!gameover)
	{
		Draw();
		input();
	}
	return 0;	
}
