#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char word[60];
	int quant = 0;
	
	while(quant <= 2) {
		printf("Insira a palavra: \n");
		scanf("%s", &word);	
		char *text = word;
		int i = strlen(text);
		
		while(i != -1) {
			printf("%c", text[i]);
			if (i == -1) {
				printf("\n");
			}
			i--;
		}
		
		*word = "";
		quant++;
	}
		
	return 0;
}
