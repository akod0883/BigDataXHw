import time


list = []
with open("sample.txt", "r") as a_file:
    for line in a_file:
        x = line.split()
        
        list.append(int(x[0]))

beginTime = time.time()
list.sort()
print("Sort in python took "  + str(time.time() - beginTime) + " seconds")

print(list)
