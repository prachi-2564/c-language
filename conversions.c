#include <math.h>
#include <stdio.h>

int convert(long long bin) {
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        i++;
        bin /= 10;
    }
    i = 1;
    printf("\nDecimal no. is: %d",dec);

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}
int main() {
    long long bin;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);
    
    printf("\nbinary no. %lld \noctal no. %d", bin, convert(bin));
    return 0;
}