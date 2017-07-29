/**
 *    @file    Problem4.cpp
 *    @author  Jaysheel Utekar (redchief)
 *    @date    9 July 2017
 *
 *    @brief   Project Euler - Problem 4 (Largest palindrome product)
 *
 *    @section Description
 *    A palindromic number reads the same both ways.
 *    The largest palindrome made from the product of two 2-digit
 *    numbers is 9009 = 91 × 99.
 *
 *    Find the largest palindrome made from the product of two 3-digit numbers.
 *
 **/
#include <iostream>

bool is_palindrome(int prod){
  int num = prod;
  int dig,rev =0;
  do{
    dig = num%10;
    rev = (rev *10) + dig;
    num = num /10;
  }while(num !=0);

  if (rev == prod)
    return true;
  else
    return false;
}


int main(){
  auto l_pal = 0;
  for(int i=100; i<1000; i++){
    for(int j=100; j<1000; j++){
      auto prod = i*j;
      //std::cout << prod << "\n";
      if (is_palindrome(prod) == 1 && prod > l_pal){
        l_pal = prod;
        //std::cout<<"this is a palindrome" << prod;
        }
      }
    }
  std::cout << l_pal << " is the largest palindrome product of two 3-digit number \n";
}
