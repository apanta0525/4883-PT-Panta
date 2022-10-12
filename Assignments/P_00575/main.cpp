/**
 * Aashish Panta
 * 4883
 * 10 / 12 /2022
 */
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <fstream>

#define endl "\n"

using namespace std;


/**
 * do the processing
 * @param input
 * @return 
 */
int process_line(char input[]) {

    int result, x = 0;

    int k = strlen(input);

    while (k > 0) {
        result += (input[x] - '0') * (pow(2, k) - 1);
        k--;
        x++;
    }
    return result;

}


/**
 * find string size
 * @param line
 * @return 
 */
int find_size(string line) {

    int n = 0;
    for (int i = 0; i < line.length(); i++) {

        n++;
    }
    
    return n;

}

int main() {


    cout << "Enter Input File >> ";

    string fname;

    cin>> fname;

    ifstream input_file(fname, ios_base::in);
    string line;

    /** for testing only*/
    char s[1001];
    while (cin >> s) {
        int r = process_line(s);
        cout << r << endl;
    }


    while (std::getline(input_file, line)) {


        int n = find_size(line);
        
        char input[n + 1];
        cout<<"Output ("<<n<<") ";  // display size
        strcpy(input, line.c_str()); // compare string
        if (strcmp(input, "0") == 0) {
            break;
        }


        int result = process_line(input);

        cout << result << endl;
    }





    return 0;
}
