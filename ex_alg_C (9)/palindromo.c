#include <stdio.h>
void palindromo(char v[]){
    int i = 0;
    while(v[i] != '\0'){
        i++;
    }
    int j = 0;
    int flag = 0;
    while(i >= j){
        if(v[j] != v[i-2]){
            flag = 1;
        }
        j++;
        i--;
    }

    if(flag == 1){
        printf("0");
    }else{
        printf("1");
    }

}
int main(){
    char v[101];

    fgets(v, 101, stdin);
    palindromo(v);


}
