#include <stdio.h> 
int main() {
    int a, b;
    int result; //
    char op;
    printf("enter two number: ");
    scanf("%d %d", &a, &b);
    printf("enter operator (+, -, *, /): ");
    while (1){
        printf("again? (y/n): ");
        printf("continue? (y/n): ");
    scanf(" %c", &op);
    if (op == 'n') {
        break;
    }
    switch(op) {
        case '+':
             result = a + b;
            printf("result: %d\n", result);
            break;

            case '-':
                result = a - b;
                 printf("result: %d\n", result);
                break;

        case '*':
            result = a * b;
             printf("result: %d\n", result);
            break;
        
        case '/':
        if (b == 0) {
            printf("error: cannot divide by zero!\n");
        } else {

            result = a / b;
             printf("result: %d\n", result);
        }
            break;

        defult:
            printf("Invalid operator!\n");
            break;

    }
    }
   
    return 0;
}