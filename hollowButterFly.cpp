//Hollow Butter Fly

#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cout<<"enter the range : ";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;

    }  
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;

    }
}
