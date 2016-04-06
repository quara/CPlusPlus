#include <iostream>

using namespace std;
void Multiples(int numbers[], int n1, int multiples_of_two[], int n2, int multiples_of_five[], int n3);
void output(int numbers[],int size);
int main(){
	int numbers[10],twoRange=0,fiveRange=0;
	cout<<"Populating the array: "<<endl;
	for(int i=0;i<10;i++){
		cin>>numbers[i];
	}
	cout<<"Your array is: "<<endl;
	for(int i=0;i<10;i++){
		cout<<numbers[i]<<" ";
	}
	for(int i=0;i<10;i++){

		if(numbers[i]%2 == 0){
			twoRange++;
		}
		if(numbers[i]%5 == 0){
			fiveRange++;
		}
		
	}
	cout<<endl;
	int multiples_of_two[twoRange],multiples_of_five[fiveRange];
	Multiples(numbers,10,multiples_of_two,twoRange,multiples_of_five,fiveRange);
	return 0;
}

void Multiples(int numbers[], int n1, int multiples_of_two[], int n2, int multiples_of_five[], int n3){
	int j=0,k=0;
	for(int i=0;i<n1;i++){
		if(numbers[i]%2 == 0){
			multiples_of_two[j]=numbers[i];
			j++;
		}
		if(numbers[i]%5 == 0){
			multiples_of_five[k]=numbers[i];
			k++;
		}
	}
	output(multiples_of_two,n2); //prints out multiples of two
	output(multiples_of_five,n3); //prints out multiples of five
}

void output(int numbers[],int size){
	cout<<endl<<"Your array is : ";
	for(int i=0;i<size;i++){
		cout<<numbers[i]<<" ";
	}
}