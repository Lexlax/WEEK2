#include <stdio.h> /*Richiamo della libreria stdio.h(standard input output | il .h finale si usa per le librerie) Essa controlla l'inclusione delle funzioni printf,scanf e fget */

void menu (); /* Le quattro voci in seguito sono dichiarazioni di variabili ogni variabile ha un tipo e il suo valore deve essere in accordo con il tipo. Void non restituisce nessun risultato.*/ 
int moltiplica (); /* Int restituisce risultati interi.*/
float dividi (); /* Anche qui ma con la differenza che la stampa del risutato di una divisione può essere un numero reale */
void ins_string(); 


int main () /* Main è la funzione principale di un programma in C. Anche qui int identifica il tipo della funzione main*/

{
         char scelta = '\0' ; /* qui ho tolto le parentesi graffe perchè esse delimitano un blocco di codice */
         menu ();
         scanf("%c", &scelta);   /* %d è utilizzato per interi. In questo caso è più appropriato %c perchè la scelta non e' un intero ma un char*/
      
         switch (scelta) /* Il comando switch è utile per valutare caso per caso i valori di una variabile.In questo caso ho aggiunto più possibilità rispetto al codice originale*/
         {
                 case 'A' :  /* L'elenco dei case a/b/c sono i valori della variabile (scelta) che potrebbe assumere. In base al suo valore si eseguira l'istruzione scritta. */
                 moltiplica();
                 break;     /* Il Break dopo ogni case permette di uscire dallo switch*/

                 case 'a':       /* Ho messo la possibilità di inserire anche lettere minuscole come nel caso della scelta dell'esercizio in C di questi giorni*/
                 moltiplica();
                 break;

                 case 'B' :
                 dividi();
                 break;

                 case 'b' :      /* Lettera minuscola anche qui*/
                 dividi();
                 break;

                 case 'C':
                 ins_string();
                 break;

                 case 'c' :       /* Lettera minuscola anche qui*/
                 ins_string();
                 break;

                 default :        /* Per un errore logico qui ho inserito il "Default" che viene eseguito se i casi in precedenza non sono soddisfatti*/
                 printf("***Errore***\n Inserisci una scelta valida\n");  /* Se si inserirebbe un valore errato come per esempio un numero in questo comparirebbe il messaggio di errore che in precedenza era assente*/
                 scanf("%s", &scelta);
                 break;
         }
     
return 0; /* valore di ritorno della funzione main. Si indica con Return 0 quando la funzione completa il suo compito con successo*/

}

void menu ()

{
          printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
          printf ("Come posso aiutarti?\n");
          printf(" A >> Moltiplicare due numeri \n B >> Dividere due numeri\n C >> Inserire una stringa\n"); /*Qui ho aggiunto uno spazio prima della A >> per allineare il tutto*/
}
int moltiplica () /* modifica in int*/

{
        short  int  a , b = 0  ; 
        printf("\nInserisci i due numeratori da moltiplicare: \n"); /* \n visto anche in precedenza serve per n ritorno a capo. Qui era assente*/
        scanf("%hd", &a); /* %f è utilizzato per interi. In questo caso è più appropriato %hd perchè la shor int accetta solo interi*/
        scanf("%hd", &b); /* %d è utilizzato per interi. In questo caso short int indica interi di 2byte(short) invece che 4byte(int).Anche in questo caso è più appropriato %hd*/
        
        short int prodotto = a * b;

        printf("Il prodotto tra %hd e %hd e': %d", a , b , prodotto); /* In questo caso è più appropriato %d. Il risultato potrebbe essere un int(4byte) come prodotto di due short(2byte)*/
        
}
float dividi () /* modifica in float*/
{
        int a , b = 0 ; /*short assente */
        printf("Inserisci il numeratore : \n");
        scanf("%d", &a); /* Come visto in precedenza qui lo short è assente quindi manteniamo %d */
        printf("Inserisci il denominatore : \n");
        scanf("%d", &b);
        
        float divisione = (float) a / b ; /* Aggiungendo (float) prima di "a / b" abbiamo a schermo il risultato con numeri reali. Cioè i numeri dopo la virgola.*/
        printf("La divisione tra %d e %d e ': %f", a ,  b , divisione ); 
        
}

void ins_string ()
{
         char stringa[10];
         fgets (stringa , 10 , stdin); /* Qui limita il numero massimo di caratteri inseribili, scartando quelli in eccesso. In questo caso da 11 in su. "s inserito nello scanf sostituito era corretto */
         printf("Inserisci la stringa :");
         scanf("%c", &stringa); 
         printf("La tua stringa %c", stringa ); /*Ho aggiunto printf per stampare a video la stringa inserita*/
}

