#include<stdio.h>

int main()
{
    int n,k,c;

    scanf("%d %d",&n,&c);
   int a;
   
       a=n%10;
   if (a>c)
   {
      k=a-c;

        if (k==1)
        {
            printf("%d",n+9);
        }
        else if (k==2)
        {
            printf("%d",n+8);
        }
        else if (k==3)
        {
            printf("%d",n+7);
        }    
        else if (k==4)
        {
            printf("%d",n+6);
        }
        else if (k==5)
        {    
            printf("%d",n+5);
        }
        else if (k==6)
        {
            printf("%d",n+4);
        }
        else if (k==7)
        {    
            printf("%d",n+3);
        }
        else if (k==8)
        {
            printf("%d",n+2);
        }
        else if (k==9)
        {
            printf("%d",n+1);
        }
        else if (k==0)
        {
            printf("%d",n+10);
        }
   
    }
   else
   {
       k=c-a;
       printf("%d",n+k);
   }
   
   
}