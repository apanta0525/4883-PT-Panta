/**
 * Aashish Panta
 * 4883
 * 10 / 12 /2022
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, sum = 0, count = 0;
    float avg;

    cout << ":";
    cin>>n;

    int scores[n];

    cout << ":";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
        sum = sum + scores[i];
    }

    avg = sum / n;

    for (int i = 0; i < n; i++) {
        if (scores[i] > avg) {
            count++;
        }
    }

    cout << fixed;
    cout << " " << setprecision(3) << (count * 100.0) / n << "%";

    return 0;
}
