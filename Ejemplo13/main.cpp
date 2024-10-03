#include "Persona.hpp"
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
#include <set>      // Para evitar edades repetidas

using namespace std;

int main() {
    srand(time(0));  // Inicializar la semilla para los números aleatorios

    set<int> edades;      // Usamos un set para asegurar que las edades sean únicas
    Persona* personas[10]; // Array de punteros a Persona

    // Crear 10 personas con edades distintas entre 18 y 27
    for (int i = 0; i < 10; ++i) {
        int edad;
        do {
            edad = rand() % 10 + 18; // Generar una edad aleatoria entre 18 y 27
        } while (edades.find(edad) != edades.end()); // Repetir si la edad ya existe

        edades.insert(edad); // Insertar la nueva edad en el set
        personas[i] = new Persona(edad); // Crear un nuevo objeto Persona con la edad generada
    }

    // Mostrar información de las 10 personas
    for (int i = 0; i < 10; ++i) {
        cout << "Persona " << i + 1 << ":" << endl;
        personas[i]->mostrar();
        cout << "-----------------" << endl;
    }

    // Liberar la memoria reservada dinámicamente
    for (int i = 0; i < 10; ++i) {
        delete personas[i];
    }

    return 0;
}