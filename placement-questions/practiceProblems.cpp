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
