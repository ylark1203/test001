#include<iostream>
#include<cmath>
#include<climits>

#define Day 7
struct person
{
	int age;
	bool sex;
	int id_num;
};



int main() {
	using namespace std;

	person p1 = {
		15,
		true,
		13562
	};

	person p2;
	p2.age = 17;
	p2.sex = false;
	p2.id_num = 100001;

	cout << p1.age << " " << p1.id_num << " " << p1.sex << endl;
	cout << p2.age << " " << p2.id_num << " " << p2.sex << endl;


	return 0;
}