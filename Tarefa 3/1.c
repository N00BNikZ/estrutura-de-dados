#include <stdio.h>

int main() {
  int arroz;

  printf("Quantidade de Elementos: ");
  scanf("%d",&arroz);

  int vet1[arroz+1];
  int vet2[arroz+1];
  
  for (int a = 0; a<arroz;a++){
    printf("vet1[ %d ]: ", a);
    scanf("%d",&vet1[a]);
  }
  
  printf("\n");
  for (int b = 0; b<arroz;b++){
    printf("vet2[ %d ]: ", b);
    scanf("%d",&vet2[b]);
  }
  vet2[arroz] = -123456789;
  printf("\n");
  
  for (int c = 0; c < arroz;c++){
    for (int d = 0; d <= arroz;d++){  
      
      if (vet2[d] == vet1[c]){
        break;
      }
      if (vet2[d] == -123456789){
        printf("Valor de vet1, não presente em vet2: %d \n",vet1[c]);
      }
    
    }
  }
  
  return 0;
}
  