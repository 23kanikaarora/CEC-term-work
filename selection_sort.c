#include<stdio.h>
int main()
{
    int n,array[100],c,d,f=0,t;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(c=0;c<n;c++)
        scanf("%d",&array[c]);
    for(c=1;c<n-1;c++){
        t=array[c];
        for(d=c-1;d>=0;d--)
        {
            if(array[d]>t)
            {
                array[d+1]=array[d];
                f=1;
            }
            else
                break;
        }
        if(f)
            array[d+1]=t;
    }

    printf("Enter sorted list:",n);
    for(c=0;c<=n;c++)
    {
        printf("%d",array[c]);
    }
    return 0;
}

