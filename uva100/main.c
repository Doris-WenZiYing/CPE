#include <stdio.h>

int odd(int a, int count) {
    count++;
    
    if(a % 2 == 0) {
        return odd(a/2, count);
    }
    
    else if(a % 2 != 0 && a > 1) {
        return odd(3*a+1, count);
    }
    
    return count;
}

int main(){
    int a, b, i, j;
    // eg: input: 10 1
    while ((scanf("%d %d", &i, &j)) != EOF) {
        
        // we put two variable(i & j) into the other two variables(a & b), cuz later we need to swap the variables
        int max = 0;
        a = i; // 10
        b = j; // 1
        
        // if j < i, eg: 10 1, then we exchange the value make it to 1 10
        if(j < i) {
            a = j; // 1
            b = i; // 10
        }
        
        /* from 1 to 10
         odd(1, 0) -> 1 => 1
         odd(2, 0) -> 2 1 => 2
         odd(3, 0) -> 3 10 5 16 8 4 2 1 => 8
         odd(4, 0) -> 4 2 1 => 3
         odd(5, 0) -> 5 16 => 2
         odd(6, 0) -> 6 3 10 5 16 8 4 2 1 => 9
         odd(7, 0) -> 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 => 17
         odd(8, 0) -> 8 4 2 1 => 4
         odd(9, 0) -> 9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 => 20
         odd(10, 0) -> 10 5 16 8 4 2 1 => 7
         */
        for(int k = a; k <= b; k++) {
            if(odd(k, 0) > max) {
                max = odd(k, 0);
            }
        }
        printf("%d %d %d\n", i, j, max);
    }
    return 0;
}
