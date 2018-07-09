import matplotlib.pyplot as plt
import numpy as np

datosEuler = np.genfromtxt("datosEuler.dat")
datosLeapFrog = np.genfromtxt("datosLeapFrog.dat")
datosRK = np.genfromtxt("datosRK.dat")

deriv_analyt = np.exp(datosEuler[:,0])

plt.figure()
plt.subplot(311)
plt.title("Soluciones numericas")
plt.plot(datosEuler[:,0],datosEuler[:,1], label = "Euler")
plt.plot(datosLeapFrog[:,0],datosLeapFrog[:,1], label = "Leap Frog")
plt.plot(datosRK[:,0],datosRK[:,1],label="Runge-kutta")
plt.legend()
plt.subplot(312)
plt.title("Errores")
plt.plot(datosEuler[:,0],abs(datosEuler[:,1]-deriv_analyt), label = "Euler")
plt.plot(datosLeapFrog[:,0],abs(datosLeapFrog[:,1]-deriv_analyt), label = "Leap Frog")
plt.plot(datosRK[:,0],abs(datosRK[:,1]-deriv_analyt),label="Runge-kutta")
plt.legend()
plt.subplot(313)
plt.plot(datosLeapFrog[:,0],abs(datosLeapFrog[:,1]-deriv_analyt), label = "Leap Frog")
plt.plot(datosRK[:,0],abs(datosRK[:,1]-deriv_analyt),label="Runge-kutta")
plt.legend()
plt.savefig("graficas.pdf")
