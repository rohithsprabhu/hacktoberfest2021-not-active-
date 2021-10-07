# Python3 program to swap elements at

# given positions

 

# Swap function

def swapPositions(list, pos1, pos2):

 

    # Storing the two elements

    # as a pair in a tuple variable get

    get = list[pos1], list[pos2]

      

    # unpacking those elements

    list[pos2], list[pos1] = get

      

    return list

 

# Driver Code

List = [23, 65, 19, 90]

 

pos1, pos2  = 1, 3

print(swapPositions(List, pos1-1, pos2-1))
