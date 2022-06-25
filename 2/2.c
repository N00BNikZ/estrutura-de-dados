#include <stdio.h>
#include <string.h>

int main() {

    char palavra[21];
    char inverte[21];
    printf("Entre com uma palavra e termine com $:\n");
    scanf("%20s", palavra);
    int ultimaletra = strlen(palavra)-1;
    char*pos$ = &palavra[ultimaletra];
    if(strcmp(pos$, "$")==0){
      ultimaletra-=1;
      int somador = 0;
      for(ultimaletra = ultimaletra; ultimaletra>=0;ultimaletra--){
         inverte[somador] = palavra[ultimaletra];
        somador+=1;
      }
      for(int l_print = 0; l_print<=strlen(inverte)-1; l_print++){
        printf("%c", inverte[l_print]);
      }
    }

    return 0;
}