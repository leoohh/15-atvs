#include <stdlib.h>
#include <stdio.h>

int main()
{

    system ("cls || clear");

    char alunos [2] [200];
    float notas [2] [3];
    int i,j;


    for ( i = 0; i < 2; i++){
      fflush (stdin);
    printf ("digite o nome do aluno: ");
    gets (alunos[i]);
    

    for ( j = 0; j < 3; j++)
    {
     printf ("digite aq nota do aluno:");
     scanf("%f", &notas [i] [j]);


    }

}

    printf ("Dados dos alunos\n");

    for ( i = 0; i < 2; i++){

        printf ("Nome do aluno: %s\n", alunos[i]);

        for ( j = 0; j < 3; j++)
        {
          printf ("Nota dos alunos: %.1f\n", notas [i] [j]);
        }
        


    }
    

    return 0;
}
