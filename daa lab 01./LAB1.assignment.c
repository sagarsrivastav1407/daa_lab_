#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("\nFunction Values for n = %d\n\n", n);

    printf("1. 1/n              = %lf\n", 1.0/n);
    printf("2. log2(n)          = %lf\n", log2(n));
    printf("3. 12*sqrt(n)       = %lf\n", 12*sqrt(n));
    printf("4. 50*sqrt(n)       = %lf\n", 50*sqrt(n));
    printf("5. n^0.51           = %lf\n", pow(n,0.51));
    printf("6. n*log2(n)        = %lf\n", n*log2(n));
    printf("7. n^2 - 324        = %lf\n", pow(n,2)-324);
    printf("8. 100*n^2 + 6*n    = %lf\n", 100*pow(n,2)+6*n);
    printf("9. 2*n^3            = %lf\n", 2*pow(n,3));
    printf("10. n^(log2 n)      = %lf\n", pow(n,log2(n)));
    printf("11. 3^n             = %lf\n", pow(3,n));
    printf("12. 2^(32n)         = %e\n", pow(2,32.0*n));

    return 0;
}
