rows = int(input("Enter number of rows:"))
for i in range(0, rows):
    # nested loop for each column
    for j in range(0, i + 1):
        # print star
        print("*")
    # new line after each row
    print("\r")
