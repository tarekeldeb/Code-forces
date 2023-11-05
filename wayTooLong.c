#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char word[120][120];
    scanf("%d", &n);

    for (int i = 0;i < n; i++)
    {
        scanf("%s", word[i]);
    }

    for(int j = 0; j < n; j++)
    {
        if (strlen(word[j]) > 10) {
            printf("%c%d%c\n", word[j][0], (int)strlen(word[j]) - 2, word[j][strlen(word[j]) - 1]);
        } else {
            printf("%s\n", word[j]);
        }
    }
    return(0);
}
