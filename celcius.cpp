#include <iostream>
using namespace std;
int main() {
    int S;
    int E;
    int W;
    cin>>S>>E>>W;
    int SC= ((5.0)/9* (S-32));
    int EC=((5.0)/9 *(E-32));
    int WC= ((5.0)/9 *(W-32));
    cout<< SC<<" " << EC<< " "<< WC<<endl;
     

}