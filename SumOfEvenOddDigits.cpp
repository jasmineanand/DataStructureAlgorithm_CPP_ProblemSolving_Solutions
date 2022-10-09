#include <iostream>
using namespace std;
int main() {
    int a;
    int se=0;
    int so=0;
    int n;
    cin>>n;
    while (n>0){
        a=n%10;
        if (a%2==0) {
            se=se+a;
        }
        else { 
            so=so+a;
        }
        n=n/10;
    }
    cout <<se<<" "<<so;

}