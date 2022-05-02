// Write a program in C to swap two numbers using function.
#include<stdio.h>

void swap(int *a,int *b);
int main(){
    int a,b;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Swapped values are %d %d",a,b);
    return 0;   
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}