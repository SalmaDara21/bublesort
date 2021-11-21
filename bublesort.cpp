#include <iostream>
using namespace std;
int main (){
	int arr[15] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
	bool swapped;
	int temp; //terserah mau ngasih int nama apa
	int indexOfLastUnsortedElement = 15; //tulis disini indexnya dengan jumlah arraynya
	
	do{
		swapped = false;
		for(int i = 0; i<indexOfLastUnsortedElement-1;i++) //memang kurangin -1
		if(arr[i]>arr[i+1]){
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			swapped = true;
		}
	}while(swapped);
	for(int i = 0; i<indexOfLastUnsortedElement;i++){
		cout << arr[i]<<" ";
	}
 }
