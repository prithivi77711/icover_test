/** Problem No: 1  | Palindromic Number **/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//function for reversing an integer
int reverseInt (int n) {
  int reversed = 0;
  while(n > 9) {
    reversed = reversed * 10 + (n % 10);
    n = n/10;
  }
  return reversed * 10 + n;
}

int main() {
  //getting the no of test cases
  int T;
  cin >> T;

  int i = 1;
  while(i <= T) {
    //getting n for every test case
    int n;
    cin >> n;
    
    //reversing the integer using reverseInt() function
    int reversed = reverseInt(n);

    //checking if n is palindrome or not
    if(n == reversed) 
      cout << i << ' ' << "Yes" << endl;
    else 
      cout << i << ' ' << "No" << endl;
      
    i++;
  }
}
