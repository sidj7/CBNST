#include <stdio.h>
#include <math.h>
#define err 0.0001
float fun(float x)
{
    return (x * x * x - 2 * x - 5);
}
float bisect(float x1, float x2)
{
    return (x1 + x2) / 2;
}
int main()
{
    printf("Name= Siddharth Jain, University Roll No.=2017060, Class Roll no.=26, Course=B.Tech(CSE), Semester=5th, Section=H \n\n");
    int i = 1, maxitr;
    float x1, x2, x3=0, x;
    do
    {
        printf("\nEnter the values of x1, x2\n");
        scanf("%f%f", &x1, &x2);
        if (fun(x1) * fun(x2) > 0)
        {
            printf("Invalid, You have not assumed right a and b");
            continue;
        }
        else
        {
            printf("Roots lie between %f and %f\n", x1, x2);
            break;
        }
    } while (1);
    x = bisect(x1, x2);
    // printf("Enter the value of maximum iteration\n");
    // scanf("%d", &maxitr);
    i=1;
    do
    {
        if (fun(x) * fun(x1) < 0)
            x2 = x;
        else
            x1 = x;
        printf("Iterations=%d Roots=%f\n", i, x);

        x3 = bisect(x1, x2);
        i++;
    // } while (i <= maxitr);
    }while(fabs(x3 - x) > err);

    printf("Root=%f Total iteration=%d", x, --i);
    return 0;
}
