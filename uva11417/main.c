//
//  main.c
//  uva11417
//
//  Created by Doris Trakarskys on 2021/10/7.
//

#include <stdio.h>
int gcd(int a, int b){
    while(b != 0){
        return gcd(b,a%b);
    }
    return a;
}

int main(){
    int g = 0,n;
    while (scanf("%d",&n) != EOF) {
        if(n == 0){
            break;
        }
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                g += gcd(i,j);
                
            }
        }
        printf("%d\n",g);
        g = 0;
    }
    return 0;
}
