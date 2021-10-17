""" Remove duplicates """
test_list = [1, 2, 4, 3, 3, 2, 5, 7]

res = []
for i in test_list:
    if i not in res:
        res.append(i)

print(str(res))

""" Remove duplicates using Set."""
x = set(test_list)
# It also arranges in ascending order
print(list(x))
