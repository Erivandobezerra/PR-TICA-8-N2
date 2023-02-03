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
		for(j= (i+1); j<tam; j++){
			if(num[j] < num[min]){
				min=j;
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
	
	int idades[10], a;
	
	for(int i=0; i<10; i++){
		printf("Digite a %d° idade: ", i+1);
		scanf("%d", &idades[i]);
	}
	
	selection_sort(idades, 10);
	
	mostrar_vetor(idades, 10);

}
