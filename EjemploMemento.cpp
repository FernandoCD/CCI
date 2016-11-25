#include <iostream>
#include <vector>
#include <stdlib.h>
class Base_de_Datos;
class Alumno;

class Memento{           ///Un "Recuerdo"
private:
    std::vector<Alumno*> backup;
public:
    void set_backup(std::vector <Alumno*> &x){backup = x;}
    std::vector<Alumno*> get_backup(){return backup;}
};

class Alumno{
private:
    std::string nombre;
    int edad;
public:
    Alumno(std::string _nombre,int _edad):nombre(_nombre),edad(_edad){;}

    std::string get_nombre(){return nombre;}
    int get_edad(){return edad;}

    void set_nombre(std::string _nombre){nombre = _nombre;}
    void set_edad(int _edad){edad = _edad;}
    void imprimir_datos(){
        std::cout << "Alumno: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
    }

};

class Base_de_Datos{
private:
    std::vector <Alumno*> Vec_Alumnos;
    Memento backup;
public:
    Base_de_Datos(){};
    void agregar_Alumno(Alumno &A){
        Vec_Alumnos.push_back(&A);
    }
    void eliminar_todo(){
        Vec_Alumnos.clear();
    }
    void imprimir(){
        std::cout << "----------------------------------------------" << std::endl;
        std::vector<Alumno*>::iterator it;
        for(it = Vec_Alumnos.begin();it < Vec_Alumnos.end();++it){
            (*it)->imprimir_datos();
            std::cout << std::endl;
        }
        std::cout << "----------------------------------------------" << std::endl;
        system("PAUSE");
    }

    void generar_backup(){
        backup.set_backup(Vec_Alumnos);
    }
    void usar_backup(){
        Vec_Alumnos = backup.get_backup();
    }
};

int main()
{
    Base_de_Datos UCSP;
    Alumno Oscar("Oscar",17);
    Alumno Gonzalo("Gonzalo",20);
    Alumno Luis("Luis",18);
    UCSP.agregar_Alumno(Oscar);
    UCSP.agregar_Alumno(Gonzalo);
    UCSP.agregar_Alumno(Luis);
    UCSP.generar_backup();
    UCSP.imprimir();
    Alumno Kevin("Kevin",23);
    Alumno Brandon("Brandon",21);
    UCSP.agregar_Alumno(Kevin);
    UCSP.agregar_Alumno(Brandon);
    UCSP.imprimir();
    UCSP.usar_backup();
    UCSP.imprimir();
}
