 #include <iostream>
 using namespace std;
 
 int binarySearchIterative(int arr[], int l, int r, int x) { 
	while (l <= r) { 
		int m = l + (r - l) / 2; 

		if (arr[m] == x) 
			return m; 

		if (arr[m] < x) 
			l = m + 1; 

		else
			r = m - 1; 
	} 

	return -1; 
} 


int binarySearchRecursive(int arr[], int l, int r, int x) { 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		if (arr[mid] == x) 
			return mid; 

		if (arr[mid] > x) 
			return binarySearchRecursive(arr, l, mid - 1, x); 

		return binarySearchRecursive(arr, mid + 1, r, x); 
	} 
  
	return -1; 
} 

int main() { 
	int arr[] = { 2, 3, 4, 10, 40 }; 
	int x = 10; 
	int n = sizeof(arr) / sizeof(arr[0]); 
  
  int result_i = binarySearchIterative(arr, 0, n - 1, x); 
	(result_i == -1) ? cout << "Iterative: Element isn't in array\n"
				: cout << "Iterative: Element is at index " << result_i << endl; 
        
	int result_r = binarySearchRecursive(arr, 0, n - 1, x); 
	(result_r == -1) ? cout << "Recursive: Element isn't in array\n"
				: cout << "Recursive: Element is at index " << result_r << endl; 
	return 0; 
} 
