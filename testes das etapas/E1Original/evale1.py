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

    comand = "diff saida_"+number+".txt aval_"+number 
    file.write(comand)
    file.write("\n")

file.close()

for _, _, arquivos in os.walk('/Users/felipe.bastos/Desktop/ProjetosPessoais/ufrgs/Compiladores/E1'):
    for i in range(len(arquivos)):
        if(arquivos[i].endswith('.tesh')):
            fileTesh = open(arquivos[i], 'r+')
            text = fileTesh.readlines()
            if(len(text) > 0):
                text.pop(0)
                text.pop(1)
                text.remove('! timeout 1\n')
            print(text)
            fileTesh2 = open("/Users/felipe.bastos/Desktop/ProjetosPessoais/ufrgs/Compiladores/TestesEvals/" + arquivos[i], 'w+')
            fileTesh2.writelines(text)
            fileTesh.close()
            fileTesh2.close()
