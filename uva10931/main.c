//
//  main.c
//  uva10931
//
//  Created by Doris Trakarskys on 2021/10/18.
//

#include <stdio.h>

int main() {
    int l;
    int n[100];
    int count = 0;
    int count_n = 0;
    int i = 0;
    int k = 0;
    while(scanf("%d",&l) != EOF){
        if(l == 0){
            break;
        }
        
        while(l > 0){
            k = l % 2;
            n[i] = k;
            l /= 2;
            count++;
            i++;
        }
        if (count == 1) {
            printf("The parity of 1 is 1 (mod 2).\n");
        }
        else{
            printf("The parity of ");
            for(int i=count-1;i >= 0;i--){
                if(n[i] == 1)
                    count_n++;
                printf("%d",n[i]);
            }
            printf(" is %d (mod 2).\n",count_n);
            count = 0;
            count_n = 0;
        }
        
    }
    
    return 0;
}
