//Right side inverted pyramid
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"range : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}