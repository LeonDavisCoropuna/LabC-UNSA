#include <cstdio>
#include <iostream>
using namespace std;
  
void separador(){
    cout<<"\n-------------------------------------\n";
}
//Orden ascendente
template<class T>
bool compare1(T x, T y) {
	return x <= y;
}
//Orden descendente
template<class T>	
bool compare2(T x, T y) {
	return x > y;
}
//clase nodo con template
template <class T>
class Node {
    public:
        T data;
        Node* next;
};
//clase lista con template
template <class T>
class Lista {
    public:
        Node <T> *raiz;
        Lista();

        void mostrar_lista();
};
//constructor de lista
template <class T>
Lista <T>::Lista(){
    raiz = NULL;
}

template <class T>
void Lista <T>::mostrar_lista(){
    
    Node <T>*aux = raiz;
    while(aux != NULL){
        cout<<aux->data<<"  ";
        aux = aux->next;
    }
}
//INserta elementos al inicio
template <class T>
void push(Node <T>** head_ref, T new_data){
    Node <T>* new_node = new Node <T>;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
//quicksort

//obtetiene el ultimo elemento
template <class T>
Node <T>* getTail(Node <T>* cur){
    while (cur != NULL && cur->next != NULL)
        cur = cur->next;
    return cur;
}
//retorna el pivote
template <class T>
Node <T>* partition(Node <T>* head, Node <T>* end,Node <T>** newHead,Node <T>** newEnd , bool(*compare)(T,T)){
    Node <T>* pivot = end;
    Node <T>*prev = NULL, *cur = head, *tail = pivot;

    while (cur != pivot) {
        if (compare(cur->data,pivot->data)) {
            if ((*newHead) == NULL)
                (*newHead) = cur;
  
            prev = cur;
            cur = cur->next;
        }
        else 
        {
            
            if (prev)
                prev->next = cur->next;
            Node <T>* tmp = cur->next;
            cur->next = NULL;
            tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }
  

    if ((*newHead) == NULL)
        (*newHead) = pivot;
  
    (*newEnd) = tail;
  
    return pivot;
}
//aplica recursividad para ordenar la lista
template <class T>
Node <T>* quickSortRecur(Node <T>* head,Node <T>* end, bool(*compare)(T,T)){
    if (!head || head == end)
        return head;
  
    Node <T>*newHead = NULL, *newEnd = NULL;

    Node <T>* pivot
        = partition(head, end, &newHead, &newEnd,compare);

    if (newHead != pivot) {
        Node <T>* tmp = newHead;
        while (tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = NULL;
  
        newHead = quickSortRecur(newHead, tmp,compare);
        tmp = getTail(newHead);
        tmp->next = pivot;
    }
  
    pivot->next = quickSortRecur(pivot->next, newEnd,compare);
  
    return newHead;
}
//funcion principal de quicksort que llama a las otras
template <class T>
void quickSort(Node <T>** headRef,bool(*compare)(T,T)){
    (*headRef) = quickSortRecur(*headRef, getTail(*headRef),compare);
    return;
}
template <class T>
void printList(Node <T>* node)
{
    while (node != NULL) {
        cout<<node->data<<"  ";
        node = node->next;
    }
    cout<<endl;
}
//mergesort

template <class T> 
void MergeSort(Node <T>** headRef,bool (*compare)(T,T))
{
    Node <T>* head = *headRef;
    Node <T>* a;
    Node <T>* b;
 
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }
 
    FrontBackSplit(head, &a, &b,compare);
 
    /* Recursively sort the sublists */
    MergeSort(&a,compare);
    MergeSort(&b,compare);
 
    *headRef = SortedMerge(a, b,compare);
}
template <class T>
Node <T>* SortedMerge(Node <T>* a, Node <T>* b, bool(*compare)(T,T)){ 
    Node <T>* result = NULL;
 
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);
 
    if (compare(a->data,b->data)) {
        result = a;
        result->next = SortedMerge(a->next, b,compare);
    }
    else {
        result = b;
        result->next = SortedMerge(a, b->next,compare);
    }
    return (result);
}
template <class T>
void FrontBackSplit(Node <T>* source,Node <T>** frontRef, Node <T>** backRef,bool (*compare)(T,T))
{
    Node <T>* fast;
    Node <T>* slow;
    slow = source;
    fast = source->next;
 
        while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
 
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}
//insertionsor  

template <class T>
void SortedPush(Node <T> **head,Node <T>*newNode,bool (*compare)(T,T)){
    Node <T>*curr;

    if (*head == NULL || compare((*head)->data,newNode->data))
        newNode->next = *head, *head = newNode;
    else
    {
        curr = *head;
        while (curr->next != NULL && curr->next->data <= newNode->data)
            curr = curr->next;
        newNode->next = curr->next, curr->next = newNode;
    }
}
template <class T>
void InsertionSort(Node <T> **head,bool (*compare)(T,T)){
    
    Node <T> *sortedList = NULL;

    Node <T> *curr = *head;
    while (curr != NULL)
    {
        Node <T> *next = curr->next;
        SortedPush(&sortedList, curr,compare);
        curr = next;
    }
    *head = sortedList;
}
//agiliza las condicionales del menu en el main
template <class T>
void ordenar(Node <T> **head,int aux2,int aux3){
    cout<<"\nAntes de ordenar: \n";
    printList(*head);
    if(aux2 == 1){
        if(aux3 == 1){
            quickSort(head,compare1);
        }
        else{
            quickSort(head,compare2);
        }
    }
    if(aux2 == 2){
        if(aux3 == 1){
            MergeSort(head,compare1);
        }
        else{
            MergeSort(head,compare2);
        }
    }
    if(aux2 == 3){
        if(aux3 == 1){
            InsertionSort(head,compare1);
        }
        else{
            InsertionSort(head,compare2);
        }
    }
    cout<<"\nDespues de ordenar: \n";
    printList(*head);
}

int main(){
    //creacion de 4 listas con distintos tipos de datos
    Lista <int> *lista = new Lista <int>;   
    Lista <char> *lista2 = new Lista <char>;
    Lista <string> *lista3 = new Lista <string>;
    Lista <float> *lista4 = new Lista <float>;

    bool band = true;
    while(band){
        int opc;
        separador();
        cout<<"1. Insertar elemento\n2. Mostrar\n3. Ordenar\n4. Salir\nOpc: ";cin>>opc;
        cin.ignore();
        if(opc == 1){
            int num;
            cout<<"\tEn donde desea ingresar elemento?\n\t1. Lista de enteros\n\t2. Lista de char\n\t3. Lista de string\n\t4. Lista de flotantes\n\tOpc: ";cin>>num;
            cin.ignore();
            if(num == 1){
                int aux;
                cout<<"\n\t\tIngrese un entero: ";cin>>aux;
                push(&lista->raiz,aux);
            }
            if(num == 2){
                char aux;
                cout<<"\n\t\tIngrese un char: ";cin>>aux;
                push(&lista2->raiz,aux);
            }
            if(num == 3){
                string aux;
                cout<<"\n\t\tIngrese un string: ";getline(cin,aux);
                push(&lista3->raiz,aux);
            }
            if(num == 4){
                float aux;
                cout<<"\n\t\tIngrese un flotante: ";cin>>aux;
                push(&lista4->raiz,aux);
            }
            cin.ignore();
        }
        else if(opc == 2){
            int aux;
            cout<<"\n\tQue lista desea ver?\n\t1. Enteros\n\t2. Char\n\t3. String\n\t4. Flotante\n\tOpc: ";cin>>aux;
            cin.ignore();
            if(aux == 1) printList(lista->raiz);
            else if(aux == 2) printList(lista2->raiz);
            else if(aux == 3) printList(lista3->raiz);
            else if(aux == 4) printList(lista4->raiz);
        }
        else if(opc == 3){
            int aux,aux2,aux3;
            cout<<"\n\tQue lista desea ordenar?\n\t1. Enteros\n\t2. Char\n\t3. String\n\t4. Flotante\n\tOpc: ";cin>>aux;
            cout<<"\n\tSelecciones el algoritmo\n\t\t1. Quicksort\n\t\t2. Merge\n\t\t3. Insertion\n\t\tOpc: ";cin>>aux2;
            cout<<"\n\t\t1. Ascendente\n\t\t2. Descendente\n\t\tOpc: ";cin>>aux3;
            if(aux == 1){
                ordenar(&lista->raiz,aux2,aux3);
            }
            if(aux == 2){
                ordenar(&lista2->raiz,aux2,aux3);
            }
            if(aux == 3){
                ordenar(&lista3->raiz,aux2,aux3);
            }
            if(aux == 4){
                ordenar(&lista4->raiz,aux2,aux3);
            }
            cin.ignore();
        }
        else{
            band = false;
        }
    }
    return 0;
}
