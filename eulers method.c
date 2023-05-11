#include <stdio.h>
float f(float a, float b)
{
    return (a*a+b*3)/2;
}
int main()
{
    printf("Name : Siddharth Jain\nSection : H\nRoll No. : 26\n");
    float x0, y0, xn, h, yn;
    int n;
    printf("Enter x0 and y0 : ");
    scanf("%f%f", &x0, &y0);
    printf("Enter xn = ");
    scanf("%f", &xn);
    printf("Enter number of steps: ");
    scanf("%d", &n);
    h = (xn - x0) / n;
    for (int i = 0; i < n; i++){
        yn = y0 + h * f(x0, y0);
        y0 = yn;
        x0 = x0 + h;
    }
    printf("\nValue of y at x = %0.2f is %0.3f", xn, yn);
    return 0;
}