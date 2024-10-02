# include <stdio.h>

/*  Write a code that will take a temperature from the user in Fahrenheit scale 
    and show it in Celsius scale.
    Formula: C/5 = (F - 32)/9 = (k - 273)/5
*/

int main() {
    float tempF, tempC;
    printf("Temperature in Fahrenheit scale: ");
    scanf("%f", &tempF);
    tempC = 5 * (tempF - 32)/9;
    printf("Initial Temperature = %.2f F\n", tempF);
    printf("Final Temperature: %.2f C\n", tempC);
    return 0;
}