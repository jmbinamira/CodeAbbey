/*
Input:
1 3 5 7 9 11 ... 295 297 299 300 298 296 ... 12 10 8 6 4 2

Output:
300 1
*/

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string line;
    getline(cin, line);         //Reads input console
    istringstream iss(line);    //Treats 'line' string as input stream
    
    int num;                    
    vector<int> nums;
    while (iss >> num) {        //While loop reads int from 'iss' 1 by 1. >> reads a value from 'iss' and stores in 'num'       
        nums.push_back(num);    //Adds the value of 'num' to the end of 'nums'
    }
    
    int maxNum = nums[0];
    int minNum = nums[0];
    for (int i = 1; i < nums.size(); ++i) { //i = 1 and not 0 because the initial values of min/maxNum is 0
        if (nums[i] > maxNum) {
            maxNum = nums[i];
        }
        if (nums[i] < minNum) {
            minNum = nums[i];
        }
    }
    
    printf("%d %d", maxNum, minNum );
}