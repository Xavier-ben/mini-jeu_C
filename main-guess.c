#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int n = -1;
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    while(n!=random_number)
    {
        printf("Devinez le nombre.\n");
        scanf("%d", &n);
        if(0<n<101)
        {
            if(n<random_number)
            {
                printf("Plus grand.\n");
            }
            else
            {
                printf("Plus petit.\n");
            }
            if(n == 42)
            {
                printf("La réponse ultime à la grande question sur la vie, l'univers et le reste.\n ");
            }
        }
        else
        {
            printf("Veuillez entrer un nombre de 1 et 100.\n");
        }
    }
    printf("Bravo.\n");
}