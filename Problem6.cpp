/**
 *    @file    Problem6.cpp
 *    @author  Jaysheel Utekar (redchief)
 *    @date    9 July 2017
 *
 *    @brief   Project Euler - Problem 6 (Sum square difference)
 *
 *    @section Description
 *    The sum of the squares of the first ten natural numbers is,
 *    12 + 22 + ... + 102 = 385
 *    The square of the sum of the first ten natural numbers is,
 *    (1 + 2 + ... + 10)2 = 552 = 3025
 *    Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 *    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 *
 **/
#include <iostream>

int main(){
  int arr1[100];// = new int(100);
  int arr2[100]; // = new int(100);
  for (int i = 0; i<=100; i++) arr1[i] = i+1;
  for (int i = 0; i<=100; i++) arr2[i] = (i+1)*(i+1);
  int squ_sum,sum_squ = 0;
  int sum1 = 0;

  for(int i=0; i<=100; i++){
    sum1 += i;
  }
  for(auto& x: arr2){
    sum_squ += x;
  }

  squ_sum = sum1*sum1;

  std::cout<< "The sum of square is "<<sum_squ<<" \n";
  std::cout<< "The square of sum is "<<squ_sum<<" \n";
  std::cout<< "The difference is "<< squ_sum-sum_squ<< "\n";

  return 0;
}
