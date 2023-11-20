/*
Input:
2
3 4 5
1 2 4

Output:
1 0
*/

#include <iostream>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        int a, b, c, firstCheck = 0, secondCheck = 0, thirdCheck = 0;
        printf("\n");
        scanf("%d %d %d", &a, &b, &c);
        
        firstCheck = a + b;
        secondCheck = a + c;
        thirdCheck = b + c;
        
        char triangle = (firstCheck > c && secondCheck > b && thirdCheck > a) ? '1' : '0';
        printf("%c\n ", triangle);
    }

    return 0;
}