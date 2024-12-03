#include <stdio.h>
#include "trace.h"
#include "math.h"
#include "pow.h"
#define BUF 10


int main(){
    int n1,n2,s,d,m,divi,i,u;
    printf("+ Somma\n* Moltiplicazione\n- Differenza\n/ Divisione\n^ Potenza\n# Logger\n! Esci\n");
    scanf("%d",& u);
    switch(u){
        case '+':
            int somma(int n1, int n2);
            printf("IL risultato e' %d");
            break;
        case '-':
            int differenza(int n1, int n2);
            printf("IL risultato e' %d");
            break;
        case '*':
            int moltiplicazione(int n1, int n2);
            printf("IL risultato e' %d");
            break;
        case '/':
            float divisione(int n1, int n2);
            printf("IL risultato e' %.2f");
            break;
        case '^':
            int potenza(int base, int esponente);
            printf("IL risultato e' %d");
            break;
        case '#':
            void logger(int iterazioni);

            break;
        case '!':
            printf("Arrivederci:)\n");
            return 0;
            break;
        
    }
}