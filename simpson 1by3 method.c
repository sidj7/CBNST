#include<stdio.h>
#include<math.h>
float func(float x)
{
    return sin(x)*sin(x);
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
    float sum=0;
    for(int i=0;i<=n;i++)
    {
        if(i==0 ||i==n) sum+=y[i];
        else if(i%2==0)sum+=2*y[i];
        else sum+=4*y[i];
    }
    sum=sum*(h/3);
    printf("the value of Y: %.3f\n",sum);
    return 0;
}