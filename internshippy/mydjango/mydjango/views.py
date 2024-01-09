from django.http import HttpResponse

def home(request):
	return HttpResponse('happy birthday karan')
def contact(request):
	return HttpResponse('65666556')