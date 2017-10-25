/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

#define MAXSTRS 7

int main(void)
{
        int  cntr;
        FILE *pipe_fp;
        int *strings[MAXSTRS];
        
        for(cntr=0; cntr<MAXSTRS; cntr++) {
	  scanf("%d", &strings[cntr]);
	}
	
        /* Create one way pipe line with call to popen() */
        if (( pipe_fp = popen("sort", "w")) == NULL)
        {
                perror("popen");
                exit(1);
        }

        /* Processing loop */
        for(cntr=0; cntr<MAXSTRS; cntr++) {
		fprintf(pipe_fp, "%d", strings[cntr]);
                fputc('\n', pipe_fp);
        }

        /* Close the pipe */
        pclose(pipe_fp);
        
        return(0);
}
