#include <iostream>

int main()
{
	for (char c{ 'a' }; c <= 'e'; ++c) // loop exterior con letras
	{
		std::cout << c; // imprime nuestra primera letra

		for (int i{ 0 }; i < 3; ++i) // loop interior con todos números
			std::cout << i;

		std::cout << '\n';
	}

	return 0;
}











/*#include <iostream>

int main()
{
	for (int x{ 0 }, y{ 9 }; x < 10; ++x, --y)
		std::cout << x << ' ' << y << '\n';

	return 0;
}*/


















/*#include <iostream>

int main()
{
	for (int contador{ 9 }; contador >= 0; contador -= 2)
		std::cout << contador << ' ';

	return 0;
}*/
























/*#include <iostream>

// devuelve el valor base del ^ exponente -- cuidado con los desbordamientos
int pow(int base, int exponente)
{
	int total{ 1 };

	for (int contador{ 0 }; contador < exponente; ++contador)
		total *= base;	
	return total;
}

int main()
{
	int resultado{};
	resultado =pow(3, 4);
	std::cout << resultado;
	
}*/

























/*int main()
{
	int instrucción_inicial;
	int inicial;
	int condición;
	int expres_fin;
	int declaración;


	{  //observa el bloque aquí
		instrucción_inicial; // usada para definir variables utilizadas en el loop
		while (condición)
		{
			declaración;
			expres_fin; //usada para modificar la variable del ciclo 
						//antes de reevaluar la condición
		}

	} //las variables definidas dentro del loop, salen de alcance aquí



	for (instrucción_inicial; condición; expres_fin)
		declaración;




}*/


/*#include <iostream>


int main()
{
	for (int contador{ 1 }; contador <= 10; ++contador)
		std::cout << contador << ' ';

	return 0;
}*/


/*#include <iostream>

int main()
{
	{ // este bloque asegura el alcance de bloque para contador
		int contador{ 1 }; // nuestra declaración-inicio
		while (contador <= 10) // nuestra condición
		{
			std::cout << contador << ' '; // nuestra declaración
			++contador; // nuestra expresión-final
		}
	}
}*/





