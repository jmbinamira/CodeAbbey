/*
Input:
2
2 3
4 10

Output:
(1 6) (2 20)
*/

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    int n1 = stoi(line);

    for (int n2 = 0; n2 < n1; ++n2) {
        int a, b, difference, gcd, lcm, origA, origB;

        getline(cin, line);
        istringstream iss(line);
        iss >> a >> b;

        origA = a;
        origB = b;

        while (a < b || a > b) {  //Loop until a = b
           if (a < b) {
                b -= a;
           }

           else if (a > b ) {
                a -= b;
           }
        }

        gcd = a;  //Can be either a or b since they're both equal
        lcm = (origA * origB) / gcd;
    
        cout << "(" << gcd << " " << lcm << ")" << " ";
    } 
    
    return 0;
}