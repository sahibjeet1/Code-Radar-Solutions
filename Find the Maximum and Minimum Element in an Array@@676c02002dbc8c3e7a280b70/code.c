// Your code here...
#include <stdio.h>
int main(){
    int n,i,max,min;
    scanf("%d", &n);
    int arr[n];
    max=min=arr[0];
    scanf("%d",arr[0]);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
           min=arr[i];
        }
    }
    printf("%d %d", min, max);

}