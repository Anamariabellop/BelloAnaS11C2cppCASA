#include<iostream>

using namespace std;
int factorial(int numero);
int numero;	

int main()
{
	cout << "Ingrese el valor n";
	cin>> numero;
	cout <<"Factorial de n es: " << factorial(numero) << endl;

	return 0;
}

int factorial(int numero){

	if(numero>0)

	{
		numero= numero*factorial(numero-1);
		return numero;
	}
	else
		return 1;
	
}
	