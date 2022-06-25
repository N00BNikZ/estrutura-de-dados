/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h> 
int main(){
    char frase[100];
    printf("Informe a frase:");
    scanf("%s", frase); int cont=strlen(frase); int i;
    
    for(i = cont-1; i >= 0; i--){
        printf("%c", frase[i]);
        printf("\n");
    }
    
  
  
  
  
  
  

return 0;
}
