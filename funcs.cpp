#include <iostream>
#include "funcs.h"
#include <vector>
using namespace std;

vector<int> makeVector(int n){
	vector<int> x;
	for(int i = 0; i < n; i++) {
		x.push_back(i);
	}	
	return x;
}

vector<int> goodVibes(const vector<int> &v) {
	vector<int> x;
	for(int i = 0; i < v.size(); i++) {
		if(v[i] > 0) {
			x.push_back(v[i]);
		}
	}
	return x;
}

void gogeta(vector<int> &goku, vector<int> &vegeta) {
	for(int i = 0; i < vegeta.size(); i++) {
		goku.push_back(vegeta[i]);
	}
	vegeta.clear();
}

vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2){
	vector<int> list;
	if(v1.size() > v2.size()) {
		for(int i = 0; i < v1.size(); i++){
			list.push_back(v1[i] + v2[i]);
		}
	} else {
		for(int i = 0; i < v2.size(); i++){
                        list.push_back(v1[i] + v2[i]);
                }
	}
	return list;
}
