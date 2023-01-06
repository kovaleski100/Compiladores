import os

for _, _, arquivos in os.walk('/Users/felipe.bastos/Desktop/ProjetosPessoais/ufrgs/Compiladores/E1'):
    for i in range(len(arquivos)):
        if(arquivos[i].endswith('.tesh')):
            fileTesh = open(arquivos[i], 'r+')
            text = fileTesh.readlines()
            if(len(text) > 0):
                text.pop(0)
                text.pop(1)
                text.remove('! timeout 1\n')
                text.remove("> ")
            print(text)
            fileTesh2 = open("/Users/felipe.bastos/Desktop/ProjetosPessoais/ufrgs/Compiladores/TestesEvals/" + arquivos[i], 'w+')
            fileTesh2.writelines(text)
            fileTesh.close()
            fileTesh2.close()