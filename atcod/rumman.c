#include<stdio.h>
#include<string.h>
#include<math.h>
int add(int a,int b)
{
    return a+b;
}
int substract(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}
double exp(double a)
{
    return pow(2.718, a);
}
int fact(int n)
{
    int fact=1;
     if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
}
int main()
{
   char s[101];
   gets(s);
   int sum=0;
   for(int i=0;i<strlen(s);i++){
       if(s[i]=='a'){
           int k = s[i+1];
           sum+=add(sum,k);
       }
       else if(s[i]=='s'){
           int k = s[i+1];
           sum+=substract(sum,k);
       }
       else if(s[i]=='m'){
           int k = s[i+1];
           sum+=multiply(sum,k);
       }
       else if(s[i]=='d'){
           int k = s[i+1];
           sum+=divide(sum,k);
       }
       else if(s[i]=='e'){
           int k = s[i+1];
           sum+=exp(k);
       }
       else if(s[i]=='f'){
           int k = s[i+1];
           sum+=fact(sum);
       }
   }
     printf("%d\n",sum);
     return 0;
}