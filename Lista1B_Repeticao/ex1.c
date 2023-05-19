#include <stdio.h>
 
int main() {
    int num;
    int i;
    double F, C;
    scanf("%d", &num);
 
    for (i = 0; i < num; i++) {
        scanf("%lf", &F);
 
        C = 5*(F - 32)/9;
        printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", F, C);
    }
 
    return 0;
}