#include <stdio.h>
#include <string.h>
int a[9][9];
int checkAnswer()
{
    int i, j, s, b[10], i1, j1;
    for (i = 0; i < 9; i++)
    {
        memset(b, 0, sizeof(b));
        for (j = 0; j < 9; j++)
            b[a[i][j]] = 1;
        for (j = s = 0; j < 10; j++)
            s += b[j];
        if (s - 9)
            return 0;
    }
    for (i = 0; i < 9; i++)
    {
        memset(b, 0, sizeof(b));
        for (j = 0; j < 9; j++)
            b[a[j][i]] = 1;
        for (j = s = 0; j < 10; j++)
            s += b[j];
        if (s - 9)
            return 0;
    }
    for (i = 0; i < 9; i += 3)
        for (j = 0; j < 9; j += 3)
        {
            memset(b, 0, sizeof(b));
            for (i1 = 0; i1 < 3; i1++)
                for (j1 = 0; j1 < 3; j1++)
                    b[a[i + i1][j + j1]] = 1;
            for (j1 = s = 0; j1 < 10; j1++)
                s += b[j1];
            if (s - 9)
                return 0;
        }
    return 1;
}
int main()
{
    int t, i, j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            scanf("%d", &a[i][j]);
    printf("%s\n", checkAnswer() ? "Yes" : "No");

    return 0;
}