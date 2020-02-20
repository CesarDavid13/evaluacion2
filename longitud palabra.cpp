
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int devuelve_longitud(char aux[]){
                       int cont;
                       int longitud=0;
                       while(aux[cont]!='\0'){
                                             longitud++;
                                             cont++;
                                             }
return(longitud);


}

                    
int main(){
    char *palabras[4];
    int cont;
    char salir;
    char aux[20];
    int longitud;
    int veces;
    char *p_aux;
//  Leo cuatro palabras
    for(cont=0;cont<4;cont++){
                              std::cout<<"palabra: ";
                              std::cin >>aux;
                              longitud=devuelve_longitud(aux);
                              palabras[cont]=(char *)malloc((longitud+1)*sizeof(char));//Reserva
                              std::cout<<"\n";
                              std::cout<<longitud;
                              std::cout<<"\n";
                              strcpy(palabras[cont],aux );
                              }
    std::cout<<"\nlista de palabras\n";
    for(cont=0;cont<4;cont++){
                              printf("%s\n",palabras[cont]);
                              }
//  ordenamos por el metodo de la brubuja
    for(veces=1;veces<4;veces++){
                                 for(cont=0;cont<3;cont++){
                                                           if(strcmp(palabras[cont],palabras[cont+1])>0){
                                                                                                         p_aux=palabras[cont];
                                                                                                         palabras[cont]=palabras[cont+1];
                                                                                                         palabras[cont+1]=p_aux;
                                                                                                         }
                                                                                                         }
                                                                                                         }
     std::cout<<"\nlista de palabras ordenadas\n";
    for(cont=0;cont<4;cont++){
                              printf("%s\n",palabras[cont]);
                              }
                                                           
                                                                            
    
                              
  std::cin>>salir;
}
