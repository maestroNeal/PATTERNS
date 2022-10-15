#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"range : ";
    cin>>n;
    if(n%2==0){
        cout<<"ple ! enter an odd number ? ";
        return 0;
    }
    for(i=0;i<n/2+2;i++){
        for(j=1;j<=n/2;j++){
            cout<<"  ";
        }
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=2*i+1;j++){
            cout<<"@ ";
        }
        cout<<endl;
    }
    for(i=1;i<=n/2+1;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(j=1;j<=n;j++){
            if(i==n/2+1){
                cout<<"@ ";
            }
            else{
                cout<<"  ";
            }
        }
        for(j=1;j<=i;j++){
                cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1;i<=n/2;i++){
        for(j=1;j<=n/2;j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"  ";
        }
        for(j=0;j<=n/2-i;j++){
            cout<<"* ";
        }
        for(j=1;j<=n;j++){
            cout<<"  ";
        }
        for(j=0;j<=n/2-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}