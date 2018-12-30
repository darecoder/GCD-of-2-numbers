#include<stdio.h>
int GCD(int n1,int n2)
{
   if(n1%n2==0)
     return n2;
   else
     return(GCD(n1,n1%n2));
}
     
void main()
{
   int n1,n2,G;
   printf("Enter two numbers: ");
   scanf("%d%d",&n1,&n2);
   G=GCD(n1,n2);
   printf("The GCD of the given two numbers: %d",G);
}
   
