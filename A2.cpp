#include<iostream>
using namespace std;

char res[100];
int temp[100], sb = 0;
string str;

void in(){
	cout << res << endl;
}

void Try(int n){
	if(sb == n)in();
	else{
		for(int i = 0 ; i < n; i++){
			if(temp[i] == 0){
				res[sb] = str[i];
				sb++;
				temp[i] = 1;
				Try(n);
				sb--;
				temp[i] = 0;
			}
		}
	}
}

int main(){
	cin >> str;
	Try(str.size());
	
	return 0;
}
