/**
 * Demo file for the exercise on numbers with units
 *
 * @author Erel Segal-Halevi
 * @since 2019-02
 * 
 * Edited by Tal Zichlinsky
 * @since 2022-02
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "Matrix.hpp"
using namespace zich;

int main() {
  
  std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
  std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
  std::vector<double> arra = {3, 0, 0, 0, 3, 0, 0, 0, 3, 4, 8, 1};
  Matrix a{identity, 3, 3};  // constructor taking a vector and a matrix size
  cout << a << endl;
  cout << +a << endl;
  /* prints [1 0 0]
            [0 1 0]
            [0 0 1]*/

  cout << (-a) << endl;
  /* prints [-1 0 0]
            [0 -1 0]
            [0 0 -1]*/
  cout << (3*a) << endl;
  /* prints [3 0 0]
            [0 3 0]
            [0 0 3]*/

  Matrix b{arr, 3, 3};
  cout << (a<b) << endl;
  Matrix c{arra, 3, 4};
  // cout << (a<c) << endl;
  // b=++a;
  // cout << a << endl;
  // cout << b << endl;
  a *= -3;
  cout << (a+b) << endl;  // prints the 0 matrix
  cout << (b-a) << endl;
  /* prints [6 0 0]
            [0 6 0]
            [0 0 6]*/
  std::vector<double> arr2 = {3, 1, 4, 5, 2, 0};
  std::vector<double> arr3 = {3, 2, 0, 8, 3, 0};
  Matrix d{arr2, 3, 2};
  Matrix e{arr3, 2, 3};
  // cout<< (d*e) << endl;
  cout << "End of demo!" << endl;
  return 0;
}
