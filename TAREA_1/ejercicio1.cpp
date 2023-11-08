#include <iostream>
#include <vector> 


int sumatoria (int n, int m){

    int resultado = 0; 
    while (n<=m){
        resultado = resultado + n; 
        n = n +1; 
    }
    return resultado; 

}


int sumatoria_pares (std::vector <int> vec ) {

    int resultado = 0; 

    for (int i :vec){

        if (i % 2 == 0){
            resultado = resultado + i; 
        }
    }

     return resultado; 

}

bool primo (int n){
    int residuos= 0, contador = 0, division = 1; 

    while (contador <= n) {
        if (n % division == 0){
            residuos = residuos + 1; 
        } 
        division = division + 1; 
        contador = contador + 1; 
    }

    if (residuos == 2){
        return true; 
    }
    else {
        return false; 
    }
}

bool bisiesto (int anio){
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0){
        return true;
    }
    else {
        return false; 
    }
}


int main (){
    // Ejercicio 1
    int resultado_entero = sumatoria(1,100); 
    std:: cout << "Resultado sumatoria: "<<resultado_entero <<std::endl; // 5050
    resultado_entero = sumatoria(40,75); 
    std:: cout << "Resultado sumatoria: "<<resultado_entero <<std::endl; //2070
    resultado_entero = sumatoria(32,1024); 
    std:: cout << "Resultado sumatoria: "<<resultado_entero << std::endl; //524304


    // Ejercicio 2
    std::vector <int> mi_vector = {1,2,3,4,5,6,7,8,9,10}; 
    resultado_entero = sumatoria_pares(mi_vector); 
    std::cout << "Resultado sumatoria pares: "<< resultado_entero <<std::endl; // 30 
    mi_vector = {1,6,8,4,2,5,8,9,34,2}; 
    resultado_entero = sumatoria_pares(mi_vector); 
    std::cout << "Resultado sumatoria pares: "<< resultado_entero <<std::endl; // 64
    mi_vector = {1,5,7,9,3}; 
    resultado_entero = sumatoria_pares(mi_vector); 
    std::cout << "Resultado sumatoria pares: "<< resultado_entero <<std::endl; // 0 

    //Ejercicio 3 
    bool resultado_booleano;
    int n = 7;
    resultado_booleano = primo (n); 
    std::cout<< n << " es primo: " << resultado_booleano <<std::endl; //true
    n = 924;
    resultado_booleano = primo (n); 
    std::cout<< n << " es primo: " << resultado_booleano <<std::endl; //false
    n = 887; 
    resultado_booleano = primo (n); 
    std::cout<< n << " es primo: " << resultado_booleano <<std::endl; //true

    int anio = 2000; 
    resultado_booleano = bisiesto(anio); 
    std::cout << anio << " es bisiesto: " << resultado_booleano << std::endl; // true
    anio = 2092; 
    resultado_booleano = bisiesto(anio); 
    std::cout << anio << " es bisiesto: " << resultado_booleano << std::endl; // true
    anio = 1700; 
    resultado_booleano = bisiesto(anio); 
    std::cout << anio << " es bisiesto: " << resultado_booleano << std::endl; // false
    anio = 3000; 
    resultado_booleano = bisiesto(anio); 
    std::cout << anio << " es bisiesto: " << resultado_booleano<< std::endl; // false

    
}