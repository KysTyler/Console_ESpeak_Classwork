/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Archivos.h
 * Author: UNITEC
 *
 * Created on 01 de diciembre de 2020, 14:42
 */

#ifndef ARCHIVOS_H
#define ARCHIVOS_H

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <vector>
using std::vector;

#include "Mensaje.h"


class Archivos {
public:
    Archivos();

    
    //métodos para leer y escribir Mensajes en un archivo
    void guardarTodos(string,vector<Mensaje*>&);
    vector<Mensaje*> leerTodos(string);
    
    
private:
    ifstream lectura;
    ofstream escritura;
};

#endif /* ARCHIVOS_H */

