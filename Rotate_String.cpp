/*
Input:
2
3 forwhomthebelltolls 
-6 verycomplexnumber  17(word size) - 6(user input) = 11(number)

Output:
whomthebelltollsfor numberverycomplex
*/

#include <iostream>
#include <sstream>
using namespace std;

int main () {
    string line;
    getline (cin, line);
    int n1 = stoi(line);

    for (int n2 = 0; n2 < n1; ++n2) {
        string inputWord, tempWord;
        int index;
        
        getline (cin, line);
        istringstream iss(line);
        iss >> index >> inputWord;

        if (index > 0) {  //Positive user input
            for (int n3 = 0; n3 < index; ++n3) {
                tempWord += inputWord[n3];  //Strings are array of chars
            }
            inputWord.erase(0, index); //Erase X(user input) characters starting from index 0
        }

        if (index < 0) {  //Negative user input
            index *= -1;  //Converts - to +
            for (int n3 = 0; n3 < inputWord.size() - index; ++n3) {
                tempWord += inputWord[n3];
            }
            inputWord.erase(0, tempWord.size());
        }

        inputWord.append(tempWord);  //Combines the moved letters
        cout << inputWord << endl;
    }
    
    return 0;
}

