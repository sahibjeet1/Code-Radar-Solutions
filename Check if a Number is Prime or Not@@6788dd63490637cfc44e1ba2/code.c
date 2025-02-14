#include <stdio.h>
int main() {
    int n,i,a=0;
    scanf("%d", &n);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            printf("Prime");
            break;
        }else{
            printf("Not Prime");
        }
    }
    
    return 0;
}