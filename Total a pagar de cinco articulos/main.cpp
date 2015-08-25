#include <iostream>

int main()
{
	const float PRECIO1=5;//Mazanas
	const float PRECIO2=10;//Sandwiches
	const float PRECIO3=6.5;//Tacos
	const float PRECIO4=10;//Refresco
	const float PRECIO5=7;//Agua

	float articulo1 ,articulo2, articulo3, articulo4, articulo5, total;



	std::cout<<"Dame la cantidad de Manzanas"<<std::endl;
	std::cin>>articulo1;

	std::cout<<"Dame la cantidad de Sandwiches"<<std::endl;
	std::cin>>articulo2;

	std::cout<<"Dame la cantidad de Tacos"<<std::endl;
	std::cin>>articulo3;

	std::cout<<"Dame la cantidad de Refresco"<<std::endl;
	std::cin>>articulo4;

	std::cout<<"Dame la cantidad de Agua"<<std::endl;
	std::cin>>articulo5;

	total=(articulo1 * PRECIO1) + (articulo2 * PRECIO2) + (articulo3 * PRECIO3) + (articulo4 * PRECIO4) + (articulo5 * PRECIO5);

	std::cout<<"Total a pagar "<<total;
    return 0;
}
