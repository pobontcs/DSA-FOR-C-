class node:
    def __init__(self, val):
        self.data = val
        self.next = None

class brain:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = node(data)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def display(self):
        temp = self.head
        while temp:
            print(temp.data, end=" ")
            temp = temp.next
    def delete(self,value):
        temp=self.head
        if temp is None:
            return
        if temp.data is value:
            temp=temp.next
        while temp.next:
            if temp.next.data==value:
                temp.next=temp.next.next
                return
            temp=temp.next
            
            
        
        
        
if __name__ == "__main__":
    x = brain()
    x.append(1)
    x.append(2)
    x.append(3)
    x.append(4)
    x.delete(4)
    x.display()
