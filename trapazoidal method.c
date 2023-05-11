#include<stdio.h>
float func(float x)
{
    return x*x*x;
}
int main()
{
    printf("Name : Siddharth Jain\nSection : H\nRoll No. : 26\n");
    int n;
    float a,b,h;
    printf("enter no of intervals : ");
    scanf("%d",&n); 
    printf("enter upper and lower limit : ");
    scanf("%f%f",&b,&a);
    h=(b-a)/n;
    float x[n+1],y[n+1];
    x[0]=a;
    y[0]=func(0);
    for(int i=1;i<=n;i++)
    {
        x[i]=x[i-1]+h;
        y[i]=func(x[i]);
    }
    printf("X\tY:\n");
    for(int i=0;i<=n;i++)
    {
        printf("%.3f %.3f\n",x[i],y[i]);
    }   
    float sum=func(a)+func(b);
    for(int i=1;i<n;i++)
    {
        sum+=2*y[i];
    }
    sum=sum*(h/2);
    printf("the value of Y: %.3f\n",sum);
    return 0;
}