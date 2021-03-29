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

   /* for ( i = 0; i < b; i++)
    {
        for ( j = 0; j < b; j++)
        {
            scanf("%d",&y[i][j]);
        }
        
    }
    
    for ( i = 0; i < c ; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&z[c][c]);
        }
        
    }*/
    int p1[a],p2[a],q[2]={0,0},r[2]={0,0};

    for ( i = 0; i < a; i++)
    {
        p1[i]=x[i][i];   
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = a-1; j >0; j++)
        {
            p2[i]=x[i][j];
        }
    }
    for ( i = 0; i < a; i++)
    {
       l+=p1[i];
       o+=p2[i];
    }
    printf("%d %d",l,o);

     /*if (p[0]==p[1])
    {
       printf("N0");
    }
    else
    {
        "Yes";
    }*/
    /* for ( i = 0; i < a; i++)
    {
        q[0]+=x[i][i];   
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = a-1; j >0; j++)
        {
            q[1]+=x[i][j];
        }
    }
     if (q[0]==q[1])
    {
       printf("N0");
    }
    else
    {
        "Yes";
    }
     for ( i = 0; i < a; i++)
    {
        r[0]+=x[i][i];   
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = a-1; j >0; j++)
        {
            r[1]+=x[i][j];
        }
    }
     if (r[0]==r[1])
    {
       printf("N0");
    }
    else
    {
        "Yes";
    }  */
    
   
}