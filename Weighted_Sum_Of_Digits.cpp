/*
Input:
3
9 15 1776

Output:
9 11 60
*/

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string line;
    getline(cin, line);  
    int n = stoi(line);
    
    getline(cin, line);
    istringstream iss(line);    
    int num;                    
    vector<int> inputContainer;
    while (iss >> num) {
        inputContainer.push_back(num);    
    }
    
    for (int i = 0; i < n; ++i) {
        int quotient = inputContainer[i], wsd = 0, weightProduct = 0;
        string indexSize = to_string(quotient);
        int weight = indexSize.size();
        
        while (quotient != 0) {
            int remainder = quotient % 10;

            weightProduct = remainder * weight;
            wsd += weightProduct;            //wsd = wsd + weightProduct
            --weight;

            quotient /= 10;                  //quotient = quotient / 10
        }
        
        cout << wsd << " ";
    }

    return 0;
}