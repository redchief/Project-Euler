"""
Project Euler : Largest Palindrome Product
Problem # 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
"""
def is_palindrome(prod):
    prod = str(prod)
    rev = reversed(prod)
    if list(prod) == list(rev):
        return True
    else:
        return False

def main():
    l_pal = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            prod = i*j
            if is_palindrome(prod) and prod > l_pal:
                l_pal = prod
    print ("%d is the largest palindrome product "%l_pal)

if __name__ == "__main__":
    main()
