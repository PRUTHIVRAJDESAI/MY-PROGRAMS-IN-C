// Calculate Simple Interest
#include <stdio.h>
int main ()
{
    float RI, PV, DU, IV;

    printf("ENTER THE PRINCIPAL AMOUNT, RATE OF INTEREST AND DURATION IN YEARS:");
    scanf("%f %f %f", &PV, &RI, &DU);

    //Calculation:
    IV= PV*RI*DU/100;

    printf("INTEREST VALUE IS %f", IV);

    return 0;
}