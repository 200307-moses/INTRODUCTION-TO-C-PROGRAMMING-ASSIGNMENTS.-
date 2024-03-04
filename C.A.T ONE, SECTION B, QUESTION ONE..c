#include<stdio.h>
#include<math.h>

#define pi 3.142857143

int main() {
    float radius, height, volume, surface_area;

    // Prompt the user to enter radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = pi * pow(radius, 2) * height;
    surface_area = 2 * pi * pow(radius, 2) + 2 * pi * radius * height;

    // Our results 
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);

    return 0;
}
