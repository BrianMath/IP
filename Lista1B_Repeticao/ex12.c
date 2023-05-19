#include <stdio.h>
#include <math.h>
 
int main() {
    int maxHipot, hip, cat1, cat2, cateto1, cateto2, catSalvo;
    scanf("%d", &maxHipot);
 
    // Hipotenusa
    for (hip = 5; hip <= maxHipot; hip++) {
        // Cateto 1
        for (cat1 = 1; cat1 <= maxHipot; cat1++) {
            // Cateto 2
            if (catSalvo == cat1) {
                catSalvo = 0;
                break;
            }
            
            for (cat2 = 1; cat2 <= maxHipot; cat2++) {
                if (pow(hip, 2) == pow(cat1, 2) + pow(cat2, 2)) {
                    printf("hipotenusa = %d, catetos %d e %d\n", hip, cat1, cat2);
                    catSalvo = cat2;
                }
            }
        }
    }
    
    return 0;
}