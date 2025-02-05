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
    } else if (opr=='/')
    {
        if(b!=2){
        printf("%d %d", a/b);
        {else 
        printf("error");
        }
        }
     else{
        printf("error");
    }
    }
    
    printf("%d", &result);

    return 0;
}