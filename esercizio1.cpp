// Leggere la sequenza dei numeri interi, terminare la lettura quando si raggiunge 9999. 
// Determinare quanti sono stati i valori pari e i valori dispari

#include "stdio.h";
using namespace std;

int main()
{
    int limite = 10000;
    int qta_pari = 0;
    int qta_dispari = 0;

    for(int i = 0; i < limite; i++)
    {
        // ignoro lo 0 perché non è ne pari ne dispari. Avrei potuto assegnare 
        // alla variabile iteratrice come valore di partenza 1, così non avrei 
        // dovuto scrivere questa if, è (quasi) indifferente.
        if(i != 0) 
        {
            // Calcolo il modulo della variabile iteratrice e controllo il suo valore
            if(i % 2 == 0)
            {
                qta_pari++;
            }
            else
            {
                qta_dispari++;
            }
        }
    }

    printf("Ho trovato %i numeri pari.\n", qta_pari);
    printf("Ho trovati %i numeri dispari.\n", qta_dispari);
}