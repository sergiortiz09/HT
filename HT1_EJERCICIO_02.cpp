
#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
void salario();
void leer();
void mp();
struct trab{
	int horas, valor, salario=0, salarioh=0, salariot=0;
	int horasex, totalh;
	float iggs=0, total=0;
	
}e[100];
int main(){
	mp();
//	return 0;
}

void mp(){
	int opcion = 0;
	do {
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - Ingresar trabajador "<<"\n";
		cout<<" 2 - Reporte Planilla  "<<"\n";
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opcion: ";
		cin>>opcion;
		if (opcion==1){		
			system("CLS");
			salario();			
		}
		else if (opcion==2){		
			system("CLS");
			leer();			
		}
		else if (opcion==3){
			break;
		}
		
	} while(opcion!=3);
}

void salario(){
	int i,emple=0;
	float acumtotal =0, acumiggs=0;
	
	ofstream db;
	
	system("CLS");
	
	cout<<"Digite el numero de trabajadores a ingresar: ";
	cin>>emple;
	for(i=0;i<emple;i++){
		cout<<"Ingrese su salario ordinario: ";
		cin>>e[i].salario;
		cout<<"Ingrese las horas trabajadas: ";
		cin>>e[i].horas;
		cout<<"Ingrese las horas extras trabajadas: "<<endl;
		cin>>e[i].horasex;
		
		e[i].salarioh = e[i].salario / e[i].horas;
		
	
		e[i].totalh = e[i].horas + e[i].horasex;
		if(e[i].totalh > 40){
			
		e[i].salariot = ((e[i].salarioh * 1.5) * e[i].horasex) + e[i].salario;
			
		}
		else{
			e[i].salariot = e[i].salario;
		}
		
		e[i].iggs = e[i].salariot * 0.0483;
		e[i].total= e[i].salariot - e[i].iggs;
		
		
		
	
		try{
			db.open("HT1_EJERCICIO_02.txt",ios::app);
			db<<e[i].salario<<"\t"<<e[i].horas<<"\t"<<e[i].horasex<<"\t"<<e[i].salarioh<<"\t"<<e[i].salariot<<"\t"<<e[i].iggs<<"\t"<<e[i].totalh<<"\t"<<e[i].total<<endl;
			db.close();
		}
		catch(exception X){
			cout<<"Error en la manipulacion del archivo"<<endl;
			system("Pause");
		}
	}
	system("Pause");
}

void leer(){
	int i,emple=0;
	float totalpla=0;
	float acumtotal, acumiggs;
	
	ifstream db;
	
	try{
		db.open("HT1_EJERCICIO_02.txt", ios::in);
		
		cout<<"\n\n---------------------------------------------LISTA DE TRABAJADORES-----------------------------------------------------\n\n";
		cout<<"Salario|\t"<<"Horas|\t"<<"Horas extras|\t"<<"Salario Hora|\t"<<"Salario Total|\t"<<"IGGS|\t"<<"Total de Horas|\t"<<"Total Ordinario"<<endl;
		
		while(db>>e[i].salario>>e[i].horas>>e[i].horasex>>e[i].salarioh>>e[i].salariot>>e[i].iggs>>e[i].totalh>>e[i].total){
			cout<<e[i].salario<<"\t\t"<<e[i].horas<<"\t"<<e[i].horasex<<"\t\t"<<e[i].salarioh<<"\t\t"<<e[i].salariot<<"\t\t"<<e[i].iggs<<"\t\t"<<e[i].totalh<<"\t"<<e[i].total<<endl;
			acumiggs = acumiggs + e[i].iggs;
			acumtotal = acumtotal + e[i].total;
		}
		
		db.close();
	
		cout<<"\nTotal De Planilla: "<<acumtotal<<endl;
		cout<<"Total De IGGS: "<<acumiggs<<endl;
		
		system("Pause");
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
		system("Pause");
	}
}

