#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2){
    printf("Enter the Numeraor and Denominator of fraction 1\n");
    scanf("%d %d",num1,den1);
    printf("Enter the Numeraor and Denominator of fraction 2\n");
    scanf("%d %d",num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3){
    *num3=((den2*num1)+(den1*num2));
    *den3=(den1*den2);
    for(int i=2;i<=*den3;i++){
        if(*num3%i==0 && *den3%i==0){
            *num3=*num3/i;
            *den3=*den3/i;
        }
    }
}
void output(int num1, int den1, int num2, int den2, int num3, int den3){
    printf("The sum of %d/%d + %d/%d is %d/%d",num1,den1,num2,den2,num3,den3);
}
int main(){
    int num1,num2,num3,den1,den2,den3;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&num3,&den3);
    output(num1,den1,num2,den2,num3,den3);
    return 0;
}
