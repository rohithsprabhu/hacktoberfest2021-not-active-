def bubbleSort( my_array ):
    n = len( my_array )

    for i in range( n - 1 ) :
        flag = 0

        for j in range(n - 1) :
            
            if my_array[j] > my_array[j + 1] : 
                temp = my_array[j]
                my_array[j] = my_array[j + 1]
                my_array[j + 1] = temp
                flag = 1

        if flag == 0:
            break

    return my_array

input_array = [21,6,9,33,3] 

result = bubbleSort(input_array)

print (result)