#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    int z[n],x[n];
    x[n]=0;

    for ( i = 0; i <n ; i++)
    {
       scanf("%d",&z[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        j=1;
        if (z[i]==j)
        {
            x[i]=x[i+1];
        }
        else
        {
            j++;
            continue;
        }
        
    }
    
    
}