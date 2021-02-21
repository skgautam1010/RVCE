try:
    class Employee():
        def __init__(self,name,adress,basic_sal,hra,da,other_deduction):
            self.name=(input("enter your name"))
            self.address='asdert'
            self.bsal=int(input("enter the basic salary"))
            self.hra=int(input("enter the hra"))
            self.da=int(input("enter the da"))
            self.other_deduction=int(input("enter the miscellaneous expenses"))
        def calculate(self):
            self.gross_sal=(self.bsal+self.hra+self.da)
            print(self.name,"\n",self.address)
            print(self.gross_sal)
            self.next_sal=(self.gross_sal-self.other_deduction)
            print(self.next_sal)
        def f_name(self,name):
            self.name=name
    class Emp(Employe):
        pass
    p=Employee('name','adress',32,45,34,45)
    p.calculate()
    p.f_name('skg')
    p.calculate()
except NameError:
    print("name not defined")
except StandardError:
    print("standard error")



