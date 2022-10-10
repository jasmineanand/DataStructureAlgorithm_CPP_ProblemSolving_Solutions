#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int i=1;
    while (i<=n) {
        int n1= ((n+1)/2);
        int spaces=1;
        while (spaces<=n1-i) {
            cout <<" ";
            spaces++;
        }
        int j=1;
        while (j<=2*i-1) {
            cout <<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
int space=1;
int j=1;
    for(i=1; i<=(n-1); i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(j=1; j<=(2*(n-i)-1); j++)
            cout<<"*";
        cout<<endl;
    
}