#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main (){ 
int basic;
char grade;
cin>> basic >> grade ;
double hra= 0.2* basic;
double da= 0.5* basic;
double pf= 0.11* basic;
int allow;
if (grade == 'A') {
        allow = 1700;
    }
    else if (grade == 'B') {
        allow = 1500;
    }
    else {
        allow = 1300;
    }
    
    double salary=  (basic + hra + da + allow - pf);

     cout<< fixed<<setprecision(0)<<salary<<endl;
}





