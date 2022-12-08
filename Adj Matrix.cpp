#include<bits/stdc++.h>
using namespace std;
void fillZero(vector< vector<int> > &adj,int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp.push_back(0);
        }
        adj.push_back(temp);
    }
}
void makeGraph(vector< vector<int> > &temp,int x,int y){
    temp[x][y]=1;
    temp[y][x]=1;
}
void display(vector< vector<int> > &adj,int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int> > adj;
    int N;
    cout<<"Enter Number Of Node: ";
    cin>>N;
    fillZero(adj,N);
    makeGraph(adj,0, 4);
   makeGraph(adj,0, 3);
   makeGraph(adj,1, 2);
   makeGraph(adj,1, 4);
   makeGraph(adj,1, 5);
   makeGraph(adj,2, 3);
   makeGraph(adj,2, 5);
   makeGraph(adj,5, 3);
   makeGraph(adj,5, 4);
    display(adj,N);
    return 0;
}
