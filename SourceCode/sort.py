import time

# this list will contain the sorted results
list = []
# Note: the text file must be in the same directory of this script
with open("sample.txt", "r") as a_file:
    for line in a_file:
        # split each line by ' ' 
        x = line.split()
        # The first coloumn should be the integer
        list.append(int(x[0]))

# begin timer
beginTime = time.time()
list.sort()
# print total time
print("Sort in python took "  + str(time.time() - beginTime) + " seconds")

print(list)
