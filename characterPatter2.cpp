# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    //cout<<" enter n"<<endl;
    cin>>n;
    int i=1;
    while (i<=n) {
        int j=1;
        char startCharacter= 'A'+i-1;
        while (j<=n){
            char  ch= startCharacter + j-1 ;
            cout <<ch;
            j++;
        }
        cout<< endl;
        i++;

    }
}