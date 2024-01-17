def search_name_by_number(phonebook, number):
    for name, phone in phonebook.items():
        if phone == number:
            return name
    return "Number not found in the phonebook."

def search_number_by_name(phonebook, name):
    if name in phonebook:
        return phonebook[name]
    return "Name not found in the phonebook."

def main():
    phonebook = {
        "John": "1234567890",
        "Jane": "9876543210",
        "Alice": "5555555555"
        # Add more entries here
    }

    search_choice = input("Search by name (N) or number (P)? ").upper()
    
    if search_choice == "N":
        search_name = input("Enter a name to search: ")
        result = search_number_by_name(phonebook, search_name)
        print("Phone Number:", result)
    elif search_choice == "P":
        search_number = input("Enter a phone number to search: ")
        result = search_name_by_number(phonebook, search_number)
        print("Name:", result)
    else:
        print("Invalid choice. Please enter 'N' or 'P'.")

if __name__ == "__main__":
    main()
