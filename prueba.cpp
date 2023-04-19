#include <iostream>


using namespace std;

const int MAX=3;

struct persona{
	
	string nombre;
	int celular;
	
};

void cargar_datos(persona agenda[MAX]){
	
	int i=0;
	cout << "ingrese el nombre: ";
	cin >> agenda[i].nombre;
	
	while(agenda[i].nombre != "0" && i<MAX){
		
	    cout << "ingrese el celular: ";
	    cin >> agenda[i].celular;
	    i++;
	    cout << "ingrese el nombre: ";
	    cin >> agenda[i].nombre;
	    
	}
		
	return;
}

void busqueda_persona(persona agenda[MAX]){
	
	string num_buscado;
	
	cout << "ingrese el nombre de la persona que desea saber su numero:";
	cin >> num_buscado;
	
	int i;
	for(i=0; i<MAX; i++){
		
		if(agenda[i].nombre == num_buscado)
		//se peude agregar un booleano para que si no se encuentra ninguna coincidencia de el mensaje
		    cout << "el numero de la persona buscada es: " << agenda[i].celular << endl;
		    
	}
	
	return;
}

int main(){
	
    persona agenda[MAX];
    cargar_datos(agenda);
    busqueda_persona(agenda);
    
	return 0;
}