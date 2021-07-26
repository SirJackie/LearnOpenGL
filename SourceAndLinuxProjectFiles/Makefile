SOURCE_FILE_NAME = main.cpp
TARGET_FILE_NAME = main.out

$(TARGET_FILE_NAME):$(SOURCE_FILE_NAME)
	g++ $(SOURCE_FILE_NAME) -o $(TARGET_FILE_NAME) -L/usr/X11R6/lib -lGL -lglut -lGLEW -lm

.PHONY:
run:
	make
	chmod 777 ./$(TARGET_FILE_NAME)
	./$(TARGET_FILE_NAME)

clear:
	rm -rf ./$(TARGET_FILE_NAME)

installDependencies:
	sudo apt-get install build-essential libgl1-mesa-dev
	sudo apt-get install freeglut3-dev
	sudo apt-get install libglew-dev libsdl2-dev libsdl2-image-dev libglm-dev libfreetype6-dev
