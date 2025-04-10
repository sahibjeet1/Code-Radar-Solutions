// Your code here...
#include <stdio.h>
int primenum();
int primenum(){
    int num;
    for(int i=2;i<num/2;i++){
        if (num%i==0){
            return 0;
        }
        
    }
    return 1;
}
int main(){
    int n, num;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d", &num);
        printf("%d\n", primenum(num));
    }

}