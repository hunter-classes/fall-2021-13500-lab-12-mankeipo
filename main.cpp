#include <iostream>
#include "funcs.h"
#include <vector>
using namespace std;

int main() {	
	
	vector<int> array;
	array = makeVector(15);
	for(int i = 0; i < array.size(); i++) {
		cout << array[i] << endl;
	}
	vector<int> v{1,2,-1,3,4,-1,6};
	
	vector<int> array1 = goodVibes(v);
	for(int i = 0; i < array1.size(); i++) {
                cout << array1[i] << endl;
        }
	vector<int> v1{1,2,3};
	vector<int> v2{4,5};
	gogeta(v1, v2);
	for(int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}
	cout << endl;
	for(int i = 0; i < v2.size(); i++) {
                cout << v2[i] << endl;
        }
	cout << endl;
	vector<int> b1{1,2,3};
	vector<int> b2{4,5};
	vector<int> list = sumPairWise(b1, b2);
	for(int i = 0; i < list.size(); i++){
		cout << list[i] << endl;
	}
	return 0;
}
