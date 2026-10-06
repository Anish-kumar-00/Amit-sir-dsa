#include <stdio.h>
int* min_max(int *a,int n);


int main()
{

//printf("hii");
int *b,a[5]={7,8,2,1,4},n=5;

b=min_max(a,n);
int min=b[0],max=b[1];
printf("min=%d,max=%d",min,max);
}




int* min_max(int *a,int n)
{  
    int min=a[0],max=a[0];
    for(int i=1;i<=n-1;i++)
       {
           if(max<a[i])
              max=a[i];
           else
              if(min>a[i])
                min=a[i];   
       
       }

    // printf("%d,%d",min,max);
int b[2]={ min,max};
return b;
}