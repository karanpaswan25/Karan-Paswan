import requests as rq
import json
from time import sleep

while True:
	x=rq.get('http://worldtimeapi.org/api/timezone/asia/kolkata').text
	y=json.loads(x)
	data=y['datetime']
	#2023-12-19T12:01.55.593259+05:30

	y=data[0:4]
	mo=data[5:7]
	d=data[8:10]

	date=f"{d}/{mo}/{y}"
	time=data[11:19]
	print('date-->>',date)
	print('time-->>',time)

	sleep(2)