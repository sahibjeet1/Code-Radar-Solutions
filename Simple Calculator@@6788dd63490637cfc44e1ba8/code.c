#include <stdio.h>
int main() {
    int a,b;
    char opr;
    scanf("%d %d %c", &a, &b, &opr);
    
    if (opr=='+'){
        printf("%d %d", a+b);
    } else if (opr =='-') {
       printf("%d %d",a-b);
    } else if (opr=='*') {
        printf("%d %d",a*b),
    } else if (opr=='/') {
        
    }
    
    printf("%d", &result);

    return 0;
}