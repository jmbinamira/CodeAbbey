/*
Input:
5
610
34
0
1346269
10946

Output:
15 9 0 31 21
*/

#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    int n1 = stoi(line);

    for (int n2 = 0; n2 < n1; ++n2) {
        getline(cin, line);
        long long fibNum = stoll(line);  //long long is an int for very large numbers
        int a = 0, b = 1, sum = 0, fibIndex = 0;  //The first two values are 0 and 1

        while(sum <= fibNum && fibNum != 0) {  //If the fibonacci number inputted is 0, the index of it will be 0
            sum = a + b;
            a = b;
            b = sum;
            ++fibIndex;
        }

        cout << fibIndex << endl;
    }

    return 0;
}