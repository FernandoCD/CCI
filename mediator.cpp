#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Mediator;

class Colega{
    string name;
public:
    friend class Mediator;
    Colega(string _name):name(_name){}
    void send_message(Mediator& mediador,string message,Colega self);
    void recibir_message(Colega self,string message){
        cout << self.get_name() << " recibio " << message << endl;
    }
    string get_name(){return name;}
};

class Mediator{
    vector<Colega> lista_colegas;
public:
    friend class Colega;
    void distribuir_mensajes(Colega sender, string mensaje){
        for(unsigned int i=0;i<lista_colegas.size();i++){
            if(lista_colegas[i].get_name() != sender.get_name())
                lista_colegas[i].recibir_message(lista_colegas[i],mensaje);
        }
    }
    void registrar(Colega nuevo){
        lista_colegas.push_back(nuevo);
    }
    vector<Colega> get_lista(){return lista_colegas;}
};

void Colega::send_message(Mediator& mediador,string message,Colega self){
        mediador.distribuir_mensajes(self,message);
    }

int main()
{
    Colega col1("colega1");
    Colega col2("colega2");
    Colega col3("colega3");
    Colega col4("colega4");
    Mediator mediator1;
    mediator1.registrar(col1);
    mediator1.registrar(col2);
    mediator1.registrar(col3);
    mediator1.registrar(col4);
    col1.send_message(mediator1,"Mensaje_x de colega1",col1);
    cout << "--------------------------------------------------------------"<<endl;
    Mediator mediator2;
    mediator2.registrar(col1);
    mediator2.registrar(col4);
    col1.send_message(mediator2,"Mensaje_y de colega1",col1);
    return 0;
}
