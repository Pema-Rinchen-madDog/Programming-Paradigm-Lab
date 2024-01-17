def reverse_integer(n):
    reversed_n = 0
    while n > 0:
        digit = n % 10
        reversed_n = reversed_n * 10 + digit
        n //= 10
    return reversed_n

def main():
    number = int(input("Enter an integer: "))
    reversed_number = reverse_integer(number)
    print("Reversed integer:", reversed_number)

if __name__ == "__main__":
    main()
