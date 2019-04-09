#include<iostream>
#include<cstring>

using namespace std;

int num1;
int num2;
int numdivisores=0;
string primos( int num1, int num2);


int main()
{
	cout<< "Ingrese el numero 1";
	cin>> num1;
	cout<< "Ingrese el numero 2";	
	cin>> num2;

	cout << "Los numeros primos entre "<< num1 << " y " << num2 << " son:" << primos(num1, num2) << endl;
}


string primos(int num1, int num2){
	//cout << "Los siguientes numeros del intervalo son primos" << endl;
	//int a;
	string primos;
	for( int i=num1; i<num2; i++)
	{
		numdivisores = 0;
		for(int j=1; j<=i; j++)
		{
			if(i%j==0)
			{
				numdivisores+= 1;
			}
		}

		if(numdivisores<=2)
		{
			 //cout << i << endl;	
			 primos = primos + " " + std::to_string(i);
		}
		
	}	
	return primos;
}


