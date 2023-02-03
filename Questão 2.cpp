// Fa�a um programa que receba as idades de 10 pessoas e armazene em um vetor. Mostre as idades em ordem decrescente. Use ordena��o por sele��o.

#include <stdio.h>
#include <locale.h>

void mostrar_vetor(int num[], int tam){
	for(int i=0; i<tam; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
}

void selection_sort(int num[], int tam){
	int i, j, min, aux;
	for(i=0; i<tam; i++){
		min = i;
		for(j = (i+1); j<tam; j++){
			if(num[j] > num[min]){
				min = j;
			}
		}
		
		if(i != min){
			aux = num[i];
			num[i] =  num[min];
			num[min] = aux;
		}
	}
}


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int idades[10];
	
	printf("\t\t\tDigite 10 idades e veja elas em ordem decrescente\n\n");
	
	for(int i=0; i<10; i++){
		printf("Digite a %d� idade: ", i+1);
		scanf("%d", &idades[i]);
	}
	
	selection_sort(idades, 10);
	
	mostrar_vetor(idades, 10);
	
}
