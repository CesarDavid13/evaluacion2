#include<iostream>
/*un programa que lea una palabra y me devuelva la inicial*/

int main(){
    char palabra[10];
    char salir;
    float longitud;
    int cont;
    longitud=0;//inicializo la variable
    std::cout<< "dime tu nombre ";
    std::cin>> palabra;
    //DIRTY TRICK
    cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;

}

    std::cout<<"el nombre de ";
    std::cout<< palabra;
    std::cout<<" tiene ";
    std::cout<<longitud;
    std::cout<< " letras";
    std::cin >> salir;
}
