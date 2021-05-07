def createStack():
    stack = []
    return stack

def isEmpty(stack):
    if(len(stack) == 0):
        return True
    return False

def push(stack, data):
    stack.append(data)

def pop(stack):
    if(not(isEmpty(stack))):
        stack.pop()
    


stack = createStack()
push(stack, 5)
push(stack, 5)
push(stack, 5)
push(stack, 5)
push(stack, 5)
pop(stack)
push(stack, 5)