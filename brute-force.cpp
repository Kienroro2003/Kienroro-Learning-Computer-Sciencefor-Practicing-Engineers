#include <iostream>
using namespace std;

int sb = 0, dem, m[1000];


void in(){
	cout << "\n Cach di thu " << ++dem << ": ";
	for(int i = 0 ;i  < sb; i++)cout << m[i] << " ";
	cout << endl;
}

void phantich_yc(int ll, int tt){
	if(ll == 0)in();
	else{
		if(tt < 2){
			for(int i = 1; i <= 2; i++){
				if(i <= ll){
					m[sb] = i;
					sb++;
					if(i == 1)phantich_yc(ll - i, tt + 1);
					else phantich_yc(ll - i, tt);
					sb--;
				}
			}
		}else{
			for(int i = 2; i <= 2; i++){
				if(i <= ll){
					m[sb] = i;
					sb++;
					phantich_yc(ll - i, tt);
					sb--;
				}
			}
		}
	}
}

int main(){
	phantich_yc(14, 0);

	return 0;
}	
