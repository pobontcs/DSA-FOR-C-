class queue:
    def __init__(self):
        self.items=[]
    def end_queue(self,x):
        self.items+=[x]
    def dequeue(self):
        if self.is_empty():
            return
        else:
            self.items.pop(0)
    def peek(self):
        if self.is_empty():
            return
        else:
            return self.items[0]
    def print(self):
        print(self.items) 
    def is_empty(self):
        return len(self.items) == 0

x=queue()
x.end_queue(1)
x.end_queue(2)
x.end_queue(3)
x.end_queue(4)
print(x.peek())
x.dequeue()
print(x.peek())
x.dequeue()
x.print()
