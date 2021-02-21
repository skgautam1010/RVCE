from django.shortcuts import render,redirect
from django.views.generic import TemplateView
from .models import Employee
# Create your views here.

class index(TemplateView):
    template_view="index.html"


class insert(TemplateView):
    def get(self,request,*args,**kwargs):
        eid=request.GET['eid']
        name=request.GET['name']
        add=request.GET['add']

        d=Employee(eid=eid,name=name,add=add)
        d.save()
        return redirect('show')


def show(request):
    sh=Employee.objects.all()
    return redirect(request,'display.html',{'sh':sh})
    