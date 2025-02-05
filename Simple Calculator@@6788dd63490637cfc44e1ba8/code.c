#include <stdio.h>
int main() {
    int a,b,result;
    char opr;
    scanf("%d %d %c", &a, &b, &opr);
    
    if (opr=='+'){
        result= a+b;
        printf("%d", result);
    } else if (opr =='-') {
        result=a-b;
        printf("%d", result);
    } else if (opr=='*') {
        result=a*b;
        printf("%d", result);
    } else if (opr=='/')
    {
        if(b!=0){
            result=a/b;
            printf("%d", result);
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