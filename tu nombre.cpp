#include<iostream>
/*un programa que lea una palabra y me devuelva la inicial*/

int main(){
    char palabra[10];
    char salir;
    float longitud;
    int cont;
    std::cout<< "dime tu nombre";
    std::cin>> palabra;
    std::cout<< "\nTe llamas ";
    std::cout<<palabra;
    //std::cout<< "\nLa primera letra de tu nombre es la";
    //std::cout<<palabra[0];
    std::cout<<"\nANIMADORA:\n";
    for(cont=0;cont<=9;cont++){
                               std::cout<<palabra[cont];
                               std::cout<<'\n';
}
    //contamos cuantas letras tiene tu lindo nombre
    for(cont=0;cont<=9;cont++){
                               if(palabra[cont]!='\0'){
                                                       longitud=longitud+1;
}
}
    std::cout<<"el nombre de ";
    std::cout<< palabra;
    std::cout<<"tiene ";
    std::cout<<longitud;
    std::cout<< " letras";
    std::cin >> salir;
}
    
