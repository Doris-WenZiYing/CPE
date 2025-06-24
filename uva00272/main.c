//
//  main.c
//  uva00272
//
//  Created by Doris Trakarskys on 2021/10/11.
//

#include <stdio.h>
#include <string.h>

int main() {
    char t;
    int count = 0;
    while((t = getchar()) != EOF){
        if(t == '"'){
            count++;
            if(count % 2 == 0){
                printf("''");
            }
            else
                printf("``");
        }
        else
            printf("%c",t);
    }
    return 0;
}
