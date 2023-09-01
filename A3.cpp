#include<iostream>
using namespace std;

int arr[3], n = 3, k = 10;

void in(){
	for(int i = 0 ;i < n; i++)cout << arr[i] << " ";
	cout << endl;
}

void Try(int ii, int k){
	if(ii == 2){
		arr[ii] = k;
		in();
	}else{
		for(int i = 1; i <= k; i++){
			arr[ii] = i;
			Try(ii + 1, k - i);
		}
	}
}

int main(){
	Try(0, k);

	return 0;
}
