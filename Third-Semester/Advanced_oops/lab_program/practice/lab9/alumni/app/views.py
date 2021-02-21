from django.shortcuts import render
from django.views.generic import TemplateView

# Create your views here.
class Register(TemplateView):
	def get(self,request,*args,**kwargs):
		return render(request,'index.html')


class Display(TemplateView):
	def get(self,request,*args,**kwargs):
		usn=request.GET['usn']
		name=request.GET['name']
		add=request.GET['add']

		return render(request,'display.html',{'usn':usn,'name':name,'add':add})

