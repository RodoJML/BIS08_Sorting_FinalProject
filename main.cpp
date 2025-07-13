#include <iostream>
#include <vector>
#include <string>

int main() {

    int opcionMenu;
    int tamañoLista;
    bool exit   = false;
    std::vector<int> listaNumeros;

    std::string integrantes[5] = {"202011770 Rodolfo Meneses Leal", 
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
        printf("·%s \n", integrantes[i].c_str());
    }
    
    while(!exit){
        printf("\n----------------- Menu ---------------------- \n\n");;
        printf("1. Ingresar una lista de numeros.               \n");
        printf("2. Aplicar Algoritmo Burbuja.                   \n");
        printf("3. Aplicar Algoritmo Selección.                 \n");
        printf("\nSeleccione una opcion: ");
        scanf("%i", &opcionMenu);

        switch(opcionMenu){
            case 1: 
                printf("De que tamaño desea su lista de numeros: ");
                scanf("%i", &tamañoLista);
                listaNumeros = crearListaNumeros(tamañoLista);
                break;
            case 2: 
                break;
            default: 
                printf("Opción no válida. Intente de nuevo.\n");
                continue;
        }

    }

    return 0;

}


std::vector<int> crearListaNumeros(int cantidad){

    std::vector<int> lista;

    for(int i = 0; i <= cantidad; i++){

    }
}