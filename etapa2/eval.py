import os


file_name = "teste.sh"
file = open(file_name, 'w')
for i in range(1,138,1):
    number = str(i)
    if(i<10):
        number = "0"+str(i)

    comand = "./etapa2 < E2/asl"+number+"\n"
    file.write(comand)
    comand = 'echo"'+number+'"'
    file.write(comand)
    file.write("\n")

file.close()