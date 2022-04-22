#include<iostream>
#include<ctime>
using namespace std;

int main(){

    time_t tSac = time(NULL);  // instante actual
    int min, hora, dia,mes,anio,minutos;
    cout<<"Cantidad de minutos: ";cin>>minutos;
    struct tm* pt1 = localtime(&tSac);

    hora = pt1->tm_hour;
    min = pt1->tm_min;
    dia = pt1->tm_mday; 
    mes = pt1->tm_mon+1;
    anio = pt1->tm_year+1900;

    cout<<"Hora actual: "<<hora<<":"<<min<<endl;
    cout<<"Fecha actual: "<<dia<<"-"<<mes<<"-"<<anio<<endl;

     while(true){
        if(minutos >= 60){
            hora -= 1;
            minutos -= 60;
        }
        if(hora <= 0){
            hora += 24;
            dia -= 1;
        }
        if(dia <= 0){
            mes -= 1;
            dia += 30;
        }
        if(mes <= 0){
            mes = mes+12;
            anio -= 1;
        }
        if(minutos < 60){
            break;
        }
    }

    if(min - minutos < 0){
        hora -= 1;
        minutos -= min;
        min = 60 - minutos;
    }
    else{
        min -= minutos;
    }

    cout<<"Hora nueva: "<<hora<<":"<<min<<endl;
    cout<<"Fecha nueva: "<<dia<<"-"<<mes<<"-"<<anio<<endl;

    return 0;
}
