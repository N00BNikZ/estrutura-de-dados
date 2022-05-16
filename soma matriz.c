#include <stdio.h>
int main() {
    int matriz[3][3];
    int i,j,k;
    printf("digite valores para a matriz 3x3 \n");
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    {
    printf("matriz[%d][%d]= ",i,j);
    scanf("%d",&matriz[i][j]);
    }
    }
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    {
    printf("%d ",matriz[i][j]);
    }
    printf("\n");
    }
    return 0;
}
