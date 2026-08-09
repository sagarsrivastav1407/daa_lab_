#include<stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int duplicate=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                duplicate=1;
                break;
            }
        }

        if(duplicate)
            break;
    }

    if(duplicate)
        printf("Duplicate Found\n");
    else
        printf("All Elements are Unique\n");

    return 0;
}
