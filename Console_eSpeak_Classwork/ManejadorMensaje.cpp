/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorMensaje.cpp
 * Author: Tyler C
 * 
 * Created on December 3, 2020, 2:53 PM
 */

#include "ManejadorMensaje.h"
#include <string>
#include <vector>
using std::vector;
using std::string;

ManejadorMensaje::ManejadorMensaje() {
}

ManejadorMensaje::ManejadorMensaje(const ManejadorMensaje& orig) {
}

ManejadorMensaje::~ManejadorMensaje() {
}

void ManejadorMensaje::agregarMensaje() {

}

void ManejadorMensaje::modificarMensaje(vector<Mensaje*> m, int messageIndex) {
    //m.at(messageIndex)
}

int ManejadorMensaje::buscarMensaje(vector<Mensaje*> m, string message) {
    for (int i = 0; i < m.size(); i++){
        if (m.at(i) == message)
            return i;
    }
return -1;
}

void ManejadorMensaje::eliminarMensaje() {

}

vector<Mensaje> ManejadorMensaje::getMessage(int n) {
    return listMensaje.at(n);
}
//
//void setMessage(string) {
//
//}
