//Patrick Freehill 12/09/2021
//Tarrant County College: Dr. T
//Recursion: Recursion is when a function calls itself, and typically involves some sort of stop condition.


#include <bits/stdc++.h>


using namespace std;
int factorial(int);
void towerOfHanoi(int n, char fromRod, char toRod, char auxRod)



{
  if (n == 1)
  {
    cout << "Move disk 1 from " << fromRod << " to rod " << toRod << endl;
    return;
  }
  towerOfHanoi(n-1, fromRod, auxRod, toRod);
  cout << "Move disk " << n << " from rod " << fromRod << " to rod " << toRod << endl;
  towerOfHanoi(n-1, auxRod, toRod, fromRod);
}





int main()
{
  int value, fact;
  int diskNumber;
  cout << "Enter the number of disks: ";
  cin >> diskNumber;
    //int n = 3; //number of disks to solve
    towerOfHanoi(diskNumber, 'A', 'C', 'B'); //names of rods

    cout << "Factorial Solver" << endl << endl;
    cout << "Enter any number: ";
    cin >> value;
    fact=factorial(value);
    cout << "The factorial of value = " << fact;
    return 0;
}

int factorial(int n)
{
  if (n < 0)
  return(-1);

  if(n==0)
  return(1);

  else
  {
    return(n*factorial(n-1));
  }
}