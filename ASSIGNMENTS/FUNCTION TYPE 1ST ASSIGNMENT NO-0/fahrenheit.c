#include <stdio.h>

// Function declaration
void convertTemperature();

void main() {
    convertTemperature();  // Function call
}

// Function definition
void convertTemperature() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}
