#include <iostream>
#include <cstdio>
using namespace std;

void check(int);

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	check(num);
	return 0;
}

void check(int n){
	(n % 2 == 0)? cout<<"Even"<<endl: cout<<"Odd"<<endl;
}
