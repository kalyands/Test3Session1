#include<stdio.h>
void input(int *n,int *r){
    printf("Enter the values of 'n' and 'r'\n");
    scanf("%d %d",n,r);
}
int fact(int n){
    int factorial=1;
    int i;
    for( i=2;i<=n;i++){
    factorial*=i;
    }
    return factorial;
}
int ncr(int n,int r){
    int result;
    result=(fact(n))/(fact(r)*fact(n-r));
    return result;
}
void output(int n,int r,int result){
    printf("The nCr value of %d %d is %d",n,r,result);
}
int main(){
    int n,r,result;
    input(&n,&r);
    result=ncr(n,r);
    output(n,r,result);
    return 0;
}