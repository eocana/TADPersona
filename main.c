#include "TADpersona.h"
int main() {
    printf("TAD Persona\n");

    Persona* persona;
    Persona* persona1;
    char nombre[10];
    char dni[8];
    int edad;
    float peso;
    int i = 0;

    persona = Persona_crear();
    persona1 = Persona_crear();

    for (i = 0; i < 2; ++i) {
        printf("Como se llama la persona %d", i+1);

        scanf("%s", nombre);
        printf("Cual es el dni de la persona %d", i+1);
        fflush(stdin);
        scanf("%s", dni);
        printf("Cuantos anys tiene la persona %d", i+1);
        scanf("%d", &edad);
        printf("Cuanto pesa la persona %d", i+1);
        scanf("%f", &peso);
        fflush(stdin);


        if(i==0){
            Persona_set(persona, nombre, dni, edad, peso);
        } else {
            Persona_set(persona1, nombre, dni, edad, peso);
        }
        memset(nombre, 0, sizeof(nombre)); // SE QUE NO ES POT FER SERVIR ES PER ANAR RAPID!
        memset(dni, 0, sizeof(dni)); // SE QUE NO ES POT FER SERVIR ES PER ANAR RAPID!
    }

    Persona_toString(persona);
    Persona_toString(persona1);

    Persona_destruir(persona);
    Persona_destruir(persona1);



    return 0;
}
