#include<iostream>
using namespace std;
int main(){
	int a, sum = 0;
	cout << "Enter a number: ";
	cin >> a;
	while(a>=0){
		if(a>=0){
			sum = sum + a;
			cout << "Enter another number: ";
			cin >> a;
			continue;
		}
		else{
			break;
		}
	}
	cout << "Sum of all inputted integers is " << sum;
	return 0;
}
