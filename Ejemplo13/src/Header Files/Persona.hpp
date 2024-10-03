#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>  // Para std::cout y std::endl

class Persona {
private:
    bool genero;          // 1 = Mujer, 0 = Hombre
    int edad;             // Edad de la persona
    char dni[10];         // DNI con letra (por ejemplo "12345678A")

    // Métodos privados
    void generarDNI();    // Método auxiliar para generar un DNI automáticamente
    void asignarGenero(); // Método auxiliar para asignar un género aleatorio

public:
    // Constructor que recibe la edad
    Persona(int edad);

    // Destructor
    ~Persona();

    // Obtener la edad
    int getEdad();

    // Establecer una nueva edad
    void setEdad(int nuevaEdad);

    // Comprobar si la persona es mujer
    bool esMujer();

    // Mostrar toda la información de la persona
    void mostrar();
};

#endif