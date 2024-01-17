class NumberManager:
    def __init__(self):
        self.numbers = []

    def read_data(self, n):
        print("Enter {} numbers:".format(n))
        for _ in range(n):
            num = float(input())
            self.numbers.append(num)

    def insertion_sort(self):
        for i in range(1, len(self.numbers)):
            key = self.numbers[i]
            j = i - 1
            while j >= 0 and key < self.numbers[j]:
                self.numbers[j + 1] = self.numbers[j]
                j -= 1
            self.numbers[j + 1] = key

    def display_data(self):
        if not self.numbers:
            print("No data to display.")
        else:
            print("Sorted numbers:")
            for num in self.numbers:
                print(num)

# Create an instance of the NumberManager class
num_manager = NumberManager()

# Read, sort, and display data
n = int(input("Enter the number of values: "))
num_manager.read_data(n)
num_manager.insertion_sort()
num_manager.display_data()
