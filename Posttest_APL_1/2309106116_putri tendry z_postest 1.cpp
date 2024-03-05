#include <iostream>
using namespace std;

int main(){
	string username = "Tendry";
	string password = "2309106116";
	string user, pass,login;
	string ulang = "y";
	char pilihan;
	double celcius,farenheit,reamur,kelvin;
	
	for (int i =1;i<4;i++){
		cout<<"Masukkan Username : ";
		cin>>user;
		cout<<"Masukkan Password : ";
		cin>>pass;
		if(user == username && pass == password){
			cout<<"LOGIN BERHASIL"<<endl;
			login ="berhasil";
			break;
		}
		else{
			cout<<"Username atau Password salah,"
			"Silahkan coba lagi"<<endl;
			continue;
		}
	}
	if(login != "berhasil"){
		cout<<"Anda telah melakukan login sebanyak 3x"
		"Program akan berhenti.";
	}
	while(login == "berhasil" && ulang == "y"){
		cout<<"KONVERSI SUHU"<<endl;
		cout<<"1. Celcius  ke Reamur, Farenheit, Kelvin"<<endl;
		cout<<"2. Farenheit ke Celcius, Reamur, Kelvin"<<endl;
		cout<<"3. Reamur ke Celcius, Farenheit, Kelvin"<<endl;
		cout<<"4. Kelvin ke Celcius, Farenheit, Reamur"<<endl;
		cout<<"Pilihan : ";
		cin>>pilihan;
		
		if(pilihan == '1'){
			cout<<"Suhu Celcius : ";
			cin>>celcius;
			
			reamur = (celcius *4)/5;
			farenheit = (celcius +32)*9/5;
			kelvin = celcius +273;
			
			cout<<celcius<<" Celcius = "<<reamur<<" Reamur "<<farenheit<<" Farenheit "<<kelvin<<" Kelvin"<<endl;
		}
		else if(pilihan == '2'){
			cout<<"Suhu Farenheit : ";
			cin>>farenheit;
			
			celcius = (farenheit-32)*5/9;
			reamur = (farenheit-32)*4/9;
			kelvin = ((farenheit-32)*5/9) +273;
			
			cout<<farenheit<<" Farenheit = "<<celcius<<" Celcius "<<reamur<<" Reamur "<<kelvin<<" Kelvin"<<endl;
		}
		else if(pilihan == '3'){
			cout<<"Suhu Reamur : ";
			cin>>reamur;
			
			celcius = (reamur*5)/4;
			farenheit = ((reamur*9)/4)+32;
			kelvin = ((reamur*5)/4)+273;
			
			cout<<reamur<<" Reamur = "<<celcius<<" Celcius "<<farenheit<<" Farenheit "<<kelvin<<"Kelvin"<<endl;
		}
		else if(pilihan == '4'){
			cout<<"Suhu Kelvin : ";
			cin>>kelvin;
			
			celcius = kelvin - 273;
			farenheit = (((kelvin-273)*9)/5)+32;
			reamur = ((kelvin-273)*4)/5;
			
			cout<<kelvin<<" Kelvin = "<<celcius<<" Celcius "<<farenheit<<" Farenheit "<<reamur<<" Reamur"<<endl;
		}
		else{
			cout<<"menu tidak tersedia"<<endl;
		}
		cout<<"Ingin mengulang program? (y/n) ";
		cin>>ulang;
		if (ulang == "n"|| ulang == "N"){
			cout<<"Terimakasih telah menggunakan program ini";
			ulang = "t";
		}
		else{
			cout<<"Pilihan salah silahkan coba lagi";
		}
	}
		
	
	return 0;
}
