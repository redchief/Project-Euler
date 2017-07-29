/**
 *    @file    Problem3.cpp
 *    @author  Jaysheel Utekar (redchief)
 *    @date    9 July 2017
 *
 *    @brief   Project Euler - Problem 3 (Largest prime factor)
 *
 *    @section Description
 *    The prime factors of 13195 are 5, 7, 13 and 29.
 *     What is the largest prime factor
 *     of the number 600851475143 ?
 *
 *
 *
 **/
#include <iostream>

bool is_prime(int no){
  for(int i=2; i<no; i++){
    if(no%i == 0){
      return false;
    }
  }
  return true;
}


int main(){
  auto num = 600851475143;
  auto prime = 2;
  for(int i=2; i <= num; i++){
    if (is_prime(i) == true){
      if (i > prime && num%i ==0){
          prime = i;
          std::cout << "Now the highest prime number is "<< prime << "\n";
        }
      }
    }
  std::cout<< prime<< " is the prime number we want";
}
