#include <iostream>
using namespace std;
int main() {
int n;
// Input the number of elements in the array
cout << "Enter the number of elements: ";
cin >> n;
int arr[n];
// Input the elements of the array
cout << "Enter the elements of the array:\n";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
// Sorting in ascending order
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (arr[i] > arr[j]) {
// Swap the elements
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
// Display the array sorted in ascending order
cout << "\nArray in ascending order: ";
for (int i = 0; i < n; i++) {
cout << arr[i] << " ";
}
cout << endl;
// Sorting in descending order
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (arr[i] < arr[j]) {
// Swap the elements
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
// Display the array sorted in descending order
cout << "Array in descending order: ";
for (int i = 0; i < n; i++) {
cout << arr[i] << " ";
}
cout << endl;
return 0;
}
