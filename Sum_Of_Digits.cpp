/*
Input:
3
11 9 1
14 90 232
111 15 111

Output:
1 16 21
*/

#include <iostream>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        int a, b, c, sum = 0;
        printf("\n");
        scanf("%d %d %d", &a, &b, &c);
        
        int quotient = (a * b) + c;
        
        while (quotient != 0) {
            int remainder = quotient % 10;
            sum += remainder;               //sum = sum + remainder
            quotient /= 10;
        }
        
        printf("%d\n", sum);
    }

    return 0;
}