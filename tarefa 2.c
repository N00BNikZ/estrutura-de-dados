/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int soma = 0;
    int valor = 0;
    int i;
    for(i=1; i <= 7;i++){
        
            valor = pow(3,i);
            soma = soma+valor;
            
            
        
        }
        

    

printf("%d", soma);

return 0;
}
