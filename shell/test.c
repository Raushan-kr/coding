#include <stdio.h>

 

void funct1(void);

void funct2(void);

 

/* external variable, scope is global to main(), funct1() and funct2(), extern keyword is omitted here, coz just one file */

int globvar = 10;

 

int main()

{

    printf("\n****storage classes and scope****\n");

    /* external variable */

    globvar = 20;

    

    printf("\nVariable globvar, in main() = %d\n", globvar);

    funct1();

    printf("\nVariable globvar, in main() = %d\n", globvar);

    funct2();

    printf("\nVariable globvar, in main() = %d\n", globvar);

    return 0;

}

 

/* external variable, scope is global to funct1() and funct2() */

int globvar2 = 30;

 

void funct1(void)

{

    /* auto variable, scope local to funct1() and funct1() cannot access the external globvar */

    char globvar;

   

    /* local variable to funct1() */

    globvar = 'A';

    /* external variable */

    globvar2 = 40;

   

    printf("\nIn funct1(), globvar = %c and globvar2 = %d\n", globvar, globvar2);

}

 

void funct2(void)

{

    /* auto variable, scope local to funct2(), and funct2() cannot access the external globvar2 */

    double globvar2;

    /* external variable */

    globvar =  50;

    /* auto local variable to funct2() */

    globvar2 = 1.234;

    printf("\nIn funct2(), globvar = %d and globvar2 = %.4f\n", globvar, globvar2);

}
