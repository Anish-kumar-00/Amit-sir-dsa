#include <stdio.h>
int pow(int a,int b);
int main()
{
  int a=3,b=3;
printf("%d",pow(a,b));

}

int pow(int a,int b)
{
   if(b==1)
     return a;
   else
   {
     int d=b/2;
     int s1=pow(a,d);
     int s2;
     if(b%2!=0) {
      s2=pow(a,d+1);
     }
     else
     {
      s2=pow(a,d);
      }
      return s1*s2;
     
   
   }



}