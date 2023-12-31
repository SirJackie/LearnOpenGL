import os

def FindAllTheCpp():
    cpps = []
    for root,dirs,files in os.walk("../"):
        for file in files:
            if file[-4:] == ".cpp" and os.path.join(root,file)[3:19] != "WindowsSimuLayer":
                cpps.append(os.path.join(root,file))
    return cpps

def GenerateMakefile(middleContent):
    topContent = '''# Target and Object Declarations
Target = LearnOpenGL.out
'''

    bottomContent = '''
TargetGeneratingArguments = -L/usr/X11R6/lib -lGL -lglut -lGLEW -lm
ObjectGeneratingArguments = 

Compiler := g++
RMRF := rm -rf

$(Target):$(Objects)
	$(Compiler) $^ -o $@ $(TargetGeneratingArguments)

%.o:%.cpp
	$(Compiler) -c $^ -o $@ $(ObjectGeneratingArguments)

.PHONY:
generateMyself:
	python3 GenerateMakefile.py

clear_o:
	$(RMRF) $(Target) $(Objects)

run_o:
	make
	chmod 777 $(Target)
	./$(Target)

clear:
	make generateMyself
	make clear_o

run:
	make generateMyself
	make run_o

installDependencies:
	sudo apt-get install build-essential libgl1-mesa-dev
	sudo apt-get install freeglut3-dev
	sudo apt-get install libglew-dev libsdl2-dev libsdl2-image-dev libglm-dev libfreetype6-dev
'''

    final = topContent + middleContent + bottomContent
    return final

def GenerateMiddleContent(cppList):
    middleConetnt = ""
    middleConetnt += "Objects = " + cppList[0][:-4] + ".o" + "\n"
    for i in range(1, len(cppList)):
        middleConetnt += "Objects += " + cppList[i][:-4] + ".o" + "\n"
    return middleConetnt

if __name__ == "__main__":
    makefile = GenerateMakefile(GenerateMiddleContent(FindAllTheCpp()))
    with open("Makefile", mode="w") as f:
        f.write(makefile)
