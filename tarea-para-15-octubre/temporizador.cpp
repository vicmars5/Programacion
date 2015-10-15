#include <iostream>
#include <ctime>
#include <cstdlib>



using namespace std;

float getElapsedTimeInMs(){
	//Return clock() as ms
	//1 Second = 1000 milliseconds
	return clock()/(CLOCKS_PER_SEC/1000);
}

void wait(int ms)
{
	float goal;
	goal = ms + getElapsedTimeInMs();
	//Do nothing until goal is greater than the
	//current elapsed time
	while(goal >= getElapsedTimeInMs()){};
}

int main(){
	string margen;
	int horas, minutos, segundos;
	char basura;
	bool repetir=true;

	for (int i=0 ; i<36 ; i++){
		margen+=" ";
	}
	cout << margen;
	cin >> horas >> basura >> minutos >> basura >> segundos;

	if( horas >= 0 && minutos >= 0 && segundos >=0 && minutos < 60 && segundos < 60 && horas < 100){
		while (repetir){
			#ifdef WIN32
				 system("cls");
			#else
				 system("clear");
			#endif


			#ifdef WIN32
				 if(horas==0 && minutos==0 && segundos<=5 && segundos>3){
				 		system("color 6");
				 } else {
				 	if(horas==0 && minutos==0 && segundos<=3 && segundos>1){
				 		system("color E");
				 	} else {
				 		if(horas==0 && minutos==0 && segundos<=1){
					 		system("color 4");
					 	}
				 	}
				 }
			#endif
			cout << endl << margen;
			if(horas < 10 ){
					cout << "0";
			}
			cout << horas << ":";
			if(minutos < 10 ){
					cout << "0";
			}
			cout << minutos << ":";
			if(segundos < 10 ){
					cout << "0";
			}
			cout << segundos;

			if ( segundos > 0){
				segundos-=1;
			} else {
				if ( minutos > 0 ) {
					minutos-=1;
					segundos = 59;
				} else {
					if ( horas > 0){
						horas-=1;
						minutos = 59;
						segundos = 59;
					} else {
						horas  = 0;
						minutos = 0;
						segundos = 0;
						repetir = false;
					}
				}
			}
			wait(1000);
		}
		#ifdef WIN32
			cout << endl << margen << "Allahu akbar!!!!" << endl;
			wait(1000);
			cout << margen << "<--KABUM-->";
		#endif
	} else {
		cout << "ERROR DE FORMATO, VUELVA A ESCRIBIR EL TIEMPO DEL TEMPORIZADOR";
	}

	return 0;
}
