#include <stdio.h>

struct Funcionario{	
  int codigo;
  char sexo[10];
  int idade;
  float salario;	
};

int main(){	
	int	n = 0;	
	struct Funcionario func	[500]; //maximo de 500 funcionarios	
	while(n<=500){
    printf("Código do funcionário: ");
    scanf("%d",	&func[n].codigo);

    if (func[n].codigo < 0){
      break;
    }	

    printf("Sexo do funcionário: ");
    scanf("%s",	func[n].sexo);

    printf("Idade do funcionário: ");
		scanf("%d",	&func[n].idade);
    
    printf("Salário do funcionário: ");
    scanf("%f",	&func[n].salario);

    printf("\n");
		n++;
    }	

  for(int i = 0; i < n;i++){
    printf("\n");
    printf("= Funcionário %d = \n",i+1);
    printf("Codigo: %d\n",func[i].codigo);
    printf("Sexo: %s\n",func[i].sexo);
    printf("Idade: %d\n",func[i].idade);
    printf("Salário: %.2f\n",func[i].salario);
    printf("\n");
  }
  
  return 0;
}
  