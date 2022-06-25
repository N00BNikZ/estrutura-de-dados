/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int soma = 0;
    int i;
    for(i=1; i <= 1000;i++){
        if ((i % 2) == 0){
            soma = soma+i;
            
        
        }
        
    }
    
printf("%d", soma);
    
return 0;
}
