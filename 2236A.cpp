#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) { //better than for loop for time complexity
        int n;
        cin >> n;

        int mx = 1; //max h
        int mn = 6; //min h
        //dont use array + arrh[x] is only a part of gcc
        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
            if (h > mx) mx = h;
            if (h < mn) mn = h;
        }

        cout << mx + 1 - mn << '\n';
    }
}
