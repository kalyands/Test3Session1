#include<stdio.h>

typedef struct fraction
{
    int num,den;
}frac;m
frac input_fraction(){
    frac a;
    printf("Enter the Numeraor and Denominator of fraction\n");
    scanf("%d %d",&a.num,&a.den);
    return a;
}
int smallest_fraction(frac f1,frac f2, frac f3){
   float a,b,c,d,e,f,g,h,i,j;
    a=(f1.num);
    b=(f2.num);
    c=(f3.num);
    e=(f1.den);
    f=(f2.den);
    g=(f3.den);
    h=a/e;
    i=b/f;
    j=c/g;
     if(h<i && h<j){
        d=1;
    }
    else if(i<j&& i<h){
        d=2;
    }
    else if(j<h && j<i){
        d=3;
    }

    printf("%f %f\n",h,i);
   return d;
}
void output(frac f1, frac f2, frac f3, int smallest){
    if(smallest==1){
        printf("The smallest fraction is %d/%d",f1.num,f1.den);
    }
    else if(smallest==2){
         printf("The smallest fraction is %d/%d",f2.num,f2.den);
    }
    else if (smallest==3){
         printf("The smallest fraction is %d/%d",f3.num,f3.den);
    }
    else if(smallest==0){
         printf("all the fractions are same\n");
    }
}
int main(){
    frac f1,f2,f3;
    int smallest;
    f1=input_fraction();
    f2=input_fraction();