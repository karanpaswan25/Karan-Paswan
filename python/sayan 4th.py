# def calculater(a1,a2):
#     return (f'add = {a1+a2}\nsubraction = {a1-a2} \nmultiplication = {a1*a2} \ndivide = {a1/a2}')
# print(calculater(10,5))

# odd[]
# 
# def ff(a,b):
#     even=[]
#     odd=[]
#     for i in range (0,b):
#         if(i%2==0):
#             even.append(i)
#         else:
#             odd.append(i)
    
#     print (f'even = {even} \n odd = {odd}')
#     r=[]
#     for j in range (0,b):
#         r=r.append(even[i]-odd[i])


def ff(a,b):
    even=[]
    odd=[]
    for i in range (0,b):
        if(i%2==0):
            even.append(i)
        else:
            odd.append(i)
    
    print (f'even = {even} \n odd = {odd}')
    r=[]
    for j in range (0,b):
        r=r.append(even[i]-odd[i])


a=1
b=100
print(ff(a,b))
# ff(a,b)