from itertools import groupby
num = input()
for x,c in groupby(num):
    print('(' + str(len(list (c))) + ', ' + x+ ')', end = ' ')