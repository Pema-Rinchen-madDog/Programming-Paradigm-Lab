def is_prime(n):
    if n <= 1:
        return 0  # 0 and 1 are not prime numbers
    if n <= 3:
        return 1  # 2 and 3 are prime numbers
    if n % 2 == 0 or n % 3 == 0:
        return 0  # Any number divisible by 2 or 3 is not prime

    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return 0  # If divisible by i or i + 2, not prime
        i += 6

    return 1

def main():
    number = int(input("Enter an integer: "))
    if is_prime(number):
        print("The number is prime.")
    else:
        print("The number is not prime.")

if __name__ == "__main__":
    main()
