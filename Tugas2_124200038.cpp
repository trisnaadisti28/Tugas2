#include <iostream>

using namespace std;

int main (){
	int u1, u2, u3, u4;
	int t1, t2, t3, t4, total;
	cout <<"TUGAS 2 PRAKTIKUM ALGORITMA I\n\n";
	//input umur ayah
	cout << "Umur Ayah   : " ; cin >> u1;
	if (u1 > 20 ) {
		t1 = 30000 * 30 ;}
	else if (u1 >=12 && u1<=20 ){	
		t1 = 20000 * 30 ;} 
	else {
		t1 = 15000 * 30 ;}
	
	//input umur ibu
	cout << "Umur Ibu    : " ; cin >> u2;
	if (u2 > 20 ) {
		t2 = 30000 * 30 ;}
	else if (u2 >=12 && u2<=20 ){	
		t2 = 20000 * 30 ;} 
	else {
		t2 = 15000 * 30 ;}
		
	//input umur anak 1
	cout << "Umur Anak 1 : " ; cin >> u3;
	if (u3 > 20 ) {
		t3 = 30000 * 30 ;}
	else if (u3 >=12 && u3<=20 ){	
		t3 = 20000 * 30 ;} 
	else {
		t3 = 15000 * 30 ;} 
		
	//input umur anak 2
	cout << "Umur Anak 1 : " ; cin >> u4;
	if (u4 > 20 ) {
		t4 = 30000 * 30 ;}
	else if (u4 >=12 && u4<=20 ){	
		t4 = 20000 * 30 ;} 
	else {
		t4 = 15000 * 30 ;}
		
	total = t1 + t2 + t3 + t4;	
	
	cout << "Tangihan satu bulan adalah Rp. " << total <<endl;
	return 0;
	



}
