/*
	Seccion 2 ejercicio 1
	K100101
*/

#include <iostream>
#define MAX_STRING 100
using namespace std;
string ReadMensaje();
string CodificarMensaje(string mensaje, int n, int e);
void DecodificarMensaje(string mensaje, int n, int d);

int main () {
	//Clave publica (93,43)
	//Clave privada (93, 7)
	int n = 93;
	int d = 7;
	int e = 43;
	string mensajeSinCodificar = ReadMensaje();
	//char* mensajeCodificado = CodificarMensaje(mensajeSinCodificar, n, e);
	//DecodificarMensaje(mensajeCodificado, n, d);
}

string ReadMensaje() {
	string mensaje = "";
	cout << "Ingrese un mensaje a codificar por RSA(solo letras del abcedario en minusculas o mayusculas): \n";
	char caracter;
	caracter = cin.get();
	while(((caracter >='a' and caracter <='z') or (caracter>='A' and caracter <='Z'))) {
		mensaje += caracter;
		caracter = cin.get();
	}
	return mensaje;
}

string CodificarMensaje(string mensaje, int n, int e) {
	char mensajeCodificado [MAX_STRING];
	
}
void DecodificarMensaje(string mensaje, int n, int d) {
	
}

