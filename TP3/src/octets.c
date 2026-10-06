#include <stdio.h>

int main() {
    // Quelques variables avec des valeurs arbitraires
    short s = 770;             // 0x0302 en hexa (Petit-boutiste : 02 03)
    int i = 67305985;          // 0x04030201
    long int li = 578437695752307201L; 
    float f = 2.5f;
    double d = 1.0;
    long double ld = 1.0L;

    // Pour le short
    printf("Octets de short :\n");
    unsigned char *ptr = (unsigned char *)&s;
    for(size_t k = 0; k < sizeof(short); k++) {
        printf("%02x ", *(ptr + k)); // %02x affiche en hexa sur 2 caractères
    }
    printf("\n\n");

    // Pour l'int
    printf("Octets de int :\n");
    ptr = (unsigned char *)&i;
    for(size_t k = 0; k < sizeof(int); k++) {
        printf("%02x ", *(ptr + k));
    }
    printf("\n\n");

    // Pour le long int
    printf("Octets de long int :\n");
    ptr = (unsigned char *)&li;
    for(size_t k = 0; k < sizeof(long int); k++) {
        printf("%02x ", *(ptr + k));
    }
    printf("\n\n");

    // Pour le float
    printf("Octets de float :\n");
    ptr = (unsigned char *)&f;
    for(size_t k = 0; k < sizeof(float); k++) {
        printf("%02x ", *(ptr + k));
    }
    printf("\n\n");

    // Pour le double
    printf("Octets de double :\n");
    ptr = (unsigned char *)&d;
    for(size_t k = 0; k < sizeof(double); k++) {
        printf("%02x ", *(ptr + k));
    }
    printf("\n\n");

    // Pour le long double
    printf("Octets de long double :\n");
    ptr = (unsigned char *)&ld;
    for(size_t k = 0; k < sizeof(long double); k++) {
        printf("%02x ", *(ptr + k));
    }
    printf("\n");

    return 0;
}