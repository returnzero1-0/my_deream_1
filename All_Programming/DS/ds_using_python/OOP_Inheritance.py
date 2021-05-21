class parent:
    def __init__(self,fname,lname):
        self.firstname=fname
        self.lastname=lname

    def show(self):
        print(self.firstname,self.lastname)

class child(parent):
    def __init__(self,fname,lname,age):
        parent.__init__(self, fname, lname)
        self.age=age

    def view(self):
        print(self.age,self.firstname,self.lastname)


ch=child("Dhaval","Khedkar",22)
ch.show()
ch.view()
