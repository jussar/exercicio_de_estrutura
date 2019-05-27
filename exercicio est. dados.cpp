#include <stdio.h>
#include <stdlib.h>
int vet[5];
void lerVet(int vet[5]){
	int i;
	for(i=1;i<=5;i++){
		printf("digite um numero: ");
		scanf("%d",&vet[i]);
	}
}
void imprime(int vet[5]){
	int i;
	for(i=1;i<=5;i++){
		printf("%d\n",vet[i]);
	}
	system ("pause");
}
int main(){
	lerVet(&vet[5]);
	imprime(&vet[5]);
}
