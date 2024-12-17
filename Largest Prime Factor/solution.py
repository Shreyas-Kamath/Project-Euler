import math

def is_prime(n: int) -> bool:
    for num in range(2, int(math.sqrt(n)) + 1):
        if n % num == 0:
            return False
    return True

def largest_prime_factor(x: int) -> int:
    largest_factor = 0
    for num in range(2, int(math.sqrt(x)) + 1):
        while x % num == 0:
            largest_factor = num
            x //= num
    if x > 1:
        largest_factor = x
    return largest_factor

x = 600851475143
print(largest_prime_factor(x))
