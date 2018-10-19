#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

void imprimirFigura(int);
void log(int);
void func(double,double,double);
int main(){
	int resp = 0;
	do{
		cout<<"-------------------------Menu-----------------------"<<endl
		<<"1. Triforce"<<endl
		<<"2. Logaritmos"<<endl
		<<"3. F(x)"<<endl
		<<"4. Salir"<<endl;
		cin>>resp;
		switch(resp){
		case 1:{
		  int tam = 0;
		  cout<<"Ingrese tamano n: "<<endl;
		  cin>>tam;

		  //imprimir la figura
		  imprimirFigura(tam);
		}
		break;

		case 2:{
		  int num = 0;
		  cout<<"Ingrese un numero: "<<endl;
		  cin>>num;
		  log(num);
		}
		break;

		case 3:{
			double m = -1;
			double p = -1;
			double y = -1;
			do{
			cout<<"Ingrese m: "<<endl;
			cin>>m;
			}while(m<0);

			do{
			cout<<"Ingrese p: "<<endl;
			cin>>p;
			}while(p<0);

			do{
			cout<<"Ingrese y: "<<endl;
			cin>>y;			
			}while(y<0);

			func(m,p,y);
		
		}
		break;

		default:{
			cout<<"Saliendo del Programa..."<<endl;
			resp = 4;
		}
		break;
		}
	}while(resp!=4);
	return 0;

}

void imprimirFigura(int n){
	int filas = 0;
	filas = 2 * (n+1);
	int columnas = 0;
	columnas = (2 * filas)-1;
	int limite = 0;
	limite = filas;
	int cont = 0; 
	int limiteMayor = 0;
	limiteMayor = filas;
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){	
		  
		  if(j >= limite && j <= limiteMayor){
			cout<<"*";			  
		  }else{
			cout<<"-";
		  }
		}			  				
		cout<<endl;
		limiteMayor = limiteMayor + 1;
		limite= limite-1;		
	}
}

void log(int num){
	int cont1 = 0;
	int cont2 = 0;
	do{

	num = num/10;
	
	}while(num>10);


}

void func(double m,double x,double y){
	double resp = 0;
	double centinela = 0;
	centinela = x;
	do{
		resp = (sqrt (x))*m;
		cout<<"Aproximacion de "<<x<<" es: "<<resp<<endl;
		//resp = sqrt (x);
		//if(resp <= y){
		  x = x+centinela;
		//}
			
	}while(resp < y);
	cout<<"Aproximacion es: "<<resp<<endl;
}
