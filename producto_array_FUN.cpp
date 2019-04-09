#include<iostream>
#include<cstring>
using namespace std;

//Haga un programa que tenga dos funciones. Cada una debe recibir dos arreglos unidimensionales de 5 elementos cada uno.
// La primera funcion debe retornar el producto de los dos arreglos elemento a elemento. La segunda debe retornar el producto punto de los dos arreglos. 
//En la funcion main se debe imprimir lo que retornen las dos funciones para [1,2,3,4,5] y [10,20,30,40,50]. llamelo producto_array_FUN.cpp


int arr1[5]={1,2,3,4,5};
int arr2[5]={10,20,30,40,50};

//int arrproducto[5]={0,0,0,0,0};

string producto(int arr1[], int arr2[]);
int  ppunto(int arr1[], int arr2[]);

int main()
{

	cout <<"El producto entre arreglos es:" << producto(arr1, arr2) << endl;
	cout <<"El producto punto de los dos arreglos es:" << ppunto(arr1, arr2) << endl;
	
	return 0;
}


string producto(int arr1[], int arr2[]){

	string multiplicacion;
	for(int i=0; i<5;i++)
	{
		multiplicacion= multiplicacion + " "+ std::to_string(arr1[i]*arr2[i]);
		//cout << arr1[i]*arr2[i] << endl;
		//arrproducto[i]=multiplicacion;
		//cout << mul << endl;
		//cout << multiplicacion << endl;
	}
	return multiplicacion;
}

int ppunto(int arr1[], int arr2[]){
	int resultado=0;

	for(int i=0; i<5;i++ )
	{
		
		resultado+= arr1[i]*arr2[i];
		//cout << resultado << endl;

	}
	return resultado;
}
