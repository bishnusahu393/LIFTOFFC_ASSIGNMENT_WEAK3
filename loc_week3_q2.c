// write a program in C to check a number is a prime number or not using recursion.
#include<stdio.h>
#include<stdbool.h>
bool isprime(int n,int m){
    if(n==m)
    return true;
    else if(n%m==0)
    return false;
    else
    return isprime(n,m+1);
}
int main(){
    int n;
    printf("Enter any no. \n");
    scanf("%d",&n);
    if(isprime(n,2)){
        printf("It is prime.");
    }
    else
    printf("It is composite.");
    return 0;
}
