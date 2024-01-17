def display_month(month_number):
    if month_number < 1 or month_number > 12:
        print("Invalid month number. Please enter a number between 1 and 12.")
    else:
        months = [
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        ]
        month_name = months[month_number - 1]
        print("The corresponding month is:", month_name)

def main():
    month_number = int(input("Enter a month number (1 to 12): "))
    display_month(month_number)

if __name__ == "__main__":
    main()
