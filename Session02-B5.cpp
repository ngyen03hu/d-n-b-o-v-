#include<stdio.h>

int main(){
	int a = 4; // chieu dai hinh chu nhat 
	int b = 5; // chieu rong hinh chu nhat 
	
	// chu vi hinh chu nhat
	// cong thuc tinh chu vi hinh chu nhat P=2*(a+B)
	int P = 2 * (a + b);
	printf(" chu vi cua hinh chu nhat la %d\n",P);
	
	//  dien tich cua hinh chu nhat
	// cong thuc tinh dien tinh hinh chu nhat S=a*b
	int S = a * b;
	printf("dien tich hinh chu nhat la %d\n",S);
	
	 return 0; 
} 
