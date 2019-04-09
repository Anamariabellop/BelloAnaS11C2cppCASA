#include<iostream>

using namespace std;
int factorial(int numfactorial, int numero);
int numfactorial = 1;
int numero;	

int main()
{
	cout << "Ingrese el valor n";
	cin>> numero;
	cout <<"Factorial de n es: " << factorial(numfactorial,numero) << endl;

	return 0;
}

int factorial(int numfactorial,int numero){

	for( int i=1; i<=numero ;i++)
	{
		numfactorial= numfactorial*i;
	}
	return numfactorial;
}
	
	
