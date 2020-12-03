/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorMensaje.h
 * Author: Tyler C
 *
 * Created on December 3, 2020, 2:53 PM
 */

#ifndef MANEJADORMENSAJE_H
#define MANEJADORMENSAJE_H
#include <vector>
#include <string>
#include "Archivos.h"
using std::vector;
using std::string;

class ManejadorMensaje {
public:
    ManejadorMensaje();
    ManejadorMensaje(const ManejadorMensaje& orig);
    virtual ~ManejadorMensaje();
    
    //methods
    void agregarMensaje();
    void modificarMensaje(vector<Mensaje*>,int);
    int buscarMensaje(vector<Mensaje*>,string);
    void eliminarMensaje();
    
    //getters & setters
    vector<Mensaje*> getMessage(int);
//    void setMessage(string);
    
    
private:
   vector<Mensaje*> listMensaje;

};

#endif /* MANEJADORMENSAJE_H */

