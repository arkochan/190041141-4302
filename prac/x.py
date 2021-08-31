lst= (input().split(','))

dict = {'Divisible by 2': [], 
        'Divisible by 3': [], 
        'Divisible by 5': [], 
        'None': []}

for i in lst:
    i=int(i)
    f=0
    if i%2==0:
        dict['Divisible by 2'].append(i)
        f=1
    if i%3==0:
        dict['Divisible by 3'].append(i)
        f=1
    if i%5==0:
        dict['Divisible by 5'].append(i)
        f=1
    if f==0: 
        dict['None'].append(i);
print(dict)