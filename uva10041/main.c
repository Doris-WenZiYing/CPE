//
//  main.c
//  uva10041
//
//  Created by Doris Trakarskys on 2021/10/6.
//
#include <stdio.h>
#include <math.h>

int main(){
    int r,s;
    int house[501];
    int sum = 0,min = 0;
    scanf("%d",&r);
    for(int i = 1; i <= r; i++){
        min = 0;
        scanf("%d",&s);
        for(int j = 0; j < s; j++){
            scanf("%d",&house[j]);
        }
        for(int j = 0; j < s; j++){
            for(int k = 0; k < s; k++){
                if(j != k){
                    sum += abs(house[j] - house[k]);
                }
            }
            if(min == 0)
                min = sum;
            else if(min > sum)
                min = sum;
            sum = 0;
        }
        printf("%d\n",min);
    }
    return 0;
}
