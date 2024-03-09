/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cTeste.cpp
 * Author: breno
 * 
 * Created on 8 de março de 2024, 21:39
 */

#include "cTeste.h"
#include <iostream>

using namespace std;

cTeste::cTeste() {
}

cTeste::cTeste(const cTeste& orig) {
}

cTeste::~cTeste() {
}

void cTeste::questaoum(){
    int i = 13, soma = 0, k = 0;
    
    while(k < i){
        k = k + 1;
        soma = soma + k;
    }
    
    cout << "A soma é: " << soma << endl;  
}

void cTeste::questaodois(){
    int num = 0;
    
    cout << "Informe um número: ";
    cin >> num;
    
    bool result = pertenceASequencia(num);
    
    if(result == true){
        cout << "O número pertence à sequência!!!" << endl;
    }
    else{
        cout << "O número não pertence à sequência!!!" << endl;
    }
    
    
}

bool cTeste::pertenceASequencia(int num){
    int a = 0, b = 1;
    
    while(a <= num){
        if(a == num){
            return true;
        }
        
        int soma = a + b;
        a = b;
        b = soma;
    }
    
    return false;
}

void cTeste::questaotres(){
    char str[50] = "";
    cout << "Digite um algo: ";
    cin >> str;
    
    int tamanho = 0;
    while(str[tamanho] != '\0'){
        tamanho++;
    }
    
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
    
    cout << "A String invertida é: " << str;
}


