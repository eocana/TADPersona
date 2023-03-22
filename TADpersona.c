//
// Created by Eric on 22/03/2023.
//
#include "TADpersona.h"

Persona* Persona_crear(){
    Persona* persona;
    persona = (Persona*) malloc(sizeof (Persona));

    int i = 0, j = 0;

    if(persona == NULL){
        printf("ERROR persona is NULL");
    }else{
        for (i = 0; i < 10; i++) {
            persona->nombre[i] = '\0';
        }

        for(j = 0; j < 8; j++){
            persona->dni[j] = '\0';
        }

        persona->edad = 0;

        persona->peso = 0.0;
    }

    return persona;
}
void Persona_set(Persona *persona, char nombre[10], char dni[8], int edad, float peso){
    strcpy(persona->nombre, nombre);
    strcpy(persona->dni, dni);
    persona->edad = edad;
    persona->peso = peso;
}
char *Persona_getNombre(Persona *persona){
    return persona->nombre;
}
char *Persona_getDni(Persona *persona){
    return persona->dni;
}
int Persona_getEdad(Persona *persona){
    return persona->edad;
}
int Persona_getPeso(Persona *persona){
    return persona->peso;
}
void Persona_destruir(Persona *persona){
    free(persona);
}