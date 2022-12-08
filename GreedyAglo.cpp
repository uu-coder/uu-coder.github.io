#include<bits/stdc++.h>
using namespace std;
int main(){
    int total=18,j=0;
    int sum=0;
    int arr[]={5,2,1};
    cout<<"{";
    while(true){
        for(int i=j;i<3;i++){
            if(sum+=arr[i]<=total){
                cout<<arr[i];
                sum+=arr[i];
                break;
            }else{
                j++;
                cout<<"j="<<j<<endl;
            }
        }
        if(sum==total){
            cout<<"}"<<endl;
            break;
        }else{
            cout<<",";
        }
    }
}
