#include <iostream>

using namespace std;
int contador (char palabra[]){
    int contador=0;
    char current =palabra[0];
    for (int i=0;current!= '\0';current=palabra[++i]){
        contador+=1;}
    return contador;}

int contCaracter(char palabra[],char a){
    int x=0;
    for (int i=0;;i++){
        if (palabra[i]=='\0')
            break;
        if (a==palabra[i])
            x++;}
    return x;
}

int main()
{
    char palabra[] = "Hola";
    cout<<"Su tamaño es: "<<contador(palabra)<<endl;
    cout<<"El numero de caracteres en la cadena es: "<<contCaracter(palabra,'a')<<endl;
    int x=0;


    for (int i=0;i<(contador(palabra)/2);i++){
        if (palabra[i]==palabra[5-i]){
            x++;}}
    if (x==(contador(palabra)/2)){
        cout << "Es palindrome" ;
        return 0;}
        cout << "No es palindrome";}
