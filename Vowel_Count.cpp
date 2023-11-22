/*
Input:
4
abracadabra
pear tree
o a kak ushakov lil vo kashu kakao
my pyx

Output:
5 4 13 2
*/

#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    int n1 = stoi(line);

    for (int n2 = 0; n2 < n1; ++n2) {
        getline(cin, line);
        string userInput = line;

        int vowelCount = 0;
        for (int n3 = 0; n3 < userInput.size(); ++n3) {
            char check = userInput[n3];
            char lowerCh = tolower(check);
            
            if (lowerCh == 'a' || lowerCh == 'o' || lowerCh == 'u' || lowerCh == 'e' || lowerCh == 'y' || lowerCh == 'i') {
                ++vowelCount;
            }
        }
        cout << vowelCount << " ";
    }

    return 0;
}