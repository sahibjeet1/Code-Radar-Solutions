#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    switch(cal){
        case '+':
        printf("%d %d %c", a+b, c);
        break;
        case '-':
        printf("%d %d %c", a-b, c);
        break;
        case '*':
        printf("%d %d %c", a*b, c);
        break;
        case '/':
        printf("%d %d %c", a/b, c);
        break;
        default:
        printf("Invalid");
    }
    return 0;
}