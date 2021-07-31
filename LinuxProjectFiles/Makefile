# Target and Object Declarations
Target = LearnOpenGL.out
Objects = ../Source/ErrorHandling.o
Objects += ../Source/IndexBuffer.o
Objects += ../Source/VertexBuffer.o
Objects += ../Source/main.o

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
