// Write a C program to check whether a number is even or odd using functions.
#include<stdio.h>
void evenoddfun(int n);
int main(){
    int n;
    printf("Enter any no.\n");
    scanf("%d",&n);
    evenoddfun(n);
    return 0;
}
void evenoddfun(int n){
    if(n%2 == 0)
    printf("It is even");
    else
    printf("It is odd");
}