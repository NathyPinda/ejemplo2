/*Operciones matematicas */
#include<iostream>
using namespace std;


int main() {
	
	int opcion;
	float a,b;
	char total;
	
	cout << "1.Suma "  << endl;
	cout << "2. Resta" << endl;
	cout << "3.Multiplicacion " << endl;
	cout << "4.Division " << endl;
	
	cout << "Ingrese un valor\n";
	cin>>a;
	cout << "Ingrese un valor\n";
	cin>>b;
	
	do {
		cout << "Seleccione una opcion\n "; cin>>opcion;

	switch (opcion) {
	case 1:
		cout << "La suma es: " << (a+b)<< endl;
		break;
	case 2:
		cout << "La resta es: " << (a-b)<< endl;
		break;
	case 3:
		cout << "La multiplicacion es: " << (a*b)<<endl;
		break;
	case 4:
		if (b!=0){
		cout << "La division es:" << (a/b) << endl;}
		else 
		cout << "No existe division para 0 "<< endl;
		break;
	default:
		cout << "Operacion Invalida" << endl;
	}
	cout << "Desea continuar (Si=s,No=n)";
	cin>> total;
	 
	}while (total=='S'||total=='s');
	
	return 0;
}

