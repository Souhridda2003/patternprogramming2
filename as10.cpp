#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of lines: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || i==2 || k==2*i-1 || i==k){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int l=1;l<=2*n+1;l++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=i;k<=2*n-i;k++){
            if(k==i || i==n-1 || k==2*n-i || k==i/2){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}