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
        string userInput, cleanUserInput, reversed;
        getline(cin, userInput);

        //Removes spaces/characters. userInput IS NOW cleanUserInput
        for (int n3 = 0; n3 < userInput.size(); ++n3) {  
            if (userInput[n3] != ' ' && userInput[n3] != ',' && userInput[n3] != '!' && userInput[n3] != '?' && userInput[n3] != '-') {
                cleanUserInput.push_back(userInput[n3]);
            }   
        }

        //Converts cleanUserInput to lowercase
        for (int n3 = 0; n3 < cleanUserInput.size(); ++n3) {
            cleanUserInput[n3] = tolower(cleanUserInput[n3]);
        }

        //Reverses cleanUserInput
        for (int n3 = cleanUserInput.size() - 1; n3 >= 0; --n3) {
            reversed += cleanUserInput[n3];
        }

        if (cleanUserInput == reversed) {
            cout << "Y " << endl;
        }
        else {
            cout << "N " << endl;
        }
    }

    return 0;
}