#include<iostream>
/*un programa que lea una palabra y sustituya las vocales por u*/
int devuelve_longitud(char palabra[]){
    int longitud=0;
    int cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               }
    return(longitud);
}
int main(){
    char palabra[10],salir;
    int cont;
    char salir;
    std::cout<<"dime tu nombre";
    std::cin>>palabra;
    for(cont=0;cont<<devuelve_longitud(palabra);cont++){
                                                        if(palabra[cont]>=65 && palabra[
