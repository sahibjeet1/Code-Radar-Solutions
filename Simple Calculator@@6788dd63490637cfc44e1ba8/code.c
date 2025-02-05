#include <stdio.h>
int main() {
    float a,b,c,result;
    char cal;
    scanf("%d %d %c %d", &a, &b, &c, &result);
    
    if (cal=='+') {
        result = a + b;
    } else if (cal=='-') {
        result = a - b;
    } else if (cal=='/') {
        result = a/b;
    } else if (cal=='*') {
        result = a * b;
    }
    
    printf("%d", &result);

    return 0;
}