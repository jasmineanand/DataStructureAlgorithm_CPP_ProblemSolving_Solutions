#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    int i=1; 
    while (i<=n){
        int p=i;
        int j=1;
        while (j<=i) {
            cout << p;
            p++;
            j++;
        }
cout <<endl;
i++;
    }
}