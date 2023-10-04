//04. write a program of Addition,subtraction,Division,multiplication
//   using Constructor.


#include <iostream>
using namespace std;
 
int main(){
    /* Variable declation */
    int x, y;
    int sum, subtraction, product, modulo;
    float quotient;
     
    // Taking input from user and storing it 
 // in x and y 
    cout << "Enter First Number\n";
    cin >> x;
    cout << "Enter Second Number\n";
    cin >> y;
     
    // Addition
    sum = x + y;
    // Subtracting 
    subtraction = x - y;
    // Multiplying 
    product = x * y;
    // Dividing two numbers by typecasting one operand to float
    quotient = (float)x / y;
    // returns remainder of after an integer division 
    modulo = x % y;
     
    cout << "\nSum = " << sum;
    cout << "\nDifference  = " <<subtraction;
    cout << "\nMultiplication = " << product;
    cout << "\nDivision = " << quotient;
    cout << "\nRemainder = " << modulo;
     
    return 0;
}