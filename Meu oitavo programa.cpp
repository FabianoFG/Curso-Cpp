#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n1,n2,res;
	char opc;
	inicio:
	system("cls");
	cout << "\nDigite a nota 1\n";
	cin >> n1;
	cout << "\nDigite a nota 2\n";
	cin >> n2;
	res=n1+n2;
	if(res>=60){
		cout << "\nAluno aprovado\n";
	}else if(res>=40){
		cout << "\nAluno em recuperacao\n";
	}else{
		cout << "\nAluno reprovado\n";
	}
	cout << "\nDigitar outras notas? [s/n]: ";
	cin >> opc;
	if(opc=='s' or opc=='S'){
		goto inicio;
	}	
	return 0;
}
