#include<stdio.h>

int partition(int a[],int n)
{
    int l=0,r=n-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==0)
            l=mid+1;
        else
            r=mid-1;
    }

    return l;
}

int main()
{
    int a[]={0,0,0,0,1,1,1,1};

    int n=8;

    printf("Partition Index=%d\n",partition(a,n));

    return 0;
}