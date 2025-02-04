#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %c", &a, &b, &c);
    switch(c){
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