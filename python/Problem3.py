"""
Project Euler : Largest Prime Factor
Problem # 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
"""

def main():
    num = 600851475143
    p = 2
    while p * p < num:
        while num%p == 0:
            num = num/p
        p += 1
    return num


if __name__ == "__main__":
    print main()
