#include<iostream>
/*Vamos a hacer un programa que nos pida 4 numeros y los que guarde para calcular la media*/

int main(){
    //Definicion de variables
    char salir;
    int num[4];
    int cont;
    float suma_numero;
    float media;
    //introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
                               std::cout<< "intuduce el numero ",cont,":";
                               std::cin >> num[cont];
}
    //sacamos los numeros guardados
    std::cout<< "has metido los siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
                               std::cout<<num[cont];
}
    //calculamos la media
    std::cout<< "MEDIA\n";
    suma_numero=0;
    for(cont=0;cont<=3;cont++){
                               suma_numero=suma_numero+num[cont];//suma acumulada
}
    std::cout<< "la suma vale: ";
    std::cout<< suma_numero;
    std::cout<< "\n";
    media=suma_numero/4;
    std::cout<< "la media vale: ";
    std::cout<< media;
    std::cout<< "\n";
    //mostramos la lista en orden inverso
    for(cont=3;cont>=0;cont--){
                               std::cout<< num[cont];
}
                               
    
    std::cin >> salir;
}
