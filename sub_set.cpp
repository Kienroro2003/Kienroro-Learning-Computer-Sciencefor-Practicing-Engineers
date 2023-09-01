#include <iostream>

using namespace std;

int factorial(int n){
	int total = 1;
	for(int i = 2; i <= n; i++){
		total *= i;
	}
	return total;
}

void in(int *arr, int n){
	for(int i = 0 ;i < n ;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void solve(int n, int k){
	int arr[k];
	for(int i = 0; i < k ; i++)arr[i] = i + 1;
	int c = factorial(n) / (factorial(k) * factorial(n - k));
	int j = k;
	for(int i = 0 ; i < c; i++){
		in(arr, k);
		while(j >= 0 && arr[j - 1] == n - k + j)j--;
		if(j > 0){
			arr[j - 1] += 1;
			for(; j < k; j++)arr[j] = arr[j - 1] + 1;
		}
	}
}




int main(){
	int n = 5;
	int k = 3;
	int arr[k];
	solve( n, k);

	return 0;
}
