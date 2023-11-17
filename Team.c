#include <stdio.h>

int main() {
    int numberOfProblems = 0;
    int implemeted = 0;
    scanf("%d", &numberOfProblems);

    for (int i = 0; i < numberOfProblems; i++)
    {
        int petya, vasya, tanya;
        scanf("%d", &petya);
        if (petya != 0 && petya != 1)
        {
            printf("Error: Enter a valid input for petya");
            return(-1);
        }

        scanf("%d", &vasya);
        if (vasya != 0 && vasya != 1)
        {
            printf("Error: Enter a valid input for vasya");
            return(-1);
        }
        
        scanf("%d", &tanya);
        if (tanya != 0 && tanya != 1)
        {
            printf("Error: Enter a valid input for tanya");
            return(-1);
        }  

        int sure = petya + vasya + tanya;

        if (sure >= 2)
        {
            implemeted++;
        }
    }
    printf("%d", implemeted);
    return 0;
}
