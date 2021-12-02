#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>

TEST_CASE("TASK A") {
	vector<int> v = makeVector(5);
	for(int i = 0; i < v.size(); i++) {
                CHECK(v[i] == i);
        }
	vector<int> v1 = makeVector(10);
	for(int i = 0; i < v1.size(); i++) {
		CHECK(v1[i] == i);
	}
}

TEST_CASE("TASK B") {
	vector<int> v{1,2,-1,3,4,-1,6};
	vector<int> list = goodVibes(v);
	vector<int> correctlist = {1,2,3,4,6};
	CHECK(list == correctlist);

	vector<int> v1{50,-50,100,-100,150,-150};
	vector<int> list1 = goodVibes(v1);
	vector<int> correctlist1 = {50,100,150};
	CHECK(list1 == correctlist1);
}

TEST_CASE("TASK C") {
	vector<int> empty;
	vector<int> v1{1,2,3};
	vector<int> v2{4,5};
	gogeta(v1, v2);
	vector<int> list = {1,2,3,4,5};
	CHECK(v1 == list);
	CHECK(v2 == empty);
	
	vector<int> v3{5,4};
        vector<int> v4{3,2,1};
        gogeta(v3, v4);
        vector<int> list1 = {5,4,3,2,1};
        CHECK(v3 == list1);
	CHECK(v4 == empty);
}

TEST_CASE("TASK D") {
	vector<int> v1{1,2,3};
	vector<int> v2{4,5};
	vector<int> list = sumPairWise(v1, v2);
	vector<int> correctlist = {5, 7, 3};
	CHECK(list == correctlist);

	vector<int> v3{10,20,30};
	vector<int> v4{50,60};
	vector<int> list1 = sumPairWise(v3, v4);
        vector<int> correctlist1 = {60, 80, 30};
	CHECK(list1 == correctlist1);
}
