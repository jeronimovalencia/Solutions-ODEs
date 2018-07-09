import matplotlib.pyplot as plt
import numpy as np

datos = np.genfromtxt("datos.dat")

analitic_deriv = np.exp(datos[:,0])

plt.figure()
plt.subplot(211)
plt.title("Euler")
plt.plot(datos[:,0],datos[:,1])
plt.subplot(212)
plt.title("Diferencia")
plt.plot(datos[:,0],np.abs(datos[:,1] - analitic_deriv))
plt.show()
