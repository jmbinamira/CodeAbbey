/*
Input:
3
12 8
11 -3
400 5

Output:
2 -4 80
*/

#include <iostream>
#include <cmath>
//using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        double a, b, quotient, intPart, decPart, result;
        printf("\n");
        scanf("%lf %lf", &a, &b);
        
        quotient = a/b;
        decPart = modf(quotient, &intPart);   //Checks decimal if >= 0.5 (for +) or <= -0.5 (for -)
        
        if (quotient > 0) {
            double roundUp;
            result = (decPart >= 0.5) ? roundUp = ceil(quotient) : intPart;
            printf("%lf\n", result);
        } 
        
        if (quotient < 0) {
            result = (decPart <= -0.5) ? intPart += -1 : intPart; 
            printf("%lf\n", result);
        }
    }

    return 0;
}