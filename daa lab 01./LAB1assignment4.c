#include<stdio.h>

int moves=0;

void toh(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("%c -> %c\n",A,C);
        moves++;
        return;
    }

    toh(n-1,A,C,B);

    printf("%c -> %c\n",A,C);
    moves++;

    toh(n-1,B,A,C);
}

int main()
{
    int n;

    printf("Enter disks: ");
    scanf("%d",&n);

    toh(n,'A','B','C');

    printf("\nTotal Moves = %d\n",moves);

    return 0;
}