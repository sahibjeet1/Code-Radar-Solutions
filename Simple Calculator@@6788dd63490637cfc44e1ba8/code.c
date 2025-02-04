#include <stdio.h>
int main() {
    float a,b,result;
    char cal;
    scanf("%f %f %c", &a, &b, &result);
    switch(cal){
        case '+':
        result = a+b;
        printf("%f", result);
        break;
        case '-':
        result = a-b;
        printf("%f",result);
        break;
        case '*':
        result= a*b;
        printf("%f", result);
        break;
        case '/':
        result = a/b;
        printf("%f",result);
        break;
        default:
        printf("Invalid");
    }
    return 0;
}