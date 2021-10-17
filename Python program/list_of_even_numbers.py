"""print a list of even numbers from 1 to 10"""

# One liner code
even_num = [num for num in range(1, 11) if num % 2 == 0]
print(even_num)

# method - 2
even_num = []
for num in range(1, 11):
    if num % 2 == 0:
        even_num.append(num)
    else:
        continue
print(even_num)
