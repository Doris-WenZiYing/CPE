//
//  main.c
//  uva10409
//
//  Created by Doris Trakarskys on 2021/10/18.
//

#include <stdio.h>

int main() {
    char eswn[4];
    int N;
    scanf("%d",&N);
    for( int i = 0; i < N; i++){
        scanf("%s",eswn);
        printf("%s",eswn);
    }
    return 0;
}
