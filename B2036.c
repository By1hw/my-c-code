#include <stdio.h>
int main()
{
double n;
scanf("%lf",&n);
if (n >= 0)
{
    printf("%.2f",n);
}
else {
    printf("%.2f",-n);
}
 return 0;
}
