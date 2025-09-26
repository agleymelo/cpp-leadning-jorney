#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> nums1;
	vector<int> nums2;
	int length, i;

	nums1.push_back(1);
	nums1.push_back(2);
	nums1.push_back(3);
	nums1.push_back(4);
	nums1.push_back(5);
	
	nums2.push_back(6);
	nums2.push_back(7);
	nums2.push_back(8);
	nums2.push_back(9);
	nums2.push_back(10);

	nums1.insert(nums1.begin(), 888);
	nums1.insert(nums1.end(), 236);
	nums1.erase(nums1.begin());

	length = nums1.size();

	cout << "First element value of nums1: " << nums1.front() << endl;
	cout << "Last element value of nums1: " << nums1.back() << endl;
	cout << "Any element value of numb1: " << nums1.at(length/2) << endl;

	// nums1.swap(nums2);

	cout << "Size of vector: " << length << endl;

	for (i = 0; i < length; i++) { 
		cout << nums1[i] << endl;
	}

	cout << endl;

	for (i = 0; i < nums2.size(); i++) {
		cout << nums2[i] << endl;
	}

	while(!nums1.empty()) {
		nums1.pop_back();
		cout << "Remove the element " << nums1.size() << " of nums1!" << endl;
	}

	nums2.clear();
	cout << "New size of nums1: " << nums1.size() << endl;
	cout << "New size of nums2: " << nums2.size() << endl;

	return 0;
}