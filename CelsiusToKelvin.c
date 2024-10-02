# include <stdio.h>

/*  Write a code that will take a temperature from the user in Fahrenheit scale 
    and show it in Celsius scale.
    Formula: C/5 = (F - 32)/9 = (k - 273)/5
*/

int main() {
    float tempC, tempK;
    printf("Temperature in Celsius scale: ");
    scanf("%f", &tempC);
    tempK = tempC + 273;
    printf("Iinitial Temperature: %.2f C\n", tempC);
    printf("Final Temperature   : %.2f K\n", tempK);
    return 0;
}