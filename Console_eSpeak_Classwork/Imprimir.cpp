/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Imprimir.cpp
 * Author: UNITEC
 * 
 * Created on 02 de diciembre de 2020, 15:07
 */

#include "Imprimir.h"

#include <iostream>
using std::cout;
using std::endl;

Imprimir::Imprimir() {
    //no hacer nada
}

void Imprimir::imprimirMensajeConsola(Mensaje* msg){
    cout<<"P: "<<msg->pregunta<<endl
        <<"R: "<<msg->respuesta<<endl;
}


