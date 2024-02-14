#this program take the user input for the side leghts and prints out the bottom half of the square

side_length = int(input("Enter the side length: "))

for row in range(side_length, -1, -1):
    for column in range(row, side_length):
        print("*", end = " ")

    print()
   