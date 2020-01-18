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

int pengurangan (){
	int a,b,c,d ;
	int p2,p1,p0 ;
	
	printf("\nPengurangan \n");
	printf("Masukkan a: ");
	scanf("%d" , &a);
	printf("Masukkan b: ");
	scanf("%d" , &b);
	printf("Masukkan c: ");
	scanf("%d" , &c);
	printf("Masukkan d: ");
	scanf("%d" , &d);
	
	p2 = a;
	p1 = -c;
	p0 = b-d;
	
	printf("Hasilnya adalah %dx^2 + (%dx)+ (%d)", p2, p1,p0);
}
int perkalian (){
	int a,b,c,d ;
	int p3,p2,p1,p0 ;
	
	printf("\nPerkalian \n");
	printf("Masukkan a: ");
	scanf("%d" , &a);
	printf("Masukkan b: ");
	scanf("%d" , &b);
	printf("Masukkan c: ");
	scanf("%d" , &c);
	printf("Masukkan d: ");
	scanf("%d" , &d);
	
	p3 = a*c;
	p2 = a*d;
	p1 = b*c;
	p0 = b*d;
	
	printf("Hasilnya adalah %dx^3 + %dx^2 + %dx + %d ", p2,p1,p0);
}

int turunan (){
	int a,b,c,d,e ;
	int p4,p3,p2,p1,p0 ;
	
	printf("\nTurunan dari ax^4 + bx^3 + cx^2 + dx + e");
	printf("\nTurunan \n");
	printf("Masukkan a: ");
	scanf("%d" , &a);
	printf("Masukkan b: ");
	scanf("%d" , &b);
	printf("Masukkan c: ");
	scanf("%d" , &c);
	printf("Masukkan d: ");
	scanf("%d" , &d);
	printf("Masukkan e: ");
	scanf("%d" , &e);
	
	p4 = a*4;
	p3 = b*3;
	p2 = c*2;
	p1 = d*1;
	p0 = e*0;
	
	printf("Hasilnya adalah %d x^3 + %d x^2 + %d x + %d + %d ", p4,p3,p2,p1,p0);
}
