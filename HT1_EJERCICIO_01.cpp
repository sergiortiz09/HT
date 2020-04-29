#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
int main(){
	
	int a1[12], acum1=0;
	int a2[12], acum2=0;
	int a3[12], acum3=0;
	int a4[12], acum4=0;
	int a5[12], acum5=0;
	int a6[12], acum6=0;
	int a7[12], acum7=0;
	int a8[12], acum8=0;
	int a9[12], acum9=0;
	int a10[12], acum10=0;
	
	int i, media1,media2,media3,media4,media5,media6,media7,media8,media9,media10;
	
	cout<<"\nAlmacen 1\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a1[i];
		acum1+=a1[i];
		media1 = acum1 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media1<<endl;
	
	cout<<"\nAlmacen 2\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a2[i];
		acum2+=a2[i];
		media2 = acum2 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media2<<endl;
	
	cout<<"\nAlmacen 3\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a3[i];
		acum3+=a3[i];
		media3 = acum3 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media3<<endl;
	
	cout<<"\nAlmacen 4\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a4[i];
		acum4+=a4[i];
		media4 = acum4 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media4<<endl;
	
	cout<<"\nAlmacen 5\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a5[i];
		acum5+=a5[i];
		media5 = acum5 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media5<<endl;
	
	cout<<"\nAlmacen 6\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a6[i];
		acum6+=a6[i];
		media6 = acum6 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media6<<endl;
	
	cout<<"\nAlmacen 7\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a7[i];
		acum7+=a7[i];
		media7 = acum7 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media7<<endl;
	
	cout<<"\nAlmacen 8\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a8[i];
		acum8+=a8[i];
		media8 = acum8 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media8<<endl;
	
	cout<<"\nAlmacen 9\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a9[i];
		acum9+=a9[i];
		media9 = acum9 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media9<<endl;
	
	cout<<"\nAlmacen 10\n"<<endl;
	for(i=0;i<12;i++){
		cout<<"Ingrese venta: "<<i+1<<endl;
		cin>>a10[i];
		acum10+=a10[i];
		media10 = acum10 / 12;
		
	}
	cout<<"La media de las ventas es: "<<media10<<endl;
	
	cout<<"\nListado de almacenes cuyas ventas mensuales son superiores a la media\n"<<endl;
	if(acum1>media1){
		cout<<"Almacen 1 = "<<acum1<<endl;;
	}
	if(acum2>media2){
		cout<<"Almacen 2 = "<<acum2<<endl;
	}
	if(acum3>media3){
		cout<<"Almacen 3 = "<<acum3<<endl;
	}
	if(acum4>media4){
		cout<<"Almacen 4 = "<<acum4<<endl;
	}
	if(acum5>media5){
		cout<<"Almacen 5 = "<<acum5<<endl;
	}
	if(acum6>media6){
		cout<<"Almacen 6 = "<<acum6<<endl;
	}
	if(acum7>media7){
		cout<<"Almacen 7 = "<<acum7<<endl;;
	}
	if(acum8>media8){
		cout<<"Almacen 8 = "<<acum8<<endl;
	}
	if(acum9>media9){
		cout<<"Almacen 9 = "<<acum9<<endl;
	}
	if(acum10>media10){
		cout<<"Almacen 10 = "<<acum10<<endl;
	}
	
	system("Pause");
	return 0;
	
}
