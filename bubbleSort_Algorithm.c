#include <stdio.h>

void bubbleSort(int data[], int data_size);

int main(void){

	int data[] = {4,3,6,9,5};
	int data_size = sizeof(data)/sizeof(data[0]);
	bubbleSort(data,data_size);

	return 0;
}

void bubbleSort(int data[], int data_size){

	int i,j,temp;

	for(i = 0; i < data_size; i++){
		for(j = 0; j < data_size-1-i; j++){
			if(data[j] > data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	for(i = 0; i < data_size; i++){
		printf("%d ", data[i]);
	}

}