 //Inverted half Pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the range : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;--j){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
