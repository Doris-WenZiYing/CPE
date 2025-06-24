#include <stdio.h>
#include <string.h>

int main(){
    char str[10000] = {0};
    char input[] = {" 234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./"};
    char after[] = {" `1234567890qwertyuiop[asdfghjklzxcvbnm,"};
    
    while(gets(str)){
        for(int i = 0; i < strlen(str); i++){
            if(str[i] >=65 && str[i] < 97){
                str[i] += 32;
            }
        }
        
        for(int i = 0; i < strlen(str); i++){
            for(int j = 0; j < strlen(input); j++){
                if(str[i] == input[j]){
                    printf("%c",after[j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

