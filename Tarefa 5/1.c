#include <stdio.h>

int tam;

void mm(int vet[tam], int min, int max)
{ 
    min = vet[0]; 
    max = vet[0];
    
    for(int b = 0; b<tam;b++){
        if (vet[b]< min){
            min = vet[b];
        }
        if (vet[b]> max){
            max = vet[b];
        }
}

    printf("o valor maximo é: %d\n",max); 
    printf("o valor minimo é: %d\n",min);

}

int main() {
    int min,max;
    int vet[100];

    printf("Entre com o tamanho do vetor:");
    scanf("%d", &tam);
    for(int a=0; a < tam; a++){
        printf("Entre com um valor para o vetor [%d]: ",a);
        scanf("%d",&vet[a]);
    }

    mm(vet,min, max);
    return 0;
}
