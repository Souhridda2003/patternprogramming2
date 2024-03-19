#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<(char)(a+64);
            a--;
        }
        for(int l=1;l<=i-1;l++){
            cout<<(char)(a+66);
            a++;
        }
        cout<<endl;
    }
}