#include "iostream"
# include"vector"

using namespace std;

struct Pieza{
    string nombre;
    string color;
};

class Producto1 {
public:
	vector <Pieza> componentes;
    
	void ListaComp() const {
		cout << "\n  Pedido:\n";
        cout << "\tPieza:\t\tColor: \n";
		for (size_t i = 0; i < componentes.size(); i++) {
			cout<<"\t"<<componentes[i].nombre;
            cout<<"\t\t"<<componentes[i].color<<endl;
		}
		cout << "\n\n";
	}
};

class IBuilder {
public:
	virtual ~IBuilder() {}
	virtual void ProducirPuerta() const = 0;
	virtual void ProducirLlantas() const = 0;
	virtual void ProducirTimon() const = 0;
    virtual void ProducirAsientos() const = 0;
	virtual void ProducirMotor() const = 0;
	virtual void ProducirEspejos() const = 0;
    virtual void ProducirVidrios() const = 0;
};

class BuilderEspecifico : public IBuilder {
private:
	Producto1* product;
public:
	BuilderEspecifico() {
		this->Reset();
	}
	~BuilderEspecifico() {
		delete product;
	}
	void Reset() {
		this->product = new Producto1();
	}
	void ProducirPuerta()const override{
        string color;
        cout<<"Color de la puerta: ";getline(cin,color);
        Pieza *nuevo = new Pieza();
        nuevo->nombre = "Puerta";
        nuevo->color = color;
		this->product->componentes.push_back(*nuevo);
	}
	void ProducirLlantas()const override {
        string color;
        cout<<"Color de las llantas: ";getline(cin,color);
        Pieza *nuevo = new Pieza();
        nuevo->nombre = "Llantas";
        nuevo->color = color;
		this->product->componentes.push_back(*nuevo);
	}
	void ProducirTimon()const override {
		string color;
        cout<<"Color del timon: ";getline(cin,color);
        Pieza *nuevo = new Pieza();
        nuevo->nombre = "Timon";
        nuevo->color = color;
		this->product->componentes.push_back(*nuevo);
	}
    void ProducirAsientos()const override {
		string color;
        cout<<"Color de los asientos: ";getline(cin,color);
        Pieza *nuevo = new Pieza();
        nuevo->nombre = "Asiento";
        nuevo->color = color;
		this->product->componentes.push_back(*nuevo);
	}
    void ProducirMotor()const override {
		string color;
        cout<<"Color del motor: ";getline(cin,color);
        Pieza *nuevo = new Pieza();
        nuevo->nombre = "Motor";
        nuevo->color = color;
		this->product->componentes.push_back(*nuevo);
	}
    void ProducirEspejos()const override {
		string color;
        cout<<"Color de los espejos: ";getline(cin,color);
        Pieza *nuevo = new Pieza();
        nuevo->nombre = "Espejos";
        nuevo->color = color;
		this->product->componentes.push_back(*nuevo);
	}
    void ProducirVidrios()const override {
		string color;
        cout<<"Color de los vidrios: ";getline(cin,color);
        Pieza *nuevo = new Pieza();
        nuevo->nombre = "Vidrios";
        nuevo->color = color;
		this->product->componentes.push_back(*nuevo);
	}
	
	Producto1* GetProducto() {
		Producto1* resultado = this->product;
		this->Reset();
		return resultado;
	}
};

class Director {
private:
	IBuilder* builder;
public:
	void set_builder(IBuilder* builder) {
		this->builder = builder;
	}
	void BuildProductoBasico(){
		this->builder->ProducirLlantas();
        this->builder->ProducirMotor();
        this->builder->ProducirTimon();
        this->builder->ProducirAsientos();
	}
	void BuildProductoCompleto() {
		this->builder->ProducirLlantas();
        this->builder->ProducirMotor();
        this->builder->ProducirTimon();
        this->builder->ProducirAsientos();
        this->builder->ProducirEspejos();
        this->builder->ProducirPuerta();
        this->builder->ProducirVidrios();
	}
};

void ClienteCode(Director& director)
{
	BuilderEspecifico* builder = new BuilderEspecifico();
	director.set_builder(builder);
    Producto1* p = builder->GetProducto();

    cout<<"¡IMPORTANTE! Usted escoge los colores de todas las piezas\n";
    cout<<"1. Automovil Basico\n\tIncluye: Llantas, Motor, Timon y Asientos\n";
    cout<<"2. Automovil Completo\n\tIncluye: Llantas, Motor, Timon, Asientos, Espejos, Puertas y Vidrios\n";
    cout<<"3. Automovil Personalizado\n\tUsted escoge las piezas\n";
    int n;
    cout<<"Escoja su opcion: ";cin>>n;
    cin.ignore();
    if(n == 1){
        cout<<endl;
        director.BuildProductoBasico();
        p = builder->GetProducto();
        p->ListaComp();
        delete p;
    }
    else if(n == 2){
        cout<<endl;
        director.BuildProductoCompleto();
        p = builder->GetProducto();
        p->ListaComp();
        delete p;
    }
    else{
        bool band = true;
        int x;

        while(band){
            cout<<"\n\t1. Productir Llantas\n"; 
            cout<<"\t2. Producir Motor\n";
            cout<<"\t3. Producir Timon\n";
            cout<<"\t4. Producir Asientos\n";
            cout<<"\t5. Producir Espejos\n";
            cout<<"\t6. Producir Puertas\n";
            cout<<"\t7. Producir Vidrios\n";
            cout<<"\t8. Terminar\n";
            cout<<"\tOpcion: ";cin>>x;
            cin.ignore();
            if(x == 1)builder->ProducirLlantas();
            else if(x == 2) builder->ProducirMotor();
            else if(x == 3) builder->ProducirTimon();
            else if(x == 4) builder->ProducirAsientos();
            else if(x == 5) builder->ProducirEspejos();
            else if(x == 6) builder->ProducirPuerta();
            else if(x == 7) builder->ProducirVidrios();
            else band = false;
        }        
        p = builder->GetProducto();
        p->ListaComp();
        delete p;

    }
	delete builder;
}

int main() {
	Director* director = new Director();
	ClienteCode(*director);
	delete director;
	return 0;
}
