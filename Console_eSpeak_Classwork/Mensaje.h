/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mensaje.h
 * Author: UNITEC
 *
 * Created on 01 de diciembre de 2020, 14:35
 */

#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>
using std::string;

//#include "Archivos.h"
class Archivos; //forward definition
class Imprimir;

class Mensaje {
public:
    Mensaje();
    
    Mensaje(string,string);

    void setRespuesta(string respuesta) { //inline definitions
        this->respuesta = respuesta;
    }

    string getRespuesta() const {
        return respuesta;
    }

    void setPregunta(string pregunta) {
        this->pregunta = pregunta;
    }

    string getPregunta() const {
        return pregunta;
    }
private:
    string pregunta;
    string respuesta; 

    friend class Archivos; // amistad entre clases 
    friend class Imprimir;
};

#endif /* MENSAJE_H */

