//brute force, math, 800
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int T; //test case
    int n, x, y, z; 
    int hours_ai=0;
    int hours_noai=0;

    cin>>T;
    for (int i=0; i<T; i++){
        hours_ai=0; hours_noai=0; 
        cin>>n>>x>>y>>z;
        hours_noai= ((n + (x+y)-1)/(x+y));

        //maxim finishes before setup
        if (n <= z * x) {
            hours_ai = (n + x - 1) / x;
        }
        else {
            int remaining = n - z * x;
            hours_ai = z + (remaining + (x + 10 * y) - 1) / (x + 10 * y); //how to do ceil w integers
        }
        cout << min(hours_noai, hours_ai) << '\n';
    }
    //notes- best not to do simulation for small memory and time limit. use simple math formulas
}
