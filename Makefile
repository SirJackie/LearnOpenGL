test:test.cpp
	g++ test.cpp -o test -L/usr/X11R6/lib -lGL -lglut -lGLEW -lm

.PHONY:
run:
	make
	chmod 777 ./test
	./test

clear:
	rm -rf ./test

installDependencies:
	sudo apt-get install build-essential libgl1-mesa-dev
	sudo apt-get install freeglut3-dev
	sudo apt-get install libglew-dev libsdl2-dev libsdl2-image-dev libglm-dev libfreetype6-dev
