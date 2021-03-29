#include<stdio.h>

int main()
{
    int a,b,c,i,j;

    scanf("%d %d %d",&a,&b,&c);

    int x[a][a],y[b][b],z[c][c],l=0,o=0;

    for ( i = 0; i < a; i++)
    {
       for ( j = 0; j < a; j++)
       {
           scanf("%d",&x[i][j]);
       }
       
    }
printf("\n");
    for ( i = 0; i < b; i++)
    {
        for ( j = 0; j < b; j++)
        {
            scanf("%d",&y[i][j]);
        }
        
    }
   printf("\n"); 
    for ( i = 0; i < c ; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&z[c][c]);
        }
        
    }
    printf("\n");


    for ( i = 0; i < a; i++)
    {
        l=l+x[i][i];   
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = a-1; j >0; j++)
        {
            o=o+x[i][j];
        }
    }
     if (l==o)
    {
       printf("N0");
    }
    else
    {
        "Yes";
    }
    l=0;o=0;
     for ( i = 0; i < a; i++)
    {
        l=l+x[i][i];   
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = a-1; j >0; j++)
        {
           o=o+x[i][j];
        }
    }

     if (l==o)
    {
       printf("N0");
    }
    else
    {
        "Yes";
    } 
    l=0;o=0;
     
     for ( i = 0; i < a; i++)
    {
        l=l+x[i][i];   
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = a-1; j >0; j++)
        {
            o=o+x[i][j];
        }
    }
     if (l==o)
    {
       printf("N0");
    }
    else
    {
        "Yes";
    }  
    
   
}