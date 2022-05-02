// Write a program in C to get the largest element of an array using the function.
#include<stdio.h>
int largestnumber(int arr[], int length);
int main(){
    int n;
    printf("Enter the number of elements : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : \n");
    for(int i = 0; i < n; i++)    
    scanf("%d", &arr[i]);
    printf("The largest element is : %d", largestnumber(arr, n));
    return 0;
}
int largestnumber(int arr[], int length){
    for(int i = 1; i<length; i++){
        if(arr[i]>arr[0])
            arr[0] = arr[i];
    }
    return arr[0];
}