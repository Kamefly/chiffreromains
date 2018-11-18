#include <stdio.h>



    void nbavant(char nb1, char nb2);

    void nbapres(char c, int n);



    char valeur[1000];

    int i = 0;

    int main()

    {

        int j;

        long nombre;



        printf("Entrer le nombre: ");

        scanf("%d", &number);

        if (nombre <= 0)

        {

            printf("Nombre incorrect");

            return 0;

        }

        while (nombre != 0)

        {

            if (nombre >= 1000)

            {

                nbapres('M', nombre / 1000);

                nombre = nombre - (nombre / 1000) * 1000;

            }

            else if (nombre >= 500)

            {

                if (nombre < (500 + 4 * 100))

                {

                    nbapres('D', nombre / 500);

                    nombre = nombre - (nombre / 500) * 500;

                }

                else

                {

                    nbavant('C','M');

                    nombre = nombre - (1000-100);

                }

            }

            else if (nombre >= 100)

            {

                if (nombre < (100 + 3 * 100))

                {

                    nbapres('C', nombre / 100);

                    nombre = nombre - (nombre / 100) * 100;

                }

                else
{

                    nbavant('L', 'D');

                    nombre = nombre - (500 - 100);

                }

            }

            else if (nombre >= 50 )

            {

                if (nombre < (50 + 4 * 10))

                {

                    nbapres('L', nombre / 50);

                    nombre = nombre - (nombre / 50) * 50;

                }

                else

                {

                    nbavant('X','C');

                    nombre = nombre - (100-10);

                }

            }

            else if (nombre >= 10)

            {

                if (nombre < (10 + 3 * 10))

                {

                    nbapres('X', nombre/ 10);

                    nombre = nombre - (nombre / 10) * 10;

                }

                else

                {

                    nbavant('X','L');

                    nombre = nombre - (50 - 10);

                }

            }

            else if (nombre >= 5)

            {

                if (nombre < (5 + 4 * 1))

                {

                    nbapres('V', nombre / 5);

                    nombre = nombre - (nombre / 5) * 5;

                }

                else

                {

                    nbavant('I', 'X');

                    nombre = nombre - (10 - 1);

                }

            }

            else if (number >= 1)

            {

                if (number < 4)

                {

                    nbapres('I', number / 1);

                    number = number - (number / 1) * 1;

                }
else

                {

                    nbavant('I', 'V');

                    number = number - (5 - 1);

                }

            }

        }

        printf("Votre nombre romain est: ");

        for(j = 0; j < i; j++)

            printf("%c", valeur[j]);

        return 0;

    }



    void nbavant(char nb1, char nb2)

    {

        romanval[i++] = nb1;

        romanval[i++] = nb2;

    }



    void nbapres(char c, int n)

    {

        int j;

        for (j = 0; j < n; j++)

            romanval[i++] = c;

    }
