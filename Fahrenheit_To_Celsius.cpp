/*
Input:
5 495 353 168 -39 22
Output:
257 178 76 -39 -6
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string line;
    vector<double> temps;
    
    double temp;
    getline(cin, line);         //Reads input console
    istringstream iss(line);    //Treats 'line' string as input stream
    while (iss >> temp) {       //Reads temp from 'iss' and stores in 'temp'
        temps.push_back(temp);
    }
    
    for (int i = 1; i <= temps[0]; ++i) {
        double celsius;
        celsius = (temps[i] - 32) * 5 / 9;
        
        if (celsius > 0) {
            double intPart, decPart, roundUp, result;
            decPart = modf(celsius, &intPart); //Decimal stored in 'decPart', int stored in 'intPart'
            
            result = (decPart >= 0.5) ? roundUp = ceil(celsius) : intPart;
            printf("%lf ", result);
        }

        else if (celsius = 0) {
            printf("0");
        }
    }

    return 0;
}