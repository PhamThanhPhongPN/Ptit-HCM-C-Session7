#include <stdio.h>

int main(){
	int array[5];
	for (int i = 0; i <5;i++){
	printf("Hay nhap phan tu la so nguyen vao mang : ");
	scanf("%d",&array[i]);	
	}
	int max = array[0];
	int min = array[0];
	for (int j =0;j<5;j++){
		if ( array[j] > max){
			max = array[j];
		}
		if (array[j]< min){
			min = array[j];
		}
	}
	printf("So lon nhat trong mang la : %d\n",max);
	printf("So nho nhat trong mang la : %d",min);
	return 0;
}
