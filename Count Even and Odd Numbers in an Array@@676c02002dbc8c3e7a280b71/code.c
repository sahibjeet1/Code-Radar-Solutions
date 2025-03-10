// Your code here...
#include <stdio.h>
int main(){
    int n,evencount=0,oddcount=0;
    scanf("%d",&n);
    int arr[n];
    scanf("%d", &arr[n]);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;    
        }
        else if(arr[i]%2 !=0){
            oddcount++;
        }
    }
    printf("%d %d",evencount , oddcount);

}