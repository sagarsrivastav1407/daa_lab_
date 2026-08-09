#include<stdio.h>

void bubble1(int a[],int n)
{
    int c=0;

    for(int i=0;i<n-1;i++)
    {
        int swapped=0;

        for(int j=0;j<n-i-1;j++)
        {
            c++;

            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                swapped=1;
            }
        }

        if(!swapped)
            break;
    }

    printf("Comparisons(Early Stop)=%d\n",c);
}

void bubble2(int a[],int n)
{
    int c=0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            c++;

            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    printf("Comparisons(Always)=%d\n",c);
}

int main()
{
    int a1[]={5,4,3,2,1};
    int a2[]={5,4,3,2,1};

    bubble1(a1,5);
    bubble2(a2,5);

    return 0;
}