import requests as rq
s=rq.get('http://worldtimeapi.org/api/timezone').text
print(s)
