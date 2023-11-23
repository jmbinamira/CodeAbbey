/*
Input:
3
7 3 5
15 20 40
300 550 137

Output:
5 20 300
*/

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    int n1 = stoi(line);   

    for (int n2 = 0; n2 < n1; ++n2) {
        int a, b, c, median;
        
        getline(cin, line);
        istringstream iss(line);
        iss >> a >> b >> c;

        if (a < b && a < c) {
            median = (b < c) ? b : c;
            cout << median << endl;
        }
        
        else if (a > c && b > c) {
            median = (a < b) ? a : b;
            cout << median << endl;
        }

        else if (a > b && b < c) {
            median = (a > c) ? c : a;
            cout << median << endl;
        }
    }

    return 0;
}