//
//  main.c
//  uva10929
//
//  Created by Doris Trakarskys on 2021/10/6.
//

#include <stdio.h>
#include <string.h>

int main() {
    char N[1001];
    int odd = 0, even = 0;
    while(scanf("%s",N) != EOF){
        long int len = strlen(N);
        if(N[0] == '0' || len == 0){
            break;
        }
        for(int i = 0; i < len; i++){
            if(i % 2 == 0){
                even = even + (N[i] - 48);
            }
            else
                odd = odd + (N[i] - 48);
        }
        if((odd - even) % 11 == 0){
            printf("%s is a multiple of 11.\n",N);
        }
        else
            printf("%s is not a multiple of 11.\n",N);
    }
}

//112233
//30800
//2937
//323455693
//5038297
//112234
//0
