#include <stdio.h>

int main(){
	int array[5];
	for (int i = 0; i <5;i++){
	printf("Hay nhap phan tu la so nguyen vao mang : ");
	scanf("%d",&array[i]);	
	}
	printf("Mang ma ban da tao la:\n");
	for (int j = 0; j<5;j++){
	printf("%d ",array[j]);
}
return 0;
}
