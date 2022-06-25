#include <stdio.h>

void imprimir(int n, int matriz[n][n]){
  printf("Soma das Matrizes: \n");
  for (int i =0; i < n; i++){
    for (int c =0; c < n; c++){
      printf(" %d ",matriz[i][c]);
    }
  printf("\n");
  }
  printf("\n");
}

void soma_diagonal(int n, int m1[n][n], int m2[n][n]){
  int r1 = m1[0][0]*m1[1][1]*m1[2][2];
  int r2 = m2[0][2]*m2[1][1]*m2[2][0];
  printf("Soma diagonal principal + diagonal Secundária: %d \n", r1+r2);
  
}

void soma(int n, int matriz1[n][n], int matriz2[n][n]){
  int msoma[n][n];
  for (int i =0; i < n; i++){ 
    for (int c =0; c < n;c++){
      msoma[i][c] = matriz1[i][c]+matriz2[i][c];
}
printf("\n");
}
imprimir(n,msoma);
}



int main() {
  int n = 3;
  int matriz1[n][n];
  for (int i=0;i < n; i++){
    for (int j=0;j < n;j++){
      printf("Entre com %d valores da matriz 1 [%d][%d]: ",n*n,i,j);
      scanf("%d",&matriz1[i][j]);
    }
  }
  printf("\n");

  int matriz2[n][n];
  for (int i=0;i < n;i++){ 
    for (int j=0;j < n;j++){
      printf("Entre com %d valores da matriz 2 [%d][%d]: ",n*n,i,j);
      scanf("%d",&matriz2[i][j]);
    }
  }

  soma(n,matriz1,matriz2);
  soma_diagonal(n,matriz1,matriz2);
  return 0;
}