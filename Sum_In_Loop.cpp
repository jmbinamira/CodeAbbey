/*
Input:
8
10 20 30 40 5 6 7 8

Output:
126
*/

#include <iostream>

int main() {
    int n, x, sum = 0;

    printf("\n");
    scanf("%d", &n);        //Reads the 1st line

    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);    //Reads the 2nd line
        sum += x;
    }

    printf("\n%d", sum);

    return 0;
}

