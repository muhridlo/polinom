#include <stdio.h>
#include <conio.h>



int main(){
	printf("Program Penjumlahan,Pengurangan,Perkalian, dan Turunan Polinomial \n");
	printf("(ax^2+b) (operator) (cx+d) \n");	
	penjumlahan ()
}
int penjumlahan (){
	int a,b,c,d ;
	int p2,p1,p0 ;
	
	printf("Penjumlahan \n");
	printf("Masukkan a: ");
	scanf("%d" , &a);
	printf("Masukkan b: ");
	scanf("%d" , &b);
	printf("Masukkan c: ");
	scanf("%d" , &c);
	printf("Masukkan d: ");
	scanf("%d" , &d);
	
	p2 = a;
	p1 = c;
	p0 = b+d;
	
	printf("Hasilnya adalah %dx^2 + %dx + %d ",p2,p1,p0);