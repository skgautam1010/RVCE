from django.db import models

# Create your models here.
class Employee(models.Model):
    eid=models.CharField(max_length=50)
    name=models.CharField(max_length=50)
    add=models.CharField(max_length=50)
    