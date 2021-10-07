def mergeSort(my_array):
    if len(my_array) > 1:
        mid = len(my_array)//2
        Left_array = my_array[:mid]
        Right_array = my_array[mid:]
        mergeSort(Left_array)
        mergeSort(Right_array)
  
        i = j = k = 0

        while i < len(Left_array) and j < len(Right_array):
            if Left_array[i] < Right_array[j]:
                my_array[k] = Left_array[i]
                i += 1
            else:
                my_array[k] = Right_array[j]
                j += 1
            k += 1
  
        while i < len(Left_array):
            my_array[k] = Left_array[i]
            i += 1
            k += 1
  
        while j < len(Right_array):
            my_array[k] = Right_array[j]
            j += 1
            k += 1

def printList(my_array):
    for i in range(len(my_array)):
        print(my_array[i],end=" ")
    print(" ")

if __name__ == '__main__':
    my_array = [10, 78, 23, 15, 63, 71, 90]
    print("Input Array -")
    printList(my_array)
    mergeSort(my_array)
    print("Array after sorting is: ")
    printList(my_array)
  