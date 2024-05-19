class node:
    def __init__(self,val):
        self.data=val
        self.next=None
        self.prev=None
    def insertion(self,val):
        root=node(val)
        