graficas.pdf : datos.dat plot.py
	python plot.py
	xdg-open graficas.pdf

datos.dat : datos.exe
	./datos.exe > datos.dat

datos.exe : ValenciaJeronimoS6C0.cpp
	g++ ValenciaJeronimoS6C0.cpp -o datos.exe
	
