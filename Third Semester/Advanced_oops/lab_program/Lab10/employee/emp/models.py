from django.db import models

# Create your models here.

class Employee(models.Model):
    eid=models.CharField(max_length=150)
    name=models.CharField(max_length=100)
    add=models.CharField(max_length=100)


    def __str__(self):
        return self.name

