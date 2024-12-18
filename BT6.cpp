#include <stdio.h>

int main(){
	int array[5];
	for (int i = 0; i <5;i++){
	printf("Hay nhap phan tu la so nguyen vao mang : ");
	scanf("%d",&array[i]);	
	}
	for (int j = 0; j <5;j++){
		if (array[j]%2==0){
			array[j] = array[j] + 3;
		} else {
			array[j] = array[j] + 2;
		}
		printf("%d ",array[j]);
	}
	return 0;
}
	
	
