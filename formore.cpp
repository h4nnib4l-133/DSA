#include <iostream>

int main(){

int arr[8];

for(int i=0; i<7; i++){
	arr[i] = i;
}

for(int i=0; (i<10 && i<7); i++){
	std::cout << arr[i] << std::endl;
}
	return 0;
}
