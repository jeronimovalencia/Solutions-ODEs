all : datos.dat ValenciaJeronimoS6C0.cpp

datos.dat : ValenciaJeronimoS6C0.cpp
	g++ ValenciaJeronimoS6C0.cpp -o datos.exe
	./datos.exe > datos.dat
	rm datos.exe
	python plot.py	
	rm datos.dat
