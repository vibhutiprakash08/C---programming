#include <stdio.h>
int main() {
    int age;
    float marks;
    char grade;
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("Enter grade:" );
    scanf(" %c", &grade);
    
    printf("\nAge = %d\n", age);
    printf("Marks = %.2f\n", marks);
    printf("Grade = %c\n", grade);

    return 0;


}