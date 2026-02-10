#include <iostream>
using namespace std;
void add(int a[],int dim){
	
}
void vis(){
}
void ricerca(){
}
void cancellazione(){
}

/* 
funzione aggiunta,visualizzazione,ricerca,cancellazione */

int main(int argc, char** argv) {
int array[100];
int n=0;
int x=0;
int z=0;
int	opzione=1 ;
	while (opzione>0 ){//&& opzione<4 && opzione>0){
	cout<<"inserisci un numero tra 1 e 4"<<endl;
	cout<<" 1--> aggiunta"<<endl;
	cout<<" 2--> visualizzazione"<<endl;
	cout<<" 3--> ricerca"<<endl;
	cout<<" 4--> cancellazione"<<endl;
	cin>> opzione;
    if(opzione>0){
	break;
	}
	}
	switch(opzione){
	1: cout<<"quanti elementi vuoi aggiungere ?"<<endl;
	    cin>>z;
	    while(x<z){
	    	add()
		}
	    break;
	2:
	3:
	4:	
	}
	
	return 0;
}