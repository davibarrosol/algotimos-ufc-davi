#include <stdio.h>
#include <string.h>

int main (){
    char s1[10];
        fgets(s1, 10, stdin);
    char s2[10];
        fgets(s2, 10, stdin);
    char s3[10];
        fgets(s3, 10, stdin);
    char conc[10];
    
    char abc[4] = "abc";
    
    int i = strlen(s1)-1;
    int j = strlen(s2)-1;
    int k = strlen(s3)-1;
    if(strstr(s1,abc) || strstr(s2,abc) || strstr(s3,abc)){
			printf("String Invalida");
			return 0;
	}else if (i < 3 || j < 3 || k < 3){
		printf("Quantidade Invalida");
		return 0;
	}else{
    strcat (s1, s2);
    strcat (s1, s3);
   
    for(int i = 0; i < 10; i++){
        conc[i] = s1[i];
    }
}
    printf("*****CONCATENADA: ***** \n %s", conc);
}
