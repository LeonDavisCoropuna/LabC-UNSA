#include<iostream>
using namespace std;

int main(){

    string tiempo, final = "AM";
    int minutos,horas=0,dias=0;
    cout<<"Ingrese la hora en formato HH:MM: ";getline(cin,tiempo);
    cout<<"Tiempo en minutos: ";cin>>minutos;
    int horat,minutot;
    horat =stoi(tiempo.substr(0,2));  
    minutot=stoi(tiempo.substr(3,2));
    horat = horat*60;
    minutos = minutos + horat + minutot;

    while(true){
        if(minutos >= 60){
            horas += 1;
            minutos -= 60;
        }
        if(horas > 24){
            horas -= 24;
        }
        if(minutos < 60){
            break;
        }
    }
    if(horas >= 12){
        horas = horas-12;  
        final = "PM";
    }
    if(horas == 00){
        horas = 12;
    }
    cout<<"Hora de finalización: "<<horas<<":"<<minutos<<" "<<final;
    
    return 0;
}
