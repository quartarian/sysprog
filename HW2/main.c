#include <stdio.h>

unsigned int octtoint(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    d += (c << 4);
    d += (b << 8);
    d += (a << 16);
    return d;
}

int main() {
    unsigned int octa1, octa2, octa3, octa4;
    unsigned int octb1, octb2, octb3, octb4;
    unsigned int octc1, octc2, octc3, octc4;

    printf("Please enter the first IP address:");
    scanf("%i.%i.%i.%i", &octa1, &octa2, &octa3, &octa4);

    octa4 = octa4 << 1;
    printf(octa4);    
    
    
    /* 
    printf(octtoint(octa1,octa2,octa3,octa4));

    printf("Please enter the subnet:");
    scanf("%i.%i.%i.%i", &octb1, &octb2, &octb3, &octb4);

    printf("Please enter the second IP address:");
    scanf("%i.%i.%i.%i", &octc1, &octc2, &octc3, &octc4);
    */



    //printf("\nYou entered %i, %i, %i, %i\n",octa1,octa2,octa3,octa4);



}
