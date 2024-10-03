#include <iostream>
#include <string>

using namespace std;

class Persona 
{
private:
	bool genero;
	int edad;
	char dni[10];
	
	void generarDni();
	void generarGenero();
	
public:
	Persona(int edad);
	
	~Persona();
	
	int getEdad() const;
	bool esMujer() const;
	void setEdad(int nuevaEdad);
	void mostrar() const;
};