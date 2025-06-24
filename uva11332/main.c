
#include <stdio.h>
#include <string.h>

int main(){
    char num[1000] = {0};
    while(gets(num)){
        for(int i = 0; i < strlen(num); i++){
            num[i] += num[i+1];
        }
        printf("%d",num);
    }
}
