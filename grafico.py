import numpy as np
import matplotlib.pyplot as plt

data1 = np.loadtxt("euler1.dat")
data2 = np.loadtxt("euler2.dat")
data3 = np.loadtxt("euler3.dat")

data4 = np.loadtxt("implicito1.dat")
data5 = np.loadtxt("implicito2.dat")
data6 = np.loadtxt("implicito3.dat")

plt.figure()
plt.subplot(1,2,1)
plt.title("Metodo euler")
plt.xlabel("x")
plt.ylabel("y")
plt.plot(data1[:,0], data1[:,1])
plt.plot(data2[:,0], data2[:,1])
plt.plot(data3[:,0], data3[:,1])

plt.subplot(1,2,2)
plt.title("Metodo implicito")
plt.xlabel("x")
plt.ylabel("y")
plt.plot(data4[:,0], data4[:,1])
plt.plot(data5[:,0], data5[:,1])
plt.plot(data6[:,0], data6[:,1])

plt.savefig("primer_orden.png")
