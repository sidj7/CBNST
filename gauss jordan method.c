#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
int n;
void convertToUpperTriangular(float a[][n+1], int n){
    float ratio;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==j)continue;
            ratio = a[j][i] / a[i][i];
            for (int k = 0; k < n + 1; k++){
                a[j][k] = a[j][k] - (ratio * a[i][k]);
                if(abs(a[j][k])<0.0001)a[j][k]=0;
            }
        }
    }
}
void ApplyBackSubstitution(float arr[][n+1],float value[],int n){
    for(int i=0;i<n;i++)
    {
        value[i]=arr[i][n]/arr[i][i];
    }
}
int main(){
    printf("Name : Siddharth Jain\nSection : H\nRoll No. : 26\n");
    printf("Enter number of linear equations : ");
    scanf("%d", &n);
    float arr[n][n + 1];
    for (int i = 0; i < n; i++){
        char p[20];
        printf("Enter equation %d : ",i+1);
        scanf("%s", p);
        char *r = p;
        int j = 0;
        while (*r){
            if (r[0] == '-' && isdigit(r[1]) || isdigit(r[0]))
                arr[i][j++] = strtof(r, &r);
            else
                r++;
        }
    }
    printf("\nAugmented matrix : \n");
    for (int i = 0; i < n; i++){
        for (int k = 0; k <= n; k++)
            printf("%f ", arr[i][k]);
        printf("\n");
    }
    float value[n];
    printf("\nDiagonal matrix : \n");
    convertToUpperTriangular(arr, n);
    for (int i = 0; i < n; i++){
        for (int k = 0; k <= n; k++)
            printf("%f ", arr[i][k]);
        printf("\n");
    }
    ApplyBackSubstitution(arr, value, n);
    printf("\nThe solution is : \n");
    for(int i=0;i<n;i++){
        printf("%c = %f\n",'x'+i,value[i]);
    }
    return 0;
}