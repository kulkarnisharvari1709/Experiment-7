# Experiment-7

Code 1
📝 Purpose:
To understand how to declare an array and access its elements using loop structures in C++.

📖 Theory:
An array is a collection of homogeneous data elements stored in contiguous memory locations. In C++, arrays are accessed using indices that start from zero. To print the contents of an array, a loop is used to iterate through each index, allowing the user to read or manipulate values individually.

⚙️ Software & Tools Used:
C++ Compiler

🧠 Concepts Applied:
Array declaration
Array indexing
Loop structures (for loop)

🔍 Algorithm :
The algorithm initializes an array with a set of values. It then uses a loop to traverse the array from the first element to the last, printing each element using its index. Since arrays are indexed sequentially, accessing and printing each element using a loop ensures efficient and structured output.

Code 2
📝 Purpose:
To locate the position of a specific number in a predefined array using linear search.

📖 Theory:
Searching is the process of finding the presence and position of an element in a data structure. Linear search compares the target value with each array element sequentially until it is found or the end of the array is reached.

⚙️ Software & Tools Used:
C++ Compiler

🧠 Concepts Applied:
Linear search
Conditional statements
Boolean flag

🔍 Algorithm :
The logic involves scanning the array from beginning to end. During traversal, each element is compared to the target value. If a match is found, its index is reported, and the search is terminated. If the entire array is traversed without a match, a "not found" message is displayed. A boolean flag can be used to track whether the number was found.

Code 3
📝 Purpose:
To compute the total sum and average of numerical values stored in an array.

📖 Theory:
Summation is a fundamental array operation used in data analysis. The average is calculated by dividing the sum of elements by the total number of elements. Looping is used to accumulate the sum from each element of the array.

⚙️ Software & Tools Used:
C++ Compiler

🧠 Concepts Applied:
Looping structures
Arithmetic operations
Integer to float conversion

🔍 Algorithm :
Each element in the array is added to a running total using a loop. Once all values have been added, the average is obtained by dividing the total sum by the number of elements. Typecasting is used to ensure precision in the average result.

Code 4
📝 Purpose:
To identify the smallest and largest numbers in a given array.

📖 Theory:
Finding the minimum and maximum values is a common operation in statistical analysis. It involves comparing each element to a currently known min or max value and updating it if a smaller or larger value is found.

⚙️ Software & Tools Used:
C++ Compiler

🧠 Concepts Applied:
Conditional logic
Looping
Comparison operators

🔍 Algorithm :
The algorithm starts by assuming the first element is both the minimum and maximum. As it loops through the array, it compares each element with the current min and max values. If a smaller or larger element is found, the respective variable is updated. The final min and max values are then displayed.

Code 5
📝 Purpose:
To understand and demonstrate multiple methods of string declaration and initialization in C++.

📖 Theory:
Strings in C++ can be represented in two ways: using character arrays (C-style strings) and using the string class from the Standard Template Library (STL). Each has its own syntax and use-cases.

⚙️ Software & Tools Used:
C++ Compiler

🧠 Concepts Applied:
C-style strings
C++ string class
Initialization methods

🔍 Algorithm :
The code illustrates three methods of declaring strings: using character arrays, using string objects with assignment, and using constructor initialization. Each method is displayed to the user to highlight syntax differences and usability.

Code 6
📝 Purpose:
To concatenate two or more strings into one.

📖 Theory:
String concatenation is the process of joining two or more strings. In C++, this can be done using the + operator or the append() function provided by the string class.

⚙️ Software & Tools Used:
C++ Compiler

🧠 Concepts Applied:
Operator overloading
String manipulation

🔍 Algorithm :
Two strings are defined and then concatenated using the + operator. This operation internally creates a new string with the contents of both operands combined. The result is stored and displayed.

Code 7
📝 Purpose:
To develop a C++ program that prints a string in reverse order using basic string manipulation techniques.

📖 Theory:
Reversing a string is a fundamental operation in string processing, useful in tasks such as palindrome checking, encoding, and data structure manipulation. In C++, a string is a sequence of characters indexed from 0 to n-1. To reverse it, we can use a loop that starts from the last character and prints each character one by one until the first is reached.

This approach makes use of indexing and string length, both of which are supported by the string class in C++. It’s efficient and demonstrates control flow through loops and basic string handling.

⚙️ Software & Tools Used:
C++ compiler

🧠 Concepts Applied:
String declaration and indexing
Looping (for loop, reverse order traversal)
String length property

🔍 Algorithm :
The algorithm starts by accepting or initializing a string. It calculates the length of the string using the .length() method and then uses a loop to iterate from the last character to the first. Each character is accessed by its index and printed to reverse the original string. The original string remains unchanged during the process.

Code 8
📝 Purpose:
To check whether a given string is a palindrome using C++.

📖 Theory:
A palindrome is a word, phrase, or number that reads the same backward as forward (e.g., "radar", "madam", "121"). To determine if a string is a palindrome, one can compare the original string with its reversed version. If both are equal, the string is a palindrome.

In C++, string reversal can be done using a loop or built-in functions. Once reversed, a simple comparison with the original string tells us whether it is a palindrome.

⚙️ Software & Tools Used:
C++ compiler

🧠 Concepts Applied:
String handling and manipulation
Looping constructs
Condition checking (if statement)
String comparison

🔍 Algorithm :
The algorithm starts by accepting a string input from the user. It then constructs a new string that contains the characters of the original string in reverse order. This is achieved through reverse traversal using a loop. After generating the reversed string, it is compared with the original string using the equality (==) operator. If both strings are the same, the input is a palindrome; otherwise, it is not.

