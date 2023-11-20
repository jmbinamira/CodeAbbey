/*
Input:
3
100 8
15 245
1945 54

Output:
108 260 1999
*/

#include <iostream>

int main() {
    int n, a, b, sum = 0;

    scanf("%d", &n);    
    
    for (int i = 0; i < n; ++i) {
        printf("\n");
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("%d\n", sum);
    }

    return 0;
}