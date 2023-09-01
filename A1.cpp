#include<iostream>
using namespace std;

int arr[] = {1,2,3,4,5,6,7,8,9, 10}, total[1000], n = 10, sb = 0;

void sinh(int *&arr, int n){
	arr = new int[n];
	for(int i = 0 ; i< n; i++){
		int x = rand();
		if(rand() % 3 == 0)x = -2 * x;
		arr[i] = x;
	}
}

void in(){
	for(int i = 0; i < sb; i++)cout << total[i] << " ";
	cout << endl;
}

void Try(int k, int i = 0){
	if(k == 0)in();
	else{
		for(; i < n; i++){
			if(arr[i] <= k){
				total[sb] = arr[i];
				sb++;
				Try(k - arr[i], i + 1);
				sb--;
			}
		}
	}
}

int main(){
	//sinh(arr, n);
	Try(10);
	return 0;
}
