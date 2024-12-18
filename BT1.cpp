#include <Stdio.h>

int main(){
	int array[] = {1, 2, 3, 4, 6, 86};
	int lenght = sizeof(array)/ sizeof(array[0]);
	printf("Do dai mang la : %d\n",lenght);
	for (int i = 0; i < lenght;i++){
		printf("%d\n",array[i]);
	}
	return 0;
}
