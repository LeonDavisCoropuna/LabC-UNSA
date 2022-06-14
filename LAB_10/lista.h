#pragma once
#include "ctime"
#include "iostream"
using namespace std;

class Nodo{
    public:
        Nodo *sig;
        int num;
};

class Lista{
    private:
        Nodo *raiz;
    public:
        Lista();
        void insertar_final(int);
        void insertar_inicio(int);
        void mostrar_lista();
        void insertar_mitad(int,int);
        void eliminar_final();
        void eliminar_primero();
        void eliminar_elemento(int);


        Nodo* getTail(Nodo* cur);
        void printList(Nodo* node);
        Nodo* partition1(Nodo* head, Nodo* end, Nodo** newHead, Nodo** newEnd);
        Nodo* partition2(Nodo* head, Nodo* end, Nodo** newHead, Nodo** newEnd);
        Nodo* quickSortRecur(Nodo* head, Nodo* end,int);
        void quickSort_descendente();
        void quickSort_ascendente();
};
