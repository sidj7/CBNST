#include <stdio.h>
void forward(float x[5], float y[5][5], int n,float a)
{
    int i, j;
    float h, u, sum, p;
    for (j = 1; j < n; j++) {
        for (i = 0; i < n - j; i++) {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }
    printf("The forward difference table is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            printf("%f\t", y[i][j]);
        }
        printf("\n");
    }
  
    p = 1.0;
    sum = y[0][0];
    h = x[1] - x[0];
    u = (a - x[0]) / h;
    for (j = 1; j < n; j++) {
        p = p * (u - j + 1) / j;
        sum = sum + p * y[0][j];
    }
    printf("\nThe value of y at x=%0.2f is %0.3f", a, sum);
}
int main()
{
    printf("Name : Siddharth Jain\nSection : H\nRoll No. : 26\n");
    int n = 5; // number of arguments
    float x[5] = { 1891, 1901, 1911, 1921,1931};
    float y[5][5] = {
        { 46, 0, 0, 0, 0 },
        { 66, 0, 0, 0, 0 },
        { 81, 0, 0, 0, 0 },
        { 93, 0, 0, 0, 0 },
        { 101, 0, 0, 0, 0 },
    };
    float a;
    printf("enter interpolation point : ");
    scanf("%f",&a);
    forward(x, y, n,a);
  
    return 0;
}
