
CC = g++ -O3 -Wall -Isource -DPLATFORM_UNIX
OBJECTS = PixelToaster.o main.o cube.o hud.o
LIBS = -L/usr/X11R6/lib -lX11 -lrt

all: $(OBJECTS)
	@echo Building $@...
	$(CC) $(LIBS) $(OBJECTS) -o main
	@echo Done with $@.

%.o: %.c %.h
	$(CC) $(LIBS) -c $<	
	
debug:
	#@echo Building w/DEBUG...
	#$(CC) $(LIBS) $(OBJECTS) -o mb
	#@echo Done.

clean:
	@echo Cleaning up...
	@rm -f main *o
	@echo Done.


