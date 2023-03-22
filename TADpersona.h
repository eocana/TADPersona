//
// Created by Eric on 22/03/2023.
//

#ifndef TADPERSONA_TADPERSONA_H
#define TADPERSONA_TADPERSONA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nombre[10];
    char dni[8];
    int edad;
    float peso;

}Persona;

Persona* Persona_crear();
void Persona_set(Persona *persona, char nombre[10], char dni[8], int edad, float peso);
//getters
char *Persona_getNombre(Persona *persona);
char *Persona_getDni(Persona *persona);
int Persona_getEdad(Persona *persona);
int Persona_getPeso(Persona *persona);
//setters
void Persona_setNombre(Persona *persona, char nombre[10]);
void Persona_setDni(Persona *persona, char dni[8]);
void Persona_setEdad(Persona *persona, int edad);
void Persona_setPeso(Persona *persona, float peso);

void Persona_toString(Persona *persona);

//free()
void Persona_destruir(Persona *persona);



#endif //TADPERSONA_TADPERSONA_H
