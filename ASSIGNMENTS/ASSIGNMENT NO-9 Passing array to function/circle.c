#include <stdio.h>

void display(float area[], int n)
{
    int i;
    printf("\nAreas of circles:\n");
    for(i = 0; i < n; i++)
        printf("Circle %d: %.2f\n", i + 1, area[i]);
}

int main() {
    float radius[3], area[3];
    const float PI = 3.14159;
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter radius %d: ", i + 1);
        scanf("%f", &radius[i]);
        area[i] = PI * radius[i] * radius[i];
    }

    display(area, 3);

    return 0;
}
