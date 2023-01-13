#include<stdio.h>
int main()
{
    int array[100],n,c,d,pos,t;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter %d integers", n);
    for(c=0;c<n;c++)
        scanf("%d", &array[c]);
    for(c=0;c<(n-1);c++)
    {
        pos=c;
        for(d=c+1;d<n;d++)
        {
            if(array[pos]>array[d])
                pos=d;
        }
        if(pos!=c)
        {
            t=array[c];
            array[c]=array[pos];
            array[pos]=t;
        }
    }
    printf("SORTED LIST :");
    for(c=0;c<n;c++)
        printf("%d\n",array[c]);
    return 0;
}
