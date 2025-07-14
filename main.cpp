#include <iostream>
#include <vector>
#include <string>

int main() {

    int opcionMenu;
    int tamañoLista;
    bool exit   = false;
    std::vector<int> listaNumeros;

    std::string integrantes[5] = {"202011770 Rodolfo Meneses Leal", 
                                  "20220114317 Carlos Andrés Jiménez Sánchez", 
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
			 case 3: 
			 algoritmoSeleccion(listaNumeros,tamañoLista);
			 			 
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


void algoritmoSeleccion(int lista[],int size){
	
	int valorActual;
	int menor;
	

  for (int i = 0; i <  size; i++) {
	 
	  menor=i;
	  
	   for (int j = i+1; j <  size; j++) {
		   
		   if(lista[menor]>lista[j]){
			   
			   menor=j;
			   
		   }
		   
	   }
	  int iteracion=lista[i];
	  lista[i]=lista[menor];
	  lista[menor]=iteracion;
	  
	
	   
    
	
	
  }
 cout <<  "La ordenada por algoritmo de seleccion es: " <<endl;
 for (int i = 0; i <  size; i++) {
      
       cout<<lista[i]<<" ";
       
       
 }
}