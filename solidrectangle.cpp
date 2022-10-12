#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the rows of the pattern : ";
    cin>>n;
    cout<<"enter the coloums of the pattern : ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}