#include<iostream>
using namespace std;

int arr[1000], sb = 0, n = 4; 

void in(){
	for(int i = 0; i < sb; i++)cout << arr[i] << " ";
	cout << endl;
}

void Try(int temp, int ii){
	if(temp == n)in();
	else{
		for(int i = 0; i <= 1; i++){
			if(ii == 1 && i == 1)continue;
			arr[sb] = i;
			sb++;
			Try(temp+1, i);
			sb--;
		}
	}
}

int main(){
	Try(0, 0);

	return 0;
}
