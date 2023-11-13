float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here



   double calculate(char operation, double num1, double num2) {
    switch(operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                exit(0);
            }
        default:
            cout << "Error: Invalid operation." << endl;
            exit(0);
    }
}

   int main() {
    char operation;
    double num1, num2;
   

    cout << "Enter the arithmetic operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    double result = calculate (operation, num1, num2);
    cout << "Result: " << result << endl;
   return result;
}
