import os
from os import listdir
from os.path import isfile, join

file_name = "teste.sh"
file = open(file_name, 'w')

mypath = os.path.abspath(os.getcwd())
mypath = mypath + '/Pasta'

onlyfiles = [f for f in listdir(mypath) if isfile(join(mypath, f))]

for i in onlyfiles:
    if(".ref.dot" in i):
        continue
    filepath = 'Pasta' +"/" +i
    comand = "valgrind --leak-check=full --show-leak-kinds=all -s ./etapa3 < "+filepath +"> saida.txt"
    file.write(comand)
    command = 'echo:' + '"' + i + '"'
    file.write(comand)
    file.write("\n")

file.close()

# file_name = "diff.sh"
# file = open(file_name, 'w')
# for i in range(1,101,1):
#     if(i<10):
#         number = "00"+str(i)
#     elif(i<100):
#         number = "0"+str(i)

#     comand = "diff saida_"+number+".txt aval_"+number+ ".tesh"
#     command = "echo:" + '"' + number + '"'
#     file.write(command)
#     file.write("\n")
#     file.write(comand)
#     file.write("\n")

# file.close()
