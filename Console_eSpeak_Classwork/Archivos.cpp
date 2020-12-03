/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Archivos.cpp
 * Author: UNITEC
 * 
 * Created on 01 de diciembre de 2020, 14:42
 */

#include "Archivos.h"
#include "Mensaje.h"



Archivos::Archivos() {
    //no hacer nada
}

void Archivos::guardarTodos(string fileName,vector<Mensaje*>& mensajes){
    // paso 1 abrir/crear archivo
    escritura.open (fileName, std::ofstream::out | std::ofstream::trunc);
    // paso 2 guardar contenido del vector
//    for(int i =0;i<mensajes.size();i++){
//        escritura<<mensajes[i]->getPregunta()<<"\n"
//                  << mensajes[i]->getRespuesta()<<"\n";
    for(int i =0;i<mensajes.size();i++){
        escritura<<mensajes[i]->pregunta<<"\n"
                  << mensajes[i]->respuesta<<"\n";
    }
    //paso 3 cerrar el archivo
    escritura.close();
}

vector<Mensaje*> Archivos::leerTodos(string fileName){
    vector<Mensaje*> mensajesLeidos;
    //Leer los mensajes
    // paso 1 abrir archivo
    lectura.open(fileName);
    //paso 2, si está abierto, leer 
    if(lectura.is_open()){
        string buffer;
        while(getline(lectura,buffer)){ //leer pregunta
            Mensaje* msg = new Mensaje();
           /// msg->setPregunta(buffer);
            msg->pregunta=buffer;
            //leer la respuesta
            getline(lectura,buffer);           
           // msg->setRespuesta(buffer);
            msg->respuesta=buffer;
            mensajesLeidos.push_back(msg);        
        }
        // paso 3: cerrar archivo
        lectura.close();
    
    }
    
    
    return mensajesLeidos;
}
 


