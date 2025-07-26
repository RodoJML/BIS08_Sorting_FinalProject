#include <iostream>     // Entrada y salida estándar
#include <vector>       // Uso de vectores dinámicos
#include <string>       // Uso de cadenas de texto
using namespace std;

// --------------------- FUNCIONES -----------------------------

// Función para mostrar los elementos de la lista
void mostrarLista(const vector<int>& lista) {
    for (int n : lista) {
        cout << "[" << n << "] ";
    }
    cout << endl;
}

// Función para crear una lista de números desde la entrada del usuario
vector<int> crearListaNumeros() {
    vector<int> lista;
    int tamañoLista, valor;

    cout << "\n-- Creando Lista -----------------------------\n";
    cout << "¿De qué tamaño desea la lista?: ";
    cin >> tamañoLista;

    // Solicitar al usuario cada valor
    for (int i = 0; i < tamañoLista; i++) {
        cout << "Posición [" << i + 1 << "]: ";
        cin >> valor;
        lista.push_back(valor);  // Agregar valor a la lista
    }

    cout << "\nLista creada exitosamente.\n";
    return lista;
}

// Algoritmo de ordenación por selección
void algoritmoSeleccion(vector<int>& lista) {
    int size = lista.size();

    for (int i = 0; i < size; i++) {
        int menor = i;

        // Buscar el elemento más pequeño en el resto de la lista
        for (int j = i + 1; j < size; j++) {
            if (lista[j] < lista[menor]) {
                menor = j;
            }
        }

        // Intercambiar el actual con el menor encontrado
        swap(lista[i], lista[menor]);
    }

    cout << "Lista ordenada con selección:\n";
    mostrarLista(lista);
}

// Algoritmo de burbuja con visualización paso a paso
void algoritmoBurbuja(vector<int>& lista) {
    int size = lista.size();   // Guarda el tamaño de la lista
    bool cambiado;             // Bandera para saber si se hicieron intercambios
    int paso = 1;              // Contador de pasadas (solo para mostrar)

    cout << "\nAplicando algoritmo de BURBUJA paso a paso:\n";

    // Bucle externo: se repite tantas veces como elementos menos uno
    for (int i = 0; i < size - 1; i++) {
        cambiado = false;  // Reinicia la bandera en cada pasada
        cout << "\nPaso " << paso++ << ": Comparando e intercambiando...\n";

        // Bucle interno: compara elementos adyacentes
        for (int j = 0; j < size - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                // Si el actual es mayor que el siguiente, los intercambia
                cout << "  Intercambiando " << lista[j] << " y " << lista[j + 1] << endl;
                swap(lista[j], lista[j + 1]);
                cambiado = true; // Se hizo un cambio
            }
        }

        // Muestra cómo va la lista después de esta pasada
        cout << "Lista actual: ";
        mostrarLista(lista);

        // Si no se hicieron intercambios, la lista ya está ordenada
        if (!cambiado) {
            cout << "(No se hicieron más intercambios, lista ordenada anticipadamente)\n";
            break; // Sal del bucle porque ya está ordenado
        }
    }

    // Resultado final
    cout << "\nLista final ordenada con burbuja:\n";
    mostrarLista(lista);
}


// ------------------------ MAIN ------------------------------

int main() {
    int opcionMenu;
    bool exit = false;
    vector<int> listaNumeros;

    // Información del equipo
    string integrantes[5] = {
        "202011770 Rodolfo Meneses Leal", 
        "XXXXXXXXX Carlos Jimenez", 
        "XXXXXXXXX Victoria", 
        "202401111719 Xander Arce Araya", 
        "XXXXXXXXX ABC"
    };

    // Encabezado de presentación
    cout << "\n================= ULatina ====================\n\n";
    cout << "Fecha:      01/08/2025\n";
    cout << "Curso:      BIS08 Estructura de Datos\n";
    cout << "Docente:    Leandro Arturo Castillo Rivera\n";
    cout << "Proyecto:   Algoritmos de Ordenación\n\n";
    cout << "Integrantes:\n";
    for (const auto& nombre : integrantes) {
        cout << "· " << nombre << endl;
    }

    // Menú principal
    while (!exit) {
        cout << "\n-- Menu Principal ----------------------------\n";
        cout << "1. Crear lista de números\n";
        cout << "2. Aplicar Algoritmo Burbuja\n";
        cout << "3. Aplicar Algoritmo Selección\n";
        cout << "4. Mostrar Lista Actual\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1:
                listaNumeros = crearListaNumeros();
                break;
            case 2:
                algoritmoBurbuja(listaNumeros);
                break;
            case 3:
                algoritmoSeleccion(listaNumeros);
                break;
            case 4:
                mostrarLista(listaNumeros);
                break;
            case 5:
                exit = true;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }
    }

    return 0;
}
}
