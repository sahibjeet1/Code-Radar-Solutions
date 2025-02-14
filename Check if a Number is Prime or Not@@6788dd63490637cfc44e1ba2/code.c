#include <stdio.h>
int main() {
    int n,i,a;
    a=1;
    scanf("%d", &n);
    for(i=2;i<=n-1;i++){
        if(a==0){
            printf("Prime");
            break;
        }else{
            printf("Not Prime");
        }
    }
    
    return 0;
}