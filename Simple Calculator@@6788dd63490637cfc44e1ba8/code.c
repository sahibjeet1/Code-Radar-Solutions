#include <stdio.h>
int main() {
    float a,b;
    char cal;
    scanf("%f %f %c", &a, &b, &c);
    switch(cal){
        case '+':
        printf("%f %f %c", a+b, c);
        break;
        case '-':
        printf("%f %f %c", a-b, c);
        break;
        case '*':
        printf("%f %f %c", a*b, c);
        break;
        case '/':
        printf("%f %f %c", a/b, c);
        break;
        default:
        printf("Invalid");
    }
    return 0;
}