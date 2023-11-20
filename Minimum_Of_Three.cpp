/*
Input:
3
7 3 5
15 20 40
300 550 137

Output:
3 15 137
*/

#include <iostream>

int main() {
    int n;
    scanf("%d", &n);    
    
    for (int i = 0; i < n; ++i) {
        int a, b, c, ans;
        printf("\n");
        scanf("%d %d %d", &a, &b, &c);
        
        if (a < b) {
            ans = (a > c) ? c : a;
            printf("%d\n", ans);
        } 
        else if (a > b) {
            ans = (b < c) ? b : c;
            printf("%d\n", ans);
        }
    }

    return 0;
}