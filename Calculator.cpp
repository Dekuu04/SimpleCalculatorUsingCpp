#include <iostream>
#include <cmath>

using namespace std;
 
int main()
{
    while (true)
    {
      double num1, num2;
      int operation;
      cout << "\nPlease enter your operation from the list down below:\n";
      cout << "1: Sum\n2: Substraction\n3: Multiplication\n4: Division\n5: Square Root\n\n6: EXIT" << endl;

      cout << "-> ";
      cin >> operation;

      if (operation != 6) {
        // prompt the user for the first number
        cout << "\nPlease enter the first number.\n";
        cout << "-> ";
        cin >> num1;

        if (operation == 5) {
          cout << "\nResult is: " << sqrt(num1) << endl;
        }
        // otherwise, prompt the user for the second number
        else{
          cout << "\nPlease enter the second number.\n";
          cout << "-> ";
          cin >> num2;

          // use a switch statement instead of a million if-statements. this gives us mamy advantages, mostly in terms of performance
          switch (operation)
          {

              // if the operation number was 1, then calculate the sum of both first and second numbers
              case 1:
                  cout << "\nResult is: " << num1 + num2 << endl;
                  break;
    
              // if the operation number was 2, then calculate the substraction of both first and second numbers
              case 2:
                  cout << "\nResult is: " << num1 - num2 << endl;
                  break;
    
              // if the operation number was 3, then calculate the multiplication of both first and second numbers
              case 3:
                  cout << "\nResult is: " << num1 * num2 << endl;
                  break;

              // if the operation number was 4, then calculate the division of both first and second numbers
              case 4:
                  cout << "\nResult is: " << num1 / num2 << endl;
                  break;
                  
              default:
                  cout << "\nWrong operation.\n";
                  break;
            }
          }
        }
      else{
          return 0;
      }

    }
}