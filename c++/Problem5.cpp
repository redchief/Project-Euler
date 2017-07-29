/**
 *    @file    Problem5.cpp
 *    @author  Jaysheel Utekar (redchief)
 *    @date    9 July 2017
 *
 *    @brief   Project Euler - Problem 5 (Smallest multiple)
 *
 *    @section Description
 *    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 *
 *
 **/
#include <iostream>

bool is_divisible(int prod){
  for(int i=1; i<=20; i++){
    //std::cout << prod%;
    if(prod%i != 0){
      return false;}
  }
  return true;
}

int main(){
  bool flag = true;
  int num = 21;
  while (flag == true){

      if(is_divisible(num) == 1){
        std::cout<<num<< " is the smallest Number divisible by numbers from 1 to 20.\n";
        break;
      }else{
        num += 1;
        }
    }
  return 0;
}
