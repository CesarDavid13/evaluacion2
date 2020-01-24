#include<iostream>
int main(){
    char salir;
    int num[4];
    int cont;
    float producto_numero;
    for(cont=0;cont<=3;cont++){
                               std::cout<< "introduce el numero",cont,":";
                               std::cin>> num[cont];
}
    std::cout<< "PRODUCTO\n";
    producto_numero=1;
    for(cont=0;cont<=3;cont++){
                               producto_numero=producto_numero*num[cont];
}
    std::cout<< "el producto vale: ";
    std::cout<< producto_numero;
    std::cout<< "\n";




    std::cin >> salir;
    
    
    
    
}

