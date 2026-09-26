#include <stdio.h>

int main() {
    float radius;
    #define PI 3.14159
    float area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
