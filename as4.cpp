#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"no of rows: ";
    cin>>n;
    m=n-1;
    int b=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<(char)(b+64);
        b++;
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        int a=1;
        for(int j=1;j<=m+1-i;j++){
                cout<<(char)(a+64);
                a++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
        for(int j=1;j<=m+1-i;j++){
                cout<<char(a+64);
                a++;
        }
    cout<<endl;
    }
}