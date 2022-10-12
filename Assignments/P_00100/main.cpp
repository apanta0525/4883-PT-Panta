/**
 * Aashish Panta
 * 4883
 * 10 / 12 /2022
 */
#include <iostream>

#define endl "\n"

using namespace std;

int getCycles(int n) {

    int cycles = 0;
    while (n != 1) {
        
        
        if (n % 2 != 0) {
            // if n is odd then n ←− 3n + 1
            n = (3 * n) + 1;
        } else {

            n = n / 2; // if n is even
        }
        cycles ++;
    }
    
    return cycles+1;  // include the last cycle where n  = 1

}


//find max cycles
int getMaxCycles(int i, int j) {
    
    int max = 0;
    
    //start from i, i +1, i + 1 +1, ..... i <=
    for(; i <= j; i++){
        
        int cycles = getCycles(i);
        
        if(cycles > max){
            max = cycles;
        }
    
    }
    
    return max;
    
}


void print(int start, int end){

    int max = getMaxCycles(start,end);
    cout << start << " " << end << " " << max << endl;
}


int main() {
   
    print(1,10);
    print(100,200);
    print(201,210);
    print(900,1000);
    
    return 0;
}
