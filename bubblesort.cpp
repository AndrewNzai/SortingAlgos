#include <iostream>
#include <list>


using namespace std;

void sort(int arr[], int size){

for (int i = 0; i < size - 1; i++){
for (int j = 0; j < size - 1; j++){

int a = arr[j];
int b = arr[j+1];

if (a > b){

arr[j] = b;
arr[j+1] = a;			
			}

		}
	}
}


int main(){

int ins, j;

j = 0;

list<int> larr;

cout << "Enter your numbers, terminate by using '-1': " << endl;
cin >> ins;

while (ins != -1){

larr.push_back(ins);

cout << "Enter your numbers, terminate by using '-1': " << endl;
cin >> ins;

}

int arr[larr.size()];

for (int i : larr){
arr[j] = i;
j++;
}

cout << "Unsorted Array: " << endl;

for (int i : arr)
cout << i << endl;

sort(arr, larr.size());

cout << "Sorted in ascending order: " << endl;

for (int i : arr)
cout << i << endl;

}
