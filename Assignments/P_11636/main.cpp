/**
 * Aashish Panta
 * 4883
 * 10 / 12 /2022
 */
#include <iostream>
#include <iomanip>
#include <vector>
#define endl "\n"
using namespace std;

void solve(vector<int> v) {

    int t = 1;
    //cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++) {

        int c,tm;
       
        for (tm = 1, c = 0; tm < v[i]; tm <<= 1, c++);
        cout<<"Case "<<t++<<":"<<c<<endl;
        
    }

}

int main() {
    
   
    vector<int> v;
    int n;
    while (scanf("%d", &n) == 1 && n > 0) {
        v.push_back(n);
    }
    
    solve(v);
    return 0;
}
