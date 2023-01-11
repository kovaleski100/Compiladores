import os


file_name = "teste.sh"
file = open(file_name, 'w')
for i in range(1,101,1):
    if(i<10):
        number = "00"+str(i)
    elif(i<100):
        number = "0"+str(i)

    comand = "./etapa1 < entrada_"+number+"> saida_"+number+".txt" 
    file.write(comand)
    file.write("\n")

file.close()


file_name = "diff.sh"
file = open(file_name, 'w')
for i in range(1,101,1):
    if(i<10):
        number = "00"+str(i)
    elif(i<100):
        number = "0"+str(i)

    comand = "diff saida_"+number+".txt aval_"+number+ ".tesh"
    command = "echo:" + '"' + number + '"'
    file.write(command)
    file.write("\n")
    file.write(comand)
    file.write("\n")

file.close()
