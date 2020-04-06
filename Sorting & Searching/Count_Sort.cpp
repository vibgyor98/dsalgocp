#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countSort(vector <int>& arr) {
	int max = *max_element(arr.begin(), arr.end());
	int min = *min_element(arr.begin(), arr.end());
	int range = max - min + 1;

	vector<int> count(range), output(arr.size());
	for (int i = 0; i < arr.size(); i++) count[arr[i] - min]++;

	for (int i = 1; i < count.size(); i++) count[i] += count[i - 1];

	for (int i = arr.size() - 1; i >= 0; i--) {
		output[ count[arr[i] - min] - 1 ] = arr[i];
		count[arr[i] - min]--;
	}

	for (int i = 0; i < arr.size(); i++) arr[i] = output[i];
}

void printArray(vector <int> & arr) {
	for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
	cout << "\n";
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<int> arr;
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		arr.push_back(x);
	}
	countSort (arr);
	printArray (arr);
	return 0;
}


// input
// 5
// 1 3 2 6 5

// output
// 1 2 3 5 6