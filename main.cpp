#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::vector<int> crearListaNumeros();
void algoritmoSeleccion(vector<int>& lista, int size);


std::vector<int> crearListaNumeros(int cantidad){

    std::vector<int> lista;

    for(int i = 0; i <= cantidad; i++){

    }
}


#include <iostream>
#include <vector>
using namespace std;

void algoritmoSeleccion(vector<int>& lista, int size) {
    int menor;
    

    for (int i = 0; i < size; i++) {
        menor = i;

        for (int j = i + 1; j < size; j++) {
            if (lista[menor] > lista[j]) {
                menor = j;
            }
        }

        int iteracion = lista[i];
        lista[i] = lista[menor];
        lista[menor] = iteracion;
    }

    cout << "La lista  ordenada por algoritmo de selección es: " << endl;
    for (int i = 0; i < size; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}






int main() {

    int opcionMenu;
    bool exit   = false;
    vector<int> listaNumeros;

    string integrantes[5] = {"202011770 Rodolfo Meneses Leal", 
                                  "XXXXXXXXX Carlos Jimenez", 
                                  "XXXXXXXXX Victoria ",
                                  "XXXXXXXXX Xander ",
                                  "XXXXXXXXX ABC"};

    printf("\n================= ULatina ====================\n\n");
    printf("Fecha:      01/08/2025                          \n");
    printf("Curso:      BIS08 Estructura de Datos           \n");
    printf("Docente:    Leandro Arturo Castillo Rivera      \n");
    printf("Proyecto:   Algoritmos de Ordenación            \n\n");
    printf("Integrantes:                                    \n");
    
    for(int i = 0; i < (sizeof(integrantes)) / sizeof(integrantes[0]); i++){
        if(i == ((sizeof(integrantes) / sizeof(integrantes[0])) - 1))
            printf("·%s", integrantes[i].c_str());
        else 
            printf("·%s \n", integrantes[i].c_str());
    }
    
    while(!exit){
        printf("\n\n\n-- Menu Principal ----------------------------  \n");
        printf("1. Crear lista de numeros.                              \n");
        printf("2. Aplicar Algoritmo Burbuja.                           \n");
        printf("3. Aplicar Algoritmo Selección.                         \n\n");
        printf("Seleccione una opcion: ");
        scanf("%i", &opcionMenu);

        switch(opcionMenu){
            case 1:
                printf("Crear lista de numeros...");
                listaNumeros = crearListaNumeros();
                break;
            case 2: 
                break;
			 case 3: 
			 algoritmoSeleccion(listaNumeros,tamañoLista);
			 			 
                break;
            default: 
                printf("Opción no válida. Intente de nuevo.");
                continue;
        }

    }

    return 0;

}


vector<int> crearListaNumeros(){

    std::vector<int> lista;
    int tamañoLista;
    int valor;

    printf("\n\n\n-- Creando Lista -----------------------------\n");
    printf("De que tamaño desea su lista de numeros: ");
    scanf("%i", &tamañoLista);
    printf("\nIngrese un valor para cada posición de la lista\n");

    for(int i = 0; i < tamañoLista; i++){
        valor = 0;
        printf("Posicion [%i]: ", i + 1);
        scanf("%i", &valor);
        lista.push_back(valor);
    }

    printf("\n");
    printf("Lista Creada:");
    for(int n : lista){
        printf("[%i]", n);
    }

    return lista;
}


void algoritmoSeleccion(vector<int>& lista, int size) {
    int menor;
    

    for (int i = 0; i < size; i++) {
        menor = i;

        for (int j = i + 1; j < size; j++) {
            if (lista[menor] > lista[j]) {
                menor = j;
            }
        }

        int iteracion = lista[i];
        lista[i] = lista[menor];
        lista[menor] = iteracion;
    }

    cout << "La lista  ordenada por algoritmo de selección es: " << endl;
    for (int i = 0; i < size; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}