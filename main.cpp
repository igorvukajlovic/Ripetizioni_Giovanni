#include "stdio.h";
using namespace std;

int main()
{
    /**
     * Esempio di ciclo for. Questa istruzione è coposta da 4 blocchi: 
     * l'assegnazione del valore iniziale della variabile iteratrice, le istruzioni
     * da ripetere, l'incremento della variabile iteratrice e la condizione che deve 
     * essere vera affinché vengano eseguite le istruzioni tra le parentesi graffe.
    */
    for(int i = 0; i < 5; i++)
    {
        printf("Prova Giovanni %i \n", i);
    }

    printf("Sono fuori.\n\n");
}