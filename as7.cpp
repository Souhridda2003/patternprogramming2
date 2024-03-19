#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of lines: ";
    cin>>m;
    int n=m-1;
    for(int l=1;l<=2*m-1;l++){
        cout<<char(l+64);
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n+1-i;j++){
            cout<<(char)(a+64);
            a++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
        for(int j=1;j<=n+1-i;j++){
            cout<<char(a+64);
            a++;

        }
        cout<<endl;
    }
}