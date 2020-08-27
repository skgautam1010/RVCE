class Person():
    def __init__(self,f_name,l_name,age,_m_name):
        self.f_name = input( "enter your name" )
        self._m_name = input( "enter your middle name" )
        self.l_name = input( "enter your last name" )
        self.age = int( input( "enter your age" ))
    def display(self):
        print("this is person:",self.f_name,self.__m_name,self.l_name,self.age)

    def define(self):
        print( "this is person's details: ", self.f_name, self._m_name, self.l_name, 'his age is:', self.age )



class Student(Person):
    def __init__(self,f_name,l_name,age,_maths,it,physics,__m_name):
        super().__init__(f_name,l_name,age,__m_name)
        self._maths=int(input("enter maths marks"))
        self.it=int(input("enter it marks"))
        self.physics=int(input("enter physics marks"))
    def getMath(self):
        return self._maths
    def setMath(self,maths):
        self._maths=maths
    def setMiddile(self,middile):
        self.__m_name=middile
    def getMiddile(self):
        return self.__m_name

    def define(self):
        print("this is student's details: ",self.f_name,self._m_name,self.l_name,'his age is:',self.age)
    def average(self):
        return round((self._maths+self.physics+self.it)/3)
s = Student("sonu","kumar","gautam",25,78,89,67)
s.define()
s.setMath(34)
print(s.getMath())
s.setMiddile('kumar')
print(s.getMiddile())
s.define()
print("average of three subjects",s.average())
