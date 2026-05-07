#include <iostream>
using namespace std;

// 1. Your Class Definition
class Calculator {
  public:
    int getMagicNumber() {
        return 42; 
    }
};

// 2. The Main Function to execute the code
int main() {
    // Create an instance (object) of your class
    Calculator myCalc;

    // Call the method and store the result in a variable
    int result = myCalc.getMagicNumber();

    // Print the result to the screen
    cout << "The Magic Number is: " << result << endl;

    return 0;
}