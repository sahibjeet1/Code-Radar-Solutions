// Your code here...
#include <stdio.h>
int main(){
    int n,max, secmax;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[n]);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(secmax<arr[i] && arr[i] != max){
            secmax=arr[i];
        }
    }
    printf("%d", secmax);
}