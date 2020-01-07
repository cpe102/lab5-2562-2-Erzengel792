#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];
	int i = 0;
	while(i<N){
	cout << "Name of student "<<i+1<<" =";
	cin>> name[i];
	cout << "Age of student "<<i+1<<" = ";
	cin>> age[i];
	i++;
	}
	int key;
	int count = 0;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	while(count < key){
		if(age[count]==key){
			cout<<name[count]<<endl;
		}
		count++;
	}
	cout << "--------------------------------------\n";
	
	return 0;
}
