/**
* Aashish Panta
* 4883
* 10 / 12 /2022
*/
#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    int B = 0, A = 0;
    
    while (cin >> A >> B) {
        
        // your stuff here
        int result = A - B;
        if(result < 0){
            
            result *= -1;
        }
        std::cout<<result<<endl;

    }
    return 0;
}
