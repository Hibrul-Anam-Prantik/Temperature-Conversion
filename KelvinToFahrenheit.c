# include <stdio.h>

/*  Write a code that will take a temperature from the user in Kelvin scale 
    and show it in Fahrenheit scale.
    Formula: C/5 = (F - 32)/9 = (k - 273)/5
*/

int main() {
    float tempK, tempF;
    printf("Temperature in Kelvin scale: ");
    scanf("%f", &tempK);
    tempF = 9 * (tempK - 273)/5 + 32;
    printf("Initial Temperature = %.2f K\n", tempK);
    printf("Final Temperature: %.2f F\n", tempF);
    return 0;
}