#include<stdio.h> 
float deri(float x, float y)
{
    return((x - y)/2);
}
float rungek(float x0, float y, float x, float h){
    int n = (int)((x - x0) / h);
    float k1, k2, k3, k4, k5;
    for (int i=1; i<=n; i++){
        k1 = h*deri(x0, y);
        k2 = h*deri(x0 + 0.5*h, y + 0.5*k1);
        k3 = h*deri(x0 + 0.5*h, y + 0.5*k2);
        k4 = h*deri(x0 + h, y + k3);
        y = y + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);
        x0 = x0 + h;
    }
    return y;
}
int main(){
    printf("Name : Siddharth Jain\nSection : H\nRoll No. : 26\n");
    float x0,y0,x,h;
    printf("Enter x0 and y0 : ");
    scanf("%f%f",&x0,&y0);
    printf("Enter step height : ");
    scanf("%f",&h);
    printf("Enter value of x : ");
    scanf("%f",&x);
    printf("\nValue y at x= %.3f is: %.4f",x,rungek(x0, y0, x, h));
    return 0;
}