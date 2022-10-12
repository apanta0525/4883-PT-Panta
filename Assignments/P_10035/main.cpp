/**
 * Aashish Panta
 * 4883
 * 10 / 12 /2022
 */
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void print(vector<int> a_v,vector<int> b_v) {


    for (int i = 0; i < a_v.size(); i++) {
        int ncounts = 0, cntr = 0;
        
        int a = a_v[i];
        int b = b_v[i];
        
        while (a > 0 || b > 0) {
            cntr = (a % 10 + b % 10 + cntr) / 10;
            a /= 10;
            b /= 10;
            if (cntr) ncounts++;
        }

        if (ncounts == 0) {
            cout << "No carry operation.\n";
        } else cout << ncounts << " carry operation";
        cout << ((ncounts > 1) ? ("s.\n") : (".\n"));
    }

}

int main() {


    vector<int> a_v;
    vector<int> b_v;
    cout << "Enter two numbers:" << endl;
    int a, b;
    while (cin >> a >> b) { // get two numbers

        if (a == 0 && b == 0) {
            break;
        }
        a_v.push_back(a);
        b_v.push_back(b);

    }
    
    print( a_v, b_v);
    return 0;
}

