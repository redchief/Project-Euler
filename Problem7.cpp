/**
 *    @file    Problem7.cpp
 *    @author  Jaysheel Utekar (redchief)
 *    @date    9 July 2017
 *
 *    @brief   Project Euler - Problem 7 (10001st prime)
 *
 *    @section Description
 *    By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *    What is the 10001st prime number?
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
  int i =2; //We start from 2 coz it is the first prime number
  int count = 0;
  int prime =2;
  while (true){
      if (is_prime(i) == true){
        prime = i;
        count +=1;
      }

      if (count == 10001){
        std::cout<<"The "<< count <<" prime number is "<<prime << "\n";
        break;
      }
      i +=1;
    }
  return 0;
}
