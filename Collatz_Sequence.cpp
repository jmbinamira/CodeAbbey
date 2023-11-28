/*
Input:
3
2 15 97

Output:
1 17 118
*/

#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    int testCases = stoi(line);

    for (int n = 0; n < testCases; ++n) {
        int x, steps = 0;
        scanf("%d", &x);
        
        /*getline(cin, line);
        int x = stoi(line), steps = 0;*/

        while (x != 1) {
            ++steps;

            if (x % 2 == 0) {
                x /= 2;  
            }    
            else {
                x = 3 * x + 1;
            } 
        }

        cout << steps << " ";
    }

    return 0;
}