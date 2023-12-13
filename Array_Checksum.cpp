/**
Input:
6
3 1 4 1 5 9

Output:
8921379
*/

#include <iostream>
using namespace std;

int main() {
    //Set array size. Long long because input digits are up to 7 digits
    string line;
    getline(cin, line);
    int arraySize = stoi(line);  
    long long checksumArray[arraySize] = {};

    //Adds elements to the array
    for(int n1 = 0; n1 < arraySize; ++n1) {
        long long x;
        scanf("%lld", &x);
        checksumArray[n1] = x;
    }   

    //Calculation (initialize result = 0)
    long long seed = 113, limit = 10000007, result = 0;
    for(int n2 = 0; n2 < arraySize; ++n2) {
        result = (result + checksumArray[n2]) * seed;
        result %= limit;
    }
    
    cout << result << endl;
}