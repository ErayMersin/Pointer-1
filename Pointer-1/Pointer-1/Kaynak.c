#include<stdio.h>
#include<stdlib.h>

int main() {

    int sayi = 10;
    float sayi2 = 15.345;
    char kelime = 'a';

    printf("%d\n", sayi);
    printf("%f\n", sayi2);
    printf("%c\n", kelime);

    printf("\nBellek Adresleri\n\n");

    printf("%x\n", &sayi);
    printf("%x\n", &sayi2);
    printf("%x\n\n", &kelime);

    return 0;
}