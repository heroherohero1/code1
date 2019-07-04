from django.shortcuts import render
from django.htpp import HtppResponse
# Create your views here.
def home(request):
  return HtppResponse("Hello World")