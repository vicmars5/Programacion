#include<iostream>

using namespace std;

int main(){
    float dia, mes;

    cout<<"Ingresa el dia" <<endl;
    cin>>dia;

    cout<<"Ingresa el mes" <<endl;
    cin>>mes;

    if(dia>0 && mes>0){
        if(dia<=28 && mes==2){
            cout<<"Fecha Valida" <<endl;
        }
        else{
            if((mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) && dia<=31){
                cout<<"Fecha Valida" <<endl;
            }
            else{
                if((mes==4 || mes==6 || mes==9 || mes==11) && dia<=30){
                    cout<<"Fecha Valida" <<endl;
                }
                else{
                    cout<<"Fecha Invalida" <<endl;
                }
            }
        }
    } else {
        cout << "Fecha invalida";
    }
    return 0;
}


