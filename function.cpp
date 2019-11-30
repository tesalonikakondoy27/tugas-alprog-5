#include<iostream>
#include<math.h>
using namespace std;
float volume_balok(int p, int l, int t){
	int balok= p*l*t;
	return balok;
}
float volume_kubus(int sisi){
	int kubus= pow(sisi,3);
	return kubus;
}
float volume_kerucut(int r, int tinggi, float phi){
	float kerucut=0.3 * pow(r,2) * phi * tinggi;
	return kerucut;
}

int main(){
	int p,l,t, balok;
	
	cout<<" menghitung volum balok \n";
	cout<<"masukkan panjang : ";cin>>p;
	cout<<"masukkan lebar : ";cin>>l;
	cout<<"masukkan tinggi : ";cin>>t;
	balok=volume_balok (p,l,t);
	cout<< "volume persegi = "<<balok<<endl;
	
	int sisi,kubus;
	cout<<"\n menghitung volum kubus \n";
	cout<<"masukkan panjang sisi : ";cin>>sisi;
	kubus=volume_kubus (sisi);
	cout<<"volume kubus = "<<kubus<<endl;
	
	int r,tinggi;
	float phi, kerucut;
	cout<<"\n menghitung volum kerucut \n";
	cout<<"masukkan jari-jari : ";cin>>r;
	cout<<"masukkan tinggi : ";cin>>tinggi;
	phi=3.14;
	kerucut=volume_kerucut (r,t,phi);
	cout<<"volume kubus = "<<kerucut<<endl;
	
}
