#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct formato{
	double volume, custoLateral, custoBase;
};//tipo de dado

 double formato(double volume, double materialBase, double materialLateral, int escolha);


int main(){
	
	printf("\nPROGRAMA DE OTIMIZACAO NA DETERMINACAO DAS DIMENSOES DA EMBALAGEM \n\n\n");
	printf("---CILINDRO---\n\n");
	
	
	
	int opcao, tampa;

	struct formato cilindro;//tipo de dado e nome

	do{
		printf("\n Insira o volume em Cm3:\n ");
		scanf("%lf", &cilindro.volume);


		printf("\n Insira o custo do Material da Base em R$ por cm2:\n ");
		scanf("%lf", &cilindro.custoBase);

		
		printf("\n Insira o custo do Material da Lateral em R$ por cm2:\n ");
		scanf("%lf", &cilindro.custoLateral);


		printf("\n O cilindro tem uma tampa?\n sim precione 0:\n nao precione 1:\n ");
		scanf("%d", &tampa);
		
		formato(cilindro.volume, cilindro.custoBase, cilindro.custoLateral, tampa);

		printf("\n\nPara realizar outra operacao, precione 0. Para sair, precione 1!");
		scanf("%d", &opcao);
	}while (opcao == 0);
}

double formato(double V, double valorBase, double valorLateral, int tampa) {

	double final = 0;
	double r, pi = 3.14, h;

	if(tampa == 0){
		r = cbrt((V * valorLateral) / (pi * 2 * valorBase));//"cbrt" retorna raiz cubica
	}
	else{
		r = cbrt((V * valorLateral) / (pi * valorBase));
	}
		h = V / (r * r);

	printf("\n \n O cilindro possui raio igual a %.2lfcm2 e altura igual a %.2lfcm2", r, h);

return final;
}
