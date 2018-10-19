#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	int resp = 0;
	do{
		cout<<"-------------------------Menu--------------"<<endl
		<<"Triforce"<<endl
		<<"Logaritmos"<<endl
		<<"F(x)"<<endl;
		cin>>resp;
		switch(resp){
		case 1:{

		}
		break;

		case 2:{

		}
		break;

		case 3:{
		
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
