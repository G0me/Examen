#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	
	float nota1;
	float nota2;
	float nota3;
	float nota4;
};

struct Alumno{
	char nombre  [10];
	char apellido[10];
	char curso   [10];
	char codigo  [10];
	struct Promedio prom;
	
}alumno1;

int main(){
	float promedio_alumno;
	
	cout<<"Welcome ingrese los datos del Alumno porfavor" <<endl;
	cout<<"Nombre:  "; cin.getline(alumno1.nombre,10,'\n');
	cout<<"Apellido:"; cin.getline(alumno1.apellido,10,'\n');
	cout<<"Curso:   "; cin>>alumno1.curso;
	cout<<"Codigo   ";cin>>alumno1.codigo;
	
    cout<<" --------------------------------------------------------------"<<endl;
    cout<<"|              Ingrese las notas                              |"<<endl;
    cout<<" ------------------------------------------------------------- "<<endl;
	cout<<"Nota1:    "; cin>>alumno1.prom.nota1;
	cout<<"Nota2:    "; cin>>alumno1.prom.nota2;
	cout<<"Nota3:    "; cin>>alumno1.prom.nota3;
	cout<<"Nota4:    "; cin>>alumno1.prom.nota4;
	promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3+alumno1.prom.nota4)/4;
	
	

	cout<<" ------------------------------------------------------------ "<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<"|            Mostrando ......          Resuldos...           |"<<endl;
    cout<<"|                                                            |"<<endl;
    cout<<" ------------------------------------------------------------- "<<endl;
	cout<<"Nombre:   "<<alumno1.nombre<<endl;
	cout<<"Apellido: "<<alumno1.apellido <<endl;
	cout<<"Curso:    "<<alumno1.curso <<endl;
	cout<<"Promedio: "<<promedio_alumno<<endl;

    if (promedio_alumno > 59.99999999)
		{cout<<"El alumno ha aprobado la materia";
		}
	else
		cout<<"El alumno ha desaprobado la materia";
	
	
	getch();
	return 0;
}

