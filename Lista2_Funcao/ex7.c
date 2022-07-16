#include <stdio.h>
 
/**
 * Imprime um bit por vez de um byte
 * @param bit 
 */
void pbyte(unsigned char byte) {
    int i, bit, peso = 128;
 
    for (i = 0; i < 8; i++) {
        bit = byte/peso;
        printf("%d", bit);
        byte = byte%peso;
        peso = peso/2;
    }
}
 
/**
 * Imprime os bits dos n bytes endereçados por end_byte.
 * 
 * @param end_byte endereço do primeiro byte a ser impresso
 * @param n quantidade de bytes a serem impressos
 */
void print_bytes(const void *end_byte, int n) {
    int i;
    unsigned char *byte = (unsigned char *)end_byte;
 
    for (i = 0; i < n; i++) {
        pbyte(*byte);
        printf(" ");
        byte++;
    }
}
 
int main() {
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    float f;
    double d;
    scanf("%lf", &d);
    
    uc = d;
    print_bytes(&uc, sizeof(unsigned char));
    printf("\n");
 
    us = d;
    print_bytes(&us, sizeof(unsigned short));
    printf("\n");
 
    ui = d;
    print_bytes(&ui, sizeof(unsigned int));
    printf("\n");
 
    f = d;
    print_bytes(&f, sizeof(float));
    printf("\n");
 
    print_bytes(&d, sizeof(double));
    printf("\n");
 
    return 0;
}