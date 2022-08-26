#include <stdio.h>
#include <string.h>
 
int main() {
    int i, achou = 0;
    char pais[100];
    char paises[24][100] = {"brasil", "alemanha", "austria", "coreia", "espanha", "grecia",
                            "estados-unidos", "inglaterra", "australia", "portugal", "suecia",
                            "turquia", "argentina", "chile", "mexico", "antardida", "canada",
                            "irlanda", "belgica", "italia", "libia", "siria", "marrocos", "japao"};
    char frases[24][100] = {"Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!",
                            "Chuk Sung Tan!", "Feliz Navidad!", "Kala Christougena!", "Merry Christmas!",
                            "Merry Christmas!", "Merry Christmas!", "Feliz Natal!", "God Jul!",
                            "Mutlu Noeller!", "Feliz Navidad!", "Feliz Navidad!", "Feliz Navidad!",
                            "Merry Christmas!", "Merry Christmas!", "Nollaig Shona Dhuit!",
                            "Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!", "Milad Mubarak!",
                            "Milad Mubarak!", "Merii Kurisumasu!"};
 
    while (scanf("%s%*c", pais) != EOF) {
        for (i = 0; i < 24; i++) {
            if (strcmp(pais, paises[i]) == 0) {
                printf("%s\n", frases[i]);
                achou = 1;
                break;
            }
        }
 
        if (!achou) {
            printf("-- NOT FOUND --\n");
        }
 
        achou = 0;
    }
 
    return 0;
}