class Stack:
    def __init__(self) :
        self.stack=[]

    def push(self,x):
        self.stack.append(x)
    def pop(self):
        if self.is_empty():
            return False
        self.stack.pop()
    def top(self):
        if self.is_empty():
            return "Empty"
        return self.stack[-1]
    def is_empty(self):
        return len(self.stack)==0
st = Stack()
st.push(1)
st.push(2)
st.push(3)
st.push(4)
st.pop()
print(st.top())
