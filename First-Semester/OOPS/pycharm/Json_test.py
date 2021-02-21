import json


class user():
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def get_name(self):
        return self.name
    def get_age(self):
        return self.age
json_data = '''
{
    "users":[
    {
        "age":23,
        "name":"skg"
    },
    {
        "age":34,
        "name":"sonu",
    }
    ]
}'''
p_name=json.loads(json_data)
print(p_name)