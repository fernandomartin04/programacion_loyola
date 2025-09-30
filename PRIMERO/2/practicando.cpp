#include <iostream>
#include <list>
using namespace std;
int main() {
	list<int> nums;
	auto it = nums.begin();
	for (int i = 1; i <= 5; i++ ) {
		nums.push_back(i);
	}
	it = nums.begin();
	advance(it, 2);
	nums.insert(it, 99);

	// Resultado: 10 20 99 30 40
	for (it = nums.begin(); it != nums.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	advance(it, 5);
	nums.erase(it);
	for (it = nums.begin(); it != nums.end(); it++){
		cout << *it << " ";
	}
	
	return 0;
}
