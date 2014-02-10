// Matthew Bender
// 02/10/14

#include <stdio.h>

unsigned int octtoint(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    unsigned int output = d;
    output += (c << 8);
    output += (b << 16);
    output += (a << 24);
    return output;
}
void intobin(unsigned int num) {
    int i = 0;
    printf("\nBinary: ");
    unsigned char c = '\0';
    unsigned int MASK = 1<<31;   
    
    for(i = 0; i < 32; i++ ){
        if( i > 0 && i % 8 == 0 ) printf(" ");
        if( (num & MASK) == MASK ) printf("1");
        else printf("0");
        MASK = MASK >> 1;
     }
     printf("\n");

}


int main() {
    unsigned int octa1, octa2, octa3, octa4;
    unsigned int octb1, octb2, octb3, octb4;
    unsigned int octc1, octc2, octc3, octc4;

    printf("Please enter the first IP address:");
    scanf("%d.%d.%d.%d", &octa1, &octa2, &octa3, &octa4);

    printf("Please the subnet:");
    scanf("%d.%d.%d.%d", &octb1, &octb2, &octb3, &octb4);

    printf("Please enter the second IP address:");
    scanf("%d.%d.%d.%d", &octc1, &octc2, &octc3, &octc4);


    unsigned int ip1, ip2, subnet;
    ip1 = octtoint(octa1,octa2,octa3,octa4);
    ip2 = octtoint(octc1,octc2,octc3,octc4);
    subnet = octtoint(octb1,octb2,octb3,octb4);


    printf("-----------------------------------\n");
    if((ip1 & subnet) == (ip2 & subnet)) {
        printf("They are on the same network.\n");
    }
    else {
        printf("They are NOT on the same network.\n");
    }


}
