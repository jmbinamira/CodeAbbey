/*
Input:
four score and seven years ago

Output:
oga sraey neves dna erocs ruof
*/

#include <iostream>
using namespace std;

int main() {
    string userInput;
    getline(cin, userInput);

    for (int n = userInput.size(); n >= 0; --n) {
        cout << userInput[n];
    }

    return 0;
}