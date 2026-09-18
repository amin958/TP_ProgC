#include <stdio.h>

int main() {
    // i. char
    char c = 'A';
    signed char sc = -120;
    unsigned char uc = 250;
    
    printf("--- Type char ---\n");
    printf("char : %c\n", c);
    printf("signed char (valeur numérique) : %d\n", sc);
    printf("unsigned char (valeur numérique) : %u\n\n", uc);

    // ii. short
    short s = -30000;
    signed short ss = -32000;
    unsigned short us = 65000;
    
    printf("--- Type short ---\n");
    printf("short : %hd\n", s);
    printf("signed short : %hd\n", ss);
    printf("unsigned short : %hu\n\n", us);

    // iii. int
    int i = -2000000000;
    signed int si = -2000000000;
    unsigned int ui = 4000000000U;
    
    printf("--- Type int ---\n");
    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    // iv. long int
    long int li = -2000000000L;
    signed long int sli = -2000000000L;
    unsigned long int uli = 4000000000UL;
    
    printf("--- Type long int ---\n");
    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    // v. long long int
    long long int lli = -9000000000000000000LL;
    signed long long int slli = -9000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;
    
    printf("--- Type long long int ---\n");
    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    // vi, vii, viii. float, double, long double
    float f = 3.14159f;
    double d = 3.1415926535;
    long double ld = 3.14159265358979323846L;
    
    printf("--- Types a virgule flottante ---\n");
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}