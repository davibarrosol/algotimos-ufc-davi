	#include <stdio.h>
	int main(){
    char frase[101];
	fgets(frase, 101, stdin);
	
	int chave;
	printf("Chave: ");
	scanf("%d" , &chave);

	int flag = 1;
	if(chave < 2 || chave > 25){
		flag = 0;
		return 0;
	}
		
	int i, j;

	char alfabeto[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm','n', 'o','p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z'};
	for(i = 0; frase[i] != '\0'; i++){
		for(j = 0; j < 26; j++){
			if(alfabeto[j] == frase[i]){
				if(j+chave > 26){
					frase[i] = alfabeto[(j + chave)-26];
				}else{
				frase[i] = alfabeto[j + chave];
				break;
				}
			}
		}
	}
				
    printf("%s", frase);

}
