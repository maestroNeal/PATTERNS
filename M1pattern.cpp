/*


 ***
  *
  @@@
  @ @
  @ @
work only for odd numbers

*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the range : ";
    cin>>n;
    if(n%2==0){
        return 0;
    }
    for(i=0;i<n/2+1;i++){
        for(j=1;j<=i;j++){
            cout<<"  ";
        }
        for(j=n-2*i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){

        for(j=1;j<=n/2;j++){
            cout<<"  ";
        }
        for(j=1;j<=n;j++){
            if(i==1||j==1||j==n){
                cout<<"@ ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
