graficas.pdf : datosEuler.dat datosLeapFrog.dat datosRK.dat plotLAB.py
	python plotLAB.py
	xdg-open graficas.pdf

datosEuler.dat : datosEuler.exe
	./datosEuler.exe > datosEuler.dat

datosLeapFrog.dat : datosLeapFrog.exe
	./datosLeapFrog.exe > datosLeapFrog.dat

datosRK.dat : datosRK.exe
	./datosRK.exe > datosRK.dat

datosEuler.exe : ValenciaJeronimoLABS6C0_Euler.cpp
	g++ ValenciaJeronimoLABS6C0_Euler.cpp -o datosEuler.exe
	
datosLeapFrog.exe : ValenciaJeronimoLABS6C0_LeapFrog.cpp
	g++ ValenciaJeronimoLABS6C0_LeapFrog.cpp -o datosLeapFrog.exe

datosRK.exe : ValenciaJeronimoLABS6C0_RK.cpp
	g++ ValenciaJeronimoLABS6C0_RK.cpp -o datosRK.exe
