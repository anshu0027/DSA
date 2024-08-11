//              Question 01 - Reverse a String
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "hello";
    string reversed = "";
    
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    
    cout << "Reversed String: " << reversed << endl;
    return 0;
}




//              Question 02 - Check if Number is Prime
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n = 29;
    if (isPrime(n))
        cout << n << " is a Prime number." << endl;
    else
        cout << n << " is not a Prime number." << endl;
    return 0;
}




//              Question 03 - Find Factorial of a Number
#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}



//              Question 04 - Fibonacci Series
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}



//              Question 05 - Check if String is Palindrome
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    int l = 0, r = str.length() - 1;
    while (l < r) {
        if (str[l] != str[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string str = "radar";
    if (isPalindrome(str))
        cout << str << " is a Palindrome." << endl;
    else
        cout << str << " is not a Palindrome." << endl;
    return 0;
}



//              Question 06 - Sum of Digits
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int n = 123;
    cout << "Sum of Digits: " << sumOfDigits(n) << endl;
    return 0;
}



//              Question 07 - Swap Two Numbers Without Using a Temporary Variable
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5, b = 10;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}



//              Question 08 - Find the Largest Element in an Array
#include <bits/stdc++.h>
using namespace std;

int findLargest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {1, 8, 7, 56, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Largest Element: " << findLargest(arr, n) << endl;
    return 0;
}



//              Question 09 - Count the Number of Vowels in a String
#include <bits/stdc++.h>
using namespace std;

int countVowels(string str) {
    return count_if(str.begin(), str.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    });
}

int main() {
    string str = "hello world";
    cout << "Number of Vowels: " << countVowels(str) << endl;
    return 0;
}



//              Question 10 - Find the GCD of Two Numbers
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a = 56, b = 98;
    cout << "GCD: " << gcd(a, b) << endl;
    return 0;
}



//              Question 11 - Merge Two Sorted Arrays
#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    
    while (i < n1) {
        arr3[k++] = arr1[i++];
    }
    
    while (j < n2) {
        arr3[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1 + n2];
    
    mergeArrays(arr1, arr2, n1, n2, arr3);
    
    cout << "Merged Array: ";
    for (int i = 0; i < n1 + n2; i++)
        cout << arr3[i] << " ";
    cout << endl;
    
    return 0;
}



//              Question 12 - Implement a Basic Calculator
#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    float num1, num2;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Division by zero is not allowed.";
            break;
        default:
            cout << "Invalid operator!";
            break;
    }
    
    return 0;
}



//              Question 13 - Print a Pattern
// Available in Loops Directory



//              Question 14 - Find the Second Largest Element in an Array
#include <bits/stdc++.h>
using namespace std;
int findSecondLargest(int arr[], int n) {
    if (n < 2) return -1;
    
    int first = arr[0], second = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1)
        cout << "The second largest element is " << secondLargest << endl;
    else
        cout << "There is no second largest element." << endl;
    return 0;
}



//              Question 15 - Remove Duplicates from an Array
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n;
    
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];
    return j;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    n = removeDuplicates(arr, n);
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}


//              Question 16 - Count the Frequency of Characters in a String
#include <bits/stdc++.h>
using namespace std;

void countFrequency(string str) {
    int freq[256] = {0};
    
    for (char c : str) {
        freq[c]++;
    }
    
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << ": " << freq[i] << endl;
        }
    }
}

int main() {
    string str = "hello";
    countFrequency(str);
    return 0;
}



//              Question 17 - Check for Armstrong Number
#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }
    return sum == original;
}

int main() {
    int n = 153;
    if (isArmstrong(n))
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;
    return 0;
}



//              Question 18 - Reverse an Array
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    reverseArray(arr, n);
    return 0;
}



//              Question 19 - Check if Two Strings are Rotations of Each Other
#include <bits/stdc++.h>
using namespace std;

bool areRotations(string str1, string str2) {
    if (str1.length() != str2.length()) return false;
    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}

int main() {
    string str1 = "ABCD", str2 = "CDAB";
    if (areRotations(str1, str2))
        cout << "Strings are rotations of each other" << endl;
    else
        cout << "Strings are not rotations of each other" << endl;
    return 0;
}




//              Question 20 - Sum of Two Matrices
#include <bits/stdc++.h>
using namespace std;

void addMatrices(int A[3][3], int B[3][3], int C[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];
    
    addMatrices(A, B, C, 3);
    
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}




//              Question 21 - Find the Length of the Longest Substring Without Repeating Characters
#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        unordered_map<char, bool> visited;
        for (int j = i; j < n; j++) {
            if (visited[s[j]]) break;
            maxLen = max(maxLen, j - i + 1);
            visited[s[j]] = true;
        }
    }
    return maxLen;
}

int main() {
    string str = "abcabcbb";
    cout << "Length of longest substring without repeating characters: "
              << lengthOfLongestSubstring(str) << endl;
    return 0;
}




//              Question 22 - Matrix Transpose
#include <bits/stdc++.h>
using namespace std;

void transposeMatrix(int matrix[3][3], int transposed[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposed[3][3];
    
    transposeMatrix(matrix, transposed, 3);
    
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}




//              Question 23 - Find the Missing Number in an Array
#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;
    int sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    
    return totalSum - sum;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]) + 1;
    cout << "Missing number: " << findMissingNumber(arr, n) << endl;
    return 0;
}




//              Question 24 - Check if a String Contains Only Digits
#include <bits/stdc++.h>
using namespace std;

bool containsOnlyDigits(const string &str) {
    return all_of(str.begin(), str.end(), ::isdigit);
}

int main() {
    string str = "123456";
    if (containsOnlyDigits(str))
        cout << "The string contains only digits." << endl;
    else
        cout << "The string contains non-digit characters." << endl;
    return 0;
}




//              Question 25 - Check if a Year is a Leap Year
#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) return true;
            else return false;
        } else return true;
    } else return false;
}

int main() {
    int year = 2024;
    if (isLeapYear(year))
        cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;
    return 0;
}




//              Question 26 - Find the Maximum Difference Between Two Elements
#include <bits/stdc++.h>
using namespace std;

int maxDifference(int arr[], int n) {
    int minElement = arr[0];
    int maxDiff = arr[1] - arr[0];
    
    for (int i = 1; i < n; i++) {
        maxDiff = max(maxDiff, arr[i] - minElement);
        minElement = min(minElement, arr[i]);
    }
    
    return maxDiff;
}

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum difference: " << maxDifference(arr, n) << endl;
    return 0;
}


//              Question 27 - Check if an Array is Sorted
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    return is_sorted(arr, arr + n);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (isSorted(arr, n))
        cout << "The array is sorted." << endl;
    else
        cout << "The array is not sorted." << endl;
    
    return 0;
}



//              Question 28 - Binary Search
#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int arr[], int left, int right, int key) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) return mid;
        else if (arr[mid] > key) return binarySearchRecursive(arr, left, mid - 1, key);
        else return binarySearchRecursive(arr, mid + 1, right, key);
    }
    
    return -1;  // Key not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    
    int result = binarySearchRecursive(arr, 0, n - 1, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array." << endl;
    
    return 0;
}