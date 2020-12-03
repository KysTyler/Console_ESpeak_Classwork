/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: UNITEC
 *
 * Created on 01 de diciembre de 2020, 14:33
 */

#include <cstdlib>
#include "Mensaje.h"
#include "Archivos.h"

#include <vector>
using std::vector;

#include "Imprimir.h"
/*
 * 
 */
int main(int argc, char** argv) {
    vector<Mensaje*> mensajes; 
    /*
    mensajes.push_back(new Mensaje("Hello","Hello, how are you?"));
    mensajes.push_back(new Mensaje("What's your name?","My name is SKYNET!"));
    mensajes.push_back(new Mensaje("What are you?","I'm a computer program."));
    */
    Archivos archivoMensajes;
    Imprimir consola;
    //archivoMensajes.guardarTodos("Mensajes.txt",mensajes );
    mensajes = archivoMensajes.leerTodos("Mensajes.txt");
    
    //imprimir lo leido del archivo
    for(int i = 0;i<mensajes.size();i++)
        consola.imprimirMensajeConsola(mensajes[i]);
    
    //Instanciar ManejadorMensajes
    
    //mandar a llamar / probar los métodos 
    
    //obtener todos los mensajes del manejador
    
    //guardar  todos los mensajes en el archivo
    //archivoMensajes.guardarTodos("Mensajes.txt",mensajes );
    
    
    //liberar memoria de objetos en heap de vector
    for(int i = 0;i<mensajes.size();i++)
        delete mensajes[i];
    
    mensajes.clear();
    
    
    return 0;
}

