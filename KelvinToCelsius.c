# include <stdio.h>

/*  Write a code that will take a temperature from the user in Kelvin scale 
    and show it in Celsius scale.
    Formula: C/5 = (F - 32)/9 = (k - 273)/5
*/

int main() {
    float tempK, tempC;
    printf("Temperature in Kelvin scale: ");
    scanf("%f", &tempK);
    tempC = tempK - 273;
    printf("Initial Temperature: %.2f K\n", tempK);
    printf("Final Temperature  : %.2f C\n", tempC);
    return 0;
}