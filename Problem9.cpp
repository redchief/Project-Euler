/**
 *    @file    Problem9.cpp
 *    @author  Jaysheel Utekar (redchief)
 *    @date    11 July 2017
 *
 *    @brief   Project Euler - Problem 9 (Special Pythagorean triplet)
 *
 *    @section Description
 *    A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 *    a2 + b2 = c2
 *    For example, 32 + 42 = 9 + 16 = 25 = 52.
 *    There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 *    Find the product abc.
 *
 **/
#include <iostream>
#include <math.h>

int main(){
  const int sum = 1000;
  int a,b,c,prod;
  /**
  * c = sum -a -b so we have a < b < c so we'd just have to find out a and b and check if the sum of a*a + b*b = c*c
  **/
  for (a = 1; a <= sum/3; a++){
      for (b = a + 1; b <= sum/2; b++){
          c = sum - a - b;
          if ( a*a + b*b == c*c ){
            prod = a*b*c;
            std::cout<<"The product of abc is "<<a<<"x"<<b<<"x"<<c<<" = "<<prod<<std::endl;
          }
        }
    }
  return 0;
}
