#include <stdio.h>

// Function declaration
float convertToFahrenheit(float c);

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Function call
    fahrenheit = convertToFahrenheit(celsius);

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

// Function definition
float convertToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}
