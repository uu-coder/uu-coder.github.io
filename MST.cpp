#include<bits/stdc++.h>
using namespace std;
int main (){
    int N;
    cout<<"Enter the number of node : ";
    cin>>N;
    int Graph[N][N] = {{0,28,0,0,0,10,0},
 {28,0,16,0,0,0,14},
 {0,16,0,12,0,0,0},
 {0,0,12,22,0,18},
 {0,0,0,22,0,25,24},
 {10,0,0,0,25,0,0},
 {0,14,0,18,24,0,0}
 };
    int edge;
    int visit[N];
    for(int i=0; i<N; i++){
        visit[i]=false;
    }
    edge = 0;
    visit[0] = true;
    int x,total=0;
    int y;
    while (edge<N-1){
        int Min=INT_MAX;
        x=0;
        y=0;
        for(int i=0;i<N;i++){
            if(visit[i]){
                for(int j=0;j<N;j++){
                    if(!visit[j]&&Graph[i][j]){
                        if (Min>Graph[i][j]){
                            Min=Graph[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        cout<<x<<" --> "<<y<<" : "<<Graph[x][y]<<endl;
        total+=Graph[x][y];
        visit[y]=true;
        edge++;
    }

    cout<<"MST : "<<total<<endl;
    return 0;
}
