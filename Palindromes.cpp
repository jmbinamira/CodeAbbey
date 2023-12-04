/*
Input:
3
Stars
O, a kak Uwakov lil vo kawu kakao!
Some men interpret nine memos

Output:
N Y Y
*/

#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    int n1 = stoi(line);

    for (int n2 = 0; n2 < n1; ++n2) {
        string userInput, reversed;
        getline(cin, userInput);

        for (int n3 = userInput.size() - 1; n3 >= 0; --n3) {  //Reverses the word
            reversed += userInput[n3];
        }

        if (userInput == reversed) {
            cout << "Y " << endl;
        }

        else {
            cout << "N " << endl;
        }

        cout << userInput << "\n" << reversed << endl;
    }
}