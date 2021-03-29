#include<stdio.h>

int main()
{
    int n,k,c;

    scanf("%d %d",&n,&c);
    int i,z[5],a,j=1;
    do
    {
        k=n;
        for ( i = 0; i < 5; i++)
        {   
            z[i]=n%10;
            n=n/10;
        }

        for ( i = 0; i < 5; i++)
        {
            if (z[i]==c)
            {
                printf("%d",k);
                j=0;
            }
            else
            {
                n++;
            }
            
            
        }
        
    } while (j==0);
    
 
    


}