class BinaryTree:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None
        
def treeinput():
    data=int(input())
    if data==-1:
        return None
    root=BinaryTree(data)
    leftdata=treeinput()
    rightdata=treeinput()
    root.left=leftdata
    root.right=rightdata
    return root
        
def printTree(root):
    if root==None:
        return
    print(root.data,end=":")
    if root.left!=None:
        print("L",root.left.data,end=",")
    if root.right!=None:
        print("R",root.right.data,end="")
    print()
    printTree(root.left)
    printTree(root.right)
    
def height(root):
    if root==None:
        return 0
    return max(height(root.left),height(root.right)) + 1

def isBalanced(root):
    if root==None:
        return True
    leftheight=height(root.left)
    rightheight=height(root.right)
    if leftheight-rightheight>1 or rightheight-leftheight>1:
        return False
    leftbalanced=isBalanced(root.left)
    rightbalanced=isBalanced(root.right)
    if leftbalanced and rightbalanced:
        return True
    else:
        return False
    
root=treeinput()
print("BINARY TREE IS :")
printTree(root)
print("BINARY TREE IS BALANCED : ",isBalanced(root))