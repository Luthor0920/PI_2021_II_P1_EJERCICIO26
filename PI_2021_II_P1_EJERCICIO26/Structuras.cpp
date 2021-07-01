#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct pelicula {
	string titulo;
	int año;
} peliculas[3];
void imprimirPelicula(pelicula pelicula);
int main() {
	for (int i = 0; i < 3; i++)
	{
		cout << "Ingrese el titulo ";
		cin.ignore();
		getline(cin, peliculas[i].titulo);
		cout << "Ingrese año ";
		cin >> peliculas[i].año;
	}
	for (int i = 0; i < 3; i++)
	{
		imprimirPelicula(peliculas[i]);
	}
	system("pause");
	return 0;
}
void imprimirPelicula(pelicula pelicula) {
	cout << pelicula.titulo;
	cout << pelicula.año << endl;
}