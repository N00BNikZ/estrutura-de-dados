
#include <stdio.h>

int vetor[10];
int TAM,A,B;


void leitura()
{
    int i;
    printf("informe TAM <= 10:");
    scanf("%d", &TAM);
    
    for(i=0;i<TAM;i++){
        printf("vetor[%d]=",i);
        scanf("%d",&vetor[i]);
    }
        printf("informe valor A:");
        scanf("%d", &A);
        printf("informe valor B:");
        scanf("%d", &B);
        
}


 void troca(){
    int i;
    
    for(i=0;i<TAM;i++){
        
        if(vetor[i]==A){
         vetor[i]=B,i++;
        }
        
        if(vetor[i]==B){
         vetor[i]=A,i++;
        }
    }
    
 }

int maior(){
    int x, i;
    x=vetor[0];
    for(i=1;i<TAM;i++){
            if(vetor[i]>x){
                x=vetor[i];
            }
    }
    return x;
}

float media(){
    int i;
    float x=0;
    for(i=0;i<TAM;i++){
        x=x+vetor[i];
    }
    x=x/TAM;
    return x;
}




int main()
{
    int me, ma, i;
    leitura();
    printf("leitura:");
    for(i=0; i<TAM;i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
    troca();
    printf("troca:");
    for(i=0; i<TAM;i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
    ma = maior();
    printf("maior: %d\n",ma);
    
    me=media();
    printf("media: %d\n",me);
    return 0;
    
}
