#include<iostream>
using namespace std;

int n = 5;
int x[100];
bool a[100], b[100], c[100];

void in(){
	for(int i = 1; i <= n; i++)cout << "(" << i << ";" << x[i] << ") ";
	cout << endl;
}

void Try(int row){
	for(int col = 1; col <= n; col++){
		if(a[col] && b[row + col] && c[row - col]){
			x[row] = col;
			if(row == n)in();
			b[row+col] = false;
			c[row-col] = false;
			a[col] = false;
			Try(row + 1);
			a[col] = true;
			b[row + col] = true;
			c[row - col] = true;
		}
	}
}

int main(){
	fill(a, a + 100, true);
	fill(b, b + 100, true);
	fill(c, c + 100, true);
	Try(1);
	return 0;
}
