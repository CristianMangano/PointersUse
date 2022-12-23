#include <stdio.h>

typedef struct Persone
  {
    int eta;
    int peso;
    struct Persone* puntatore;
  }Personaggi;
  
void main(void) {
  printf("hello\n");
  Personaggi personaggi[3]; // ho creato 3 personaggi
  personaggi[0].eta = 6;
  personaggi[0].peso = 4;
  personaggi[0].puntatore = &(personaggi[2]); // inizializzo il primo personaggio
  personaggi[2] = personaggi[0];  // copio i valori di una struct Persone in un'altra struct Persone
  personaggi[2].puntatore = &(personaggi[1]); // imposto la variabile a struct Persone * puntatore a puntare l'indirizzo della struct Persone personaggi 1
  if(personaggi[0].eta == ((personaggi[0].puntatore)->eta)) // un controllo che serve per capire come accedere ai campi
    printf("evviva");
}
