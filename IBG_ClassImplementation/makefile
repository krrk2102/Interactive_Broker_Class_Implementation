OBJECTS = main.o Vehicle.o Sedan.o SUV.o CarRental.o
FLAGS = --std=c++11

IBG_Classes: $(OBJECTS)
	g++ -o IBG_Classes $(FLAGS) $(OBJECTS)
	rm *.o
	./IBG_Classes

%.o: %.cpp %.h
	g++ -c $(FLAGS) $<

clean:
	rm IBG_Classes
