//https://www.hackerrank.com/challenges/cavity-map
//mandeep singh @msdeep14
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main(){
    int N; // size of map N x N
    char map[100][100] ;
    int i, j;
 
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%s", &map[i]);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || j == 0 || i == N - 1 || j == N - 1)
                printf("%c", map[i][j]);
            else if (map[i][j] > map[i - 1][j] && map[i][j] > map[i][j - 1] && map[i][j] > map[i][j + 1] && map[i][j] > map[i + 1][j])
                printf("X");
            else
                printf("%c", map[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
