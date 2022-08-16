/** Problem No: 2 | Division by 3 **/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//function to calculate the sum of digits
int sumOfDigits(int k) {
  int sum = 0;
  while(k > 9) {
    sum += k % 10;
    k /= 10;
  }
  return sum + k;
}

int main() {
  //getting the number of test cases
  int T;
  cin >> T;

  //running the task for given no of test cases
  int i = 1;
  while(i <= T) {
    //getting A and B
    int A, B, cnt = 0;
    cin >> A >> B;

    if (A == 0 && B == 0) {
      cout << i << ' ' << 0 << endl;
      i++;
      continue;
    }

    for(int j = A; j <= B; j++) {
      
      //finding the sum of the digits of the integer
      int sum = 0;
      for(int k = 1; k <= j; k++) {
        if(k < 10) sum += k;
        else sum += sumOfDigits(k);
      }

      //checking if the sum is divisible by 3
      if(sum % 3 == 0) cnt++;
    }

    //printing the result
    cout << i << ' ' << cnt << endl;
    i++;
  }
}
