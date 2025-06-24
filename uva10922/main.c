//
//  main.c
//  uva10922
//
//  Created by Doris Trakarskys on 2021/10/18.
//

#include <stdio.h>
#include <string.h>

int degree(int a){
    int d = 0;
    while(1){
        d += a%10;
        a/=10;
        if(a == 0 ){
            break;
        }
        
    }
    return d;
}

int main() {
    char N[1001];
    int sum = 0;
    int count = 0;
    //while(scanf("%s",N) != EOF){
    while(1){
        scanf("%s",N);
        if(N[0] == '0' || strlen(N) == 0){
            break;
        }
        for(int i = 0; i < strlen(N); i++){
            sum += (N[i]-48);
        }
        if(sum % 9 == 0){
            count++;
            while (sum) {
                if(sum == 9)
                    break;
                sum = degree(sum);
                count++;
                
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",N,count);
        }
        else
            printf("%s is not a multiple of 9.\n",N);
        count = 0;
        sum = 0;
    }
    return 0;
}

