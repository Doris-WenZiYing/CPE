//
//  main.c
//  uva11150
//
//  Created by Doris Trakarskys on 2021/10/12.
//

#include <stdio.h>

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        int empty = n;
        int sum = n;
        while(empty >= 3){
            sum += empty / 3;
            empty = (empty / 3) + (empty % 3);
        }
        printf("%d\n", sum + empty/2);
    }
    return 0;
}
