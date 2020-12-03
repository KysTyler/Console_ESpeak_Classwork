/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mensaje.cpp
 * Author: UNITEC
 * 
 * Created on 01 de diciembre de 2020, 14:35
 */

#include "Mensaje.h"
#include <iostream>
using std::cout;
using std::endl;

Mensaje::Mensaje() {
    pregunta = "";
    respuesta="";
}

Mensaje::Mensaje(string pPregunta, string pRespuesta){
    pregunta = pPregunta;
    respuesta = pRespuesta; 
}




