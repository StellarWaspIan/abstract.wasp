#include <stdio.h>

int main(){
    int dim1;
    int dim2;
	int matriz[dim1][dim2];
    int elem;

	printf("Ingrese el largo: ");
	scanf("%d", &dim1);
	printf("Ingrese el alto: ");
	scanf("%d", &dim2);
	
    for (int i =0; i<dim1;i++){
        for (int x =0; x<dim2;i++){
            printf("Ingrese el elemento: ");
	        scanf("%d", &elem);
            matrizM[i][x]=elem;  
        }
    }

    for (int i =0; i<dim1;i++){
        for (int x =0; x<dim2;i++){
            printf("%d\n", matriz[i][x]);
        }
    }

	return 0;
}