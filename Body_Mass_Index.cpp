/*
Input:
3
80 1.73
55 1.58
49 1.91

Output:
over normal under
*/
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
    string line;
    
    getline(cin, line);
    int n1 = stoi(line);

    for (int n2 = 0; n2 < n1; ++n2) {
        double userWeight, userHeight, bmi;
        
        getline(cin, line);
        istringstream iss(line);
        iss >> userWeight >> userHeight;
        
        bmi = userWeight / pow(userHeight, 2);

        if (bmi < 18.5) {
            cout << "under " << endl;
        }
        else if (bmi >= 18.5 && bmi < 25.0) {
            cout << "normal " << endl;
        }
        else if (bmi >= 25.0 && bmi < 30.0) {
            cout << "over " << endl;
        }
        else if (bmi >= 30.0) {
            cout << "obese " << endl ;
        }
    }
    
    return 0;
}