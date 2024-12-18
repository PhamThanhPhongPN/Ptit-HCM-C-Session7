#include <stdio.h>

int main(){
	int n;
	printf("Ban muon mang co bao nhieu phan tu? ");
	scanf("%d",&n);
	int array[n];
	for (int i = 0;i < n;i++){
		printf("Hay nhap phan tu cho mang : ");
		scanf("%d",&array[i]);
	}
	printf("Mang cua ban tao ra la :\n{");
	for (int j = 0;j<n;j++){
		printf("%d ",array[j]);
		if (j== (n-1)){
			printf("}");
		}
	}
	return 0;
}
