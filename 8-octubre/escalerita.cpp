#include <iostream>

using namespace std;

int main(){
    const int ANCHO=80;
    int gatos=1, espacios=0, subCont;
    bool repetir=true;
    while(repetir){
        /*if(gatos!=1){
            espacios=espacios+gatos-1;
        } else{

        }*/
        if((espacios+gatos)<ANCHO){
            for (subCont=0; subCont<espacios; subCont++){
                cout << " ";
            }

            for (subCont=0; subCont<gatos; subCont++){
                cout << "*";
            }
            cout << endl;
            espacios=espacios+gatos;
            gatos++;
        } else{
            repetir=false;
        }
    }
    return 0;
}
