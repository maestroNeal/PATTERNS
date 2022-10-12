//half pyamid after 180' rotation

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the range od the pyarimd : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}