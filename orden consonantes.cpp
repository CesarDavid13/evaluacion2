#include<iostream>
#include<cesar.h>
int main(){
    char salir;
    int cont,nvocales,nconsonantes,aux,longitud;
    char palabra[5];
    char vocales=('a','e','i','o','u');
    for(cont=0;cont<5;cont++){
                              std::cout<<"dime una palabra";
                              std::cin >>aux;
                              longitud=devuelve_longitud(aux);
                              palabras[cont]=(char *)malloc((longitud+1)*sizeof(char));//Reserva
                              std::cout<<"\n";
                              std::cout<<longitud;
                              std::cout<<"\n";
                              strcpy(palabras[cont],aux );
                              }
    std::cin>>salir;
}
    
                              
