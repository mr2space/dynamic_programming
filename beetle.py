from math import sqrt , pow
number = int(input())
position = []

for i in range(3*number):
    position.append(int(input()))

coord =[]
count = 1
ele = []
for i in position:
    ele.append(i)
    if count%3 == 0:
        coord.append(ele)
        ele = []
    count+=1

print(coord)
distance = 0
for i in range(number):
    value = False
    if i == number - 2:
        value = coord[i][0] == coord[i+1][0] or coord[i][1] == coord[i +
                                                                     1][1] or coord[i][2] == coord[i+1][2]
    if bool(value):
        tmp = sqrt(
            pow((coord[i][0]-coord[i+1][0]), 2)+pow((coord[i][1]-coord[i+1][1]), 2) + pow((coord[i][2]-coord[i+1][2]), 2)
        )
        print(tmp)
        distance = distance + (2*3.14*tmp)/6
    

print(distance)
