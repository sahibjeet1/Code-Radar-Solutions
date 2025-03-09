// Your code here...
#include <stdio.h>
int main(){
    int n,i,max,min;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i>n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max){
            arr[i]=max;
        }
        if(arr[i]<min){
            arr[i]=min;
        }
    }
    printf("%d %d", min, max);

}