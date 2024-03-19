#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of lines: ";
    cin>>n;
    int m=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=i;k<=2*n-i;k++){
            if(k==i || k==2*(n-1)-i){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}