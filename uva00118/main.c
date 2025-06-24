#include <stdio.h>

int main() {
    
    int edgeX, edgeY, x, y;
    char move[101]; // R L F
    char dir; // N S W E
    
    scanf("%d %d", &edgeX, &edgeY);
    while ((scanf("%d %d %c", &x, &y, &dir) != EOF)) {
        scanf(%s, move);
        for(int i = 0; move[i]; ++i) {
            switch (move[i]) {
                case 'R':
                    if (dir == 'N') {
                        dir == 'E';
                        break;
                    }
                    if (dir == 'S') {
                        dir == 'W';
                        break;
                    }
                    if (dir == 'E') {
                        dir == 'S';
                        break;
                    }
                    if (dir == 'W') {
                        dir == 'N';
                        break;
                    }
                
                case 'L':
                    if (dir == 'N') {
                        dir == 'W';
                        break;
                    }
                    if (dir == 'S') {
                        dir == 'E';
                        break;
                    }
                    if (dir == 'E') {
                        dir == 'N';
                        break;
                    }
                    if (dir == 'W') {
                        dir == 'S';
                        break;
                    }
                    
                case 'F':
                    <#statements#>
                    break;
                    
                default:
                    break;
            }
        }
    }
    return 0;
}
