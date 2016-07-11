/*
	Seccion 2 ejercicio 1
	K100101
*/

#include <iostream>
using namespace std;
string ReadMensaje();
string CodificarMensaje(string mensaje, int n, int e);
char CodificarLetra(char letra, int n, int e);
void DecodificarMensaje(string mensaje, int n, int d);
char DecodificarLetra(char letra, int n, int d);
long double Power(int base, int exponente);

int main () {
	//Clave publica (65,7)
	//Clave privada (65,7)
	int n = 65;
	int d = 7;
	int e = 7;
	string mensajeSinCodificar = ReadMensaje();
	string mensajeCodificado = CodificarMensaje(mensajeSinCodificar, n, e);
	cout << "\nSi desea recuperar el mensaje original escriba la tecla s, sino igrese cualquier otra telca: \n";
	if(cin.get() == 's') {
		DecodificarMensaje(mensajeCodificado, n, d);
		cin.get();
		cin.get();
	}
		
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
	string codificado = "";
	cout << "El mensaje codificado es:\n";
	for(int i = 0; i != mensaje.length(); i++) {
		codificado += CodificarLetra(mensaje[i],n,e);
		cout << (int) codificado[i] << '\t';
	}
	return codificado;
}
char CodificarLetra(char letra, int n, int e) {
	cout.precision(25);
	return (long long unsigned int) Power(letra-64, e)%n;
}
void DecodificarMensaje(string mensaje, int n, int d) {
	string decodificado = "";
	cout << "\nEl mensaje decodificado es:\n";
	for(int i = 0; i != mensaje.length(); i++) {
		decodificado += DecodificarLetra(mensaje[i],n,d);
		cout << decodificado[i];
	}
}

char DecodificarLetra(char letra, int n, int d) {
	return (long long unsigned int)Power(letra, d)%n   + 64;
}

long double Power(int base, int exponente) {
	long double resultado = 1;
	for(int i = 0; i < exponente; i++) {
		resultado = resultado * base;
	}
	return resultado;
}


