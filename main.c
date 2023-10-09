#include <stdio.h>
#include <stdlib.h>

int main()
{
   char reponce ;
   float A , B ;
   int operation ;

    do{
        printf(" clculatrice : menu \n");
    printf("1 - addition. \n");
    printf("2 - soustraction. \n");
    printf("3 - mulitiplication. \n");
    printf("4 - division. \n");
    printf("5 - pussance. \n");
    printf( "quelle calcule veux tu effectuer? ");
    scanf("%d" , &operation);
    printf("saisir le premier terme :");
    scanf("%f" , &A);
    printf("saisir le deuxeme terme :");
    scanf("%f" , &B);

    switch(operation){

       case 1 : printf ("le result est ,%f \n", A + B );
                break ;
        case 2 : printf("le result est %f \n", A - B );

               break ;
         case 3 : printf("le result est %f \n", A * B );

               break ;
        case 4 : printf("le result est %f \n", A / B );

                break ;
        case  5 : printf("le result est %f \n", pow(A , B) );

               break ;

               default : printf("erreur :");

    }
    printf("veux tu faire un autre calcule (O/N ) ");
    scanf("%c", &reponce );

    }while( reponce!='N');

    return 0;
}
