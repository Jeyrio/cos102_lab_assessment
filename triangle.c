#include <stdio.h>

int main() {
    
    float angle1, angle2, angle3;

    printf("Enter the first angle:");
    scanf("%f", &angle1);

    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    
    angle3 = 180 - angle1 - angle2;
    
    if (angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        printf("Invalid triangle: angles must be positive nd sum to less than 180.\n");
    }
    else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle is right-angled.\n");
    }
    else {
        printf("The triangle is NOT right-angled.\n");
    }
    
    return 0;
}