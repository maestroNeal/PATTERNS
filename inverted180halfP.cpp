//Inverted half pyramid after 180 rotation

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the range of the Pyramid : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=n-i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}