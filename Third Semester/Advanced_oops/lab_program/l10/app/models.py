from django.db import models

# Create your models here.
class emp(models.Model):
	eid=models.CharField(max_length=20)
	name=models.CharField(max_length=20)
	add=models.CharField(max_length=20)