#include <iostream>
using namespace std;

void in(int *arr, int n){
	for (int i = 0 ;i < n ;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void solve(int n){
	int arr[n];
	int i = n;
	for(int j = 0; j < n ; j++)arr[j] = 0;
	do{
		if(arr[i - 1] == 0){
			in(arr, n);
			arr[i - 1] = 1;
			for(; i < n; i++)arr[i] = 0;
		}else{
			i--;
		}
	}while(i != 0);
	in(arr, n);
}

void in2(int *arr, int *arrTemp, int n){
	cout << "{" ;
	for(int i = 0 ; i < n ; i++){
		if(arrTemp[i] == 1)cout << arr[i] << " " ;
	}
	cout << "}" << endl;
}

void solve2(int *arr, int n){
	int arrTemp[n];
	for(int i = 0; i < n; i++)arrTemp[i] = 0;
	int i = n;
	do{
		if(arrTemp[i - 1] == 0){
			in2(arr, arrTemp, n);
			arrTemp[i - 1] = 1;
			for(; i < n; i++)arrTemp[i] = 0;
		}else{
			i--;
		};
	}while(i != 0);		
	in2(arr, arrTemp, n);
		
}

void solve3(int n){
	int arr[n];
	int i = n;
	for(int j = 0 ; j < n ; j++)arr[j] = 0;
	do{
		if(arr[i - 1] == 0){
			in(arr, n);
			arr[i - 1] = 1;
			for(; i < n ; i++)arr[i] = 0;
		}else{
			i--;
		}
	}while(i != 0);
	in(arr, n);

}

int main(){
	int n = 4;
	int arr[] = {1,2,3,4};
	solve2(arr, n);
	solve(4);
	return 0;
}
