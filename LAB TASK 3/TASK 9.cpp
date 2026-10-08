#include <stdio.h>

int main() {
    int a, b;

    
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\n--- Before Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);

    
    a = a + b; 
    b = a - b; 
    a = a - b;  

    printf("\n--- After Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);

    
}
