/*
Input:
3
5 3
2 8
100 15

Output:
3 2 15
*/

#include <iostream>

int main() {
    int n;
    scanf("%d", &n);    
    
    for (int i = 0; i < n; ++i) {
        int a, b, ans;
        printf("\n");
        scanf("%d %d", &a, &b);
        
        ans = (a < b) ? a : b;
        printf("%d\n", ans);    
    }

    return 0;
}