#include <stdio.h>

int count_view(int x[4])
{
    int count = 0;
    int maximum = 0;
    int i=0;
    while (i<4)
    {
        if (x[i]>maximum)
        {
            maximum=x[i];
            count+=1;
        }
        i++;
    }
    return count;
}

int main()
{
    int total_permu[24][4];
    total_permu = [[1,2,3,4],[1,2,4,3],[1,3,2,4],[1,3,4,2],[1,4,2,3],[1,4,3,2],[2,1,3,4],[2,1,4,3],[2,3,1,4],[2,3,4,1],[2,4,1,3],[2,4,3,1],[3,1,2,4],[3,1,4,2],[3,2,1,4],[3,2,4,1],[3,4,1,2],[3,4,2,1],[4,1,2,3],[4,1,3,2],[4,2,1,3],[4,2,3,1],[4,3,1,2],[4,3,2,1]];
}

int total_permu4()
{
    int x[24][4];
}

int make_board(int n)
{
    int x[n][n] ;
    int i=0;
    int j=0;
    while(i<n)
    {
        while(j<n)
        {
            x[i][j]=0;
            j++;
        }
        i++;
    }
    return x;
}