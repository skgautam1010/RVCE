class person:
    number_of_person=0#class attributes
    def __init__(self,f_name):
        self.f_name=input("enter first name\n")#instance attributes
for i in range(5):
    p1=person('n')
    person.number_of_person+=1
print(p1.f_name)
print(person.number_of_person)
class p:
    class_attribute=0
    def __init__(self):
        pass
p1=[]
for i in range(5):
    p1.append(p)
    p1[i].class_attribute+=1
print(p1[1].class_attribute)
