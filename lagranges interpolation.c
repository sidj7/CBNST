#include<stdio.h>
#include<stdlib.h>
int n;
float func(int a,float b,float x[n],float y[n])
{
    float temp[a];
    for(int i=0;i<n;i++)
    {
        float sum=y[i];
        for(int j=0;j<n;j++)
        {
            if(i==j)continue;
            sum=sum*((b-x[j])/(x[i]-x[j]));
        }
        temp[i]=sum;
    }
    float ans;
    for(int i=0;i<n;i++)
    {
        ans+=temp[i];
    }
    return ans;
}
int main(){
    printf("Name : Siddharth Jain\nSection : H\nRoll No. : 26\n");
    printf("Enter No. Of dataset : ");
    scanf("%d",&n);
    float x[n],y[n];
    printf("Enter X and Y values : \n");
    for(int i=0;i<n;i++)
    {
        printf("x%d y%d :",i+1,i+1);
        scanf("%f%f",&x[i],&y[i]);
    }
    float xn;
    printf("Enter value of X' : ");
    scanf("%f",&xn);
    float z=func(n,xn,x,y);
    printf("The Value Y at X=%.2f : %.3f ",xn,z);
    return 0;
}