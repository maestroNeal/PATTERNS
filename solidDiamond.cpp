// solid diamond
#include<iostream>
using namespace std;
int main(){
    int n,j,i;
    cout<<"Range : ";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(j=1;j<=2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=0;i--){
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(j=1;j<=2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}