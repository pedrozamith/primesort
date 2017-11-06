/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <math.h>

#define MAXSTRS 20000

int main(void)
{
        int  cntr,j;
        int *ints[MAXSTRS];
        
        for(cntr=0; cntr<MAXSTRS; cntr++)
		{
	  		scanf("%d", &ints[cntr]);
	  		if (ints[cntr] == -1)
	  			break;
		}
	
		BubbleSort(ints, cntr);
		VerificaPrimo(ints, cntr);
}

void BubbleSort(int vetor[], int tam) {
	int fim, i;
	
    for (fim = tam-1; fim > 0; --fim) {

        for ( i = 0; i < fim; ++i) {

            if (vetor[i] < vetor[i+1]) {

                int aux = vetor[i];

                vetor[i] = vetor[i+1];

                vetor[i+1] = aux;

            }

        }

    }

}

void VerificaPrimo(int vetor[], int tam){
	int i,j,aux,div =0;
	
    for (i=0; i<tam; i++) {
    	if (vetor[i] == 1)
    		printf("%d\n", vetor[i]);
		aux = (sqrt(vetor[i]));
		for (j=1; j<=aux ;j++){
    		if(vetor[i] % j == 0){
    			div++;
    		}
    	}
    	if (div >= 2){
    		printf("%d\n", vetor[i]);
    	}
    	div = 0;
	}
}
