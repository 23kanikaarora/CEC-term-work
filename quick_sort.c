#include<stdio.h>
void quicksort(int num,int fn,int ln)
{
    int i,j,pivot,temp;
    if(fn<ln)
    {
        pivot=fn;
        i=fn;
        j=ln;
        while(i<j)
        {
            while(num[i]<=num[pivot]&&ln)
                i++;
            while(num[j]>num[pivot])
                j--;
            if(i<j)
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
        temp=num[pivot];
        num[pivot]=num[i];
        num[j]=temp;
        quicksort(num,fn,j-1);
        quicksort(num,j+1,ln);
    }
}
int main()
{
    int i, count,num[];
    printf("Enter some elements:");
}
