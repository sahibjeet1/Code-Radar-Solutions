// Your code here...
#include <stdio.h>
int main(){
    int n,max, secmax;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]==arr[n]){
            return -1;
        }
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