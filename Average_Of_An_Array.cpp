/*
Input:
3
2 3 7 0
20 10 0
1 0

Output:
4 15 1
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string line; //Checks how many test cases
    getline(cin, line);
    int n1 = stoi(line);

    for (int n2 = 0; n2 < n1; ++n2) {
        getline(cin, line);
        istringstream iss(line);

        double num;  //The individual num. per line
        vector<double> numContainer; //Vector where they will be stored
        while (iss >> num) {  //Stores the num. to the vector
            numContainer.push_back(num);
        }

        double zeroCheck = 0, sum = 0, quotient = 0, intPart, decPart, avg;
        while (numContainer[zeroCheck] != 0) {
            sum += numContainer[zeroCheck];
            ++zeroCheck;
            quotient = sum / zeroCheck;

            decPart = modf(quotient, &intPart); //Splits quotient for its int. and decimal
            avg = (decPart >= 0.5) ? ceil(quotient) : intPart; //Rounds up int. if its >= 0.5
        }
    
        cout << avg << " ";
    }

    return 0;
}