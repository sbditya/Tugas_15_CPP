#include <iostream>

using namespace std; 

void perkalian(int *c, int *d){
	cout<<"Hasil : "<<*c * *d<<endl;
}
int main(){
	int x; 
	cout<<"Inputkan Nilai X : "; 
	cin>>x;
	
	int y;
	cout<<"Inputkan Nilai Y : "; 
	cin>>y;
	
	perkalian(&x,&y);

}
