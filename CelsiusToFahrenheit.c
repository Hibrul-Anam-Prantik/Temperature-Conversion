# include <stdio.h>

/*  Write a code that will take a temperature from the user in Celsius scale 
    and show it in Fahrenheit scale.
    Formula: C/5 = (F - 32)/9 = (k - 273)/5
*/

int main() {
    float tempC, tempF;
    printf("Temperature in Celsius scale: ");
    scanf("%f", &tempC);
    tempF = (tempC * 9)/5 + 32;
    printf("Initial Temperature = %.2f C\n", tempC);
    printf("Final Temperature: %.2f F\n", tempF);
    return 0;
}