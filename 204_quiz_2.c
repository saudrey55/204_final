#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    int z[n],x[n];
   
    for ( i = 0; i <n ; i++)
    {
       scanf("%d",&z[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
       for ( j = 1; j <= n; j++)
       {
           if (j==z[i])
           {
               x[j]++;
           }
       }
        
    }
    

}