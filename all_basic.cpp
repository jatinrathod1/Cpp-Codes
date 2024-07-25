#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <limits.h>

using namespace std;

// Function to print Hello World
void helloWorld() {
    cout << "Hello, World!" << endl;
}

// Function to add two numbers
void addTwoNumbers() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
}

// Function to check even or odd
void checkEvenOrOdd() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;
}

// Function to find the largest number among three
void largestAmongThree() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int largest = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
    cout << "Largest number is: " << largest << endl;
}

// Function to swap two numbers
void swapTwoNumbers() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "Swapped numbers are: a = " << a << ", b = " << b << endl;
}

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to print Fibonacci series up to n terms
void fibonacciSeries() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
    cout << endl;
}

// Function to check prime number
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to reverse a number
void reverseNumber() {
    int n, reversedNumber = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    cout << "Reversed Number: " << reversedNumber << endl;
}

// Function to check if a number is a palindrome
void palindromeCheck() {
    int n, reversedNumber = 0, remainder, originalNumber;
    cout << "Enter an integer: ";
    cin >> n;
    originalNumber = n;
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    if (originalNumber == reversedNumber)
        cout << originalNumber << " is a palindrome." << endl;
    else
        cout << originalNumber << " is not a palindrome." << endl;
}

// Function to calculate the sum of digits
void sumOfDigits() {
    int n, sum = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
}

// Function to convert decimal to binary
void decimalToBinary() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Binary: " << bitset<8>(n) << endl;
}

// Function to convert binary to decimal
void binaryToDecimal() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int decimal = stoi(binary, 0, 2);
    cout << "Decimal: " << decimal << endl;
}

// Function to implement a basic calculator
void basicCalculator() {
    char op;
    float num1, num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Error! operator is not correct" << endl;
            break;
    }
}

// Function to calculate the area of a circle
void areaOfCircle() {
    float radius;
    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Area of Circle: " << 3.14 * radius * radius << endl;
}

// Function to calculate the area of a rectangle
void areaOfRectangle() {
    float length, width;
    cout << "Enter length and width: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << length * width << endl;
}

// Function to calculate the area of a triangle
void areaOfTriangle() {
    float base, height;
    cout << "Enter base and height: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << 0.5 * base * height << endl;
}

// Function to calculate simple interest
void simpleInterest() {
    float principal, rate, time;
    cout << "Enter principal, rate and time: ";
    cin >> principal >> rate >> time;
    cout << "Simple Interest: " << (principal * rate * time) / 100 << endl;
}

// Function to convert Celsius to Fahrenheit
void celsiusToFahrenheit() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << (celsius * 9 / 5) + 32 << endl;
}

// Function to convert Fahrenheit to Celsius
void fahrenheitToCelsius() {
    float fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Temperature in Celsius: " << (fahrenheit - 32) * 5 / 9 << endl;
}

// Function to check Armstrong number
void armstrongNumber() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if ((int)result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
}

// Function to check perfect number
void perfectNumber() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num)
        cout << num << " is a perfect number." << endl;
    else
        cout << num << " is not a perfect number." << endl;
}

// Function to print ASCII value of a character
void printASCIIValue() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII value of " << c << " is " << int(c) << endl;
}

// Function to find GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to factorize a number
void factorizeNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function to reverse a string
void reverseString() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
}

// Function to count vowels and consonants in a string
void countVowelsConsonants() {
    string str;
    int vowels = 0, consonants = 0;
    cout << "Enter a string: ";
    cin >> str;
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++vowels;
        } else if ((c >= 'a' && c <= 'z')) {
            ++consonants;
        }
    }
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
}

// Function to concatenate two strings
void concatenateStrings() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    cout << "Concatenated string: " << str1 + str2 << endl;
}

// Function to calculate the length of a string
void stringLength() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Length of string: " << str.length() << endl;
}

// Function to check if two strings are anagrams
void checkAnagrams() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }
}

// Function to count words in a sentence
void countWordsInSentence() {
    string sentence;
    cout << "Enter a sentence: ";
    cin.ignore();
    getline(cin, sentence);
    istringstream iss(sentence);
    vector<string> words((istream_iterator<string>(iss)), istream_iterator<string>());
    cout << "Number of words: " << words.size() << endl;
}

int main() {

    helloWorld();
    addTwoNumbers();
    checkEvenOrOdd();
    largestAmongThree();
    swapTwoNumbers();
    cout << "Factorial of 5: " << factorial(5) << endl;
    fibonacciSeries();
    cout << "Is 7 prime? " << (isPrime(7) ? "Yes" : "No") << endl;
    reverseNumber();
    palindromeCheck();
    sumOfDigits();
    decimalToBinary();
    binaryToDecimal();
    basicCalculator();
    areaOfCircle();
    areaOfRectangle();
    areaOfTriangle();
    simpleInterest();
    celsiusToFahrenheit();
    fahrenheitToCelsius();
    armstrongNumber();
    perfectNumber();
    printASCIIValue();
    cout << "GCD of 56 and 98: " << gcd(56, 98) << endl;
    cout << "LCM of 56 and 98: " << lcm(56, 98) << endl;
    factorizeNumber();
    reverseString();
    countVowelsConsonants();
    concatenateStrings();
    stringLength();
    checkAnagrams();
    countWordsInSentence();

    return 0;
}
