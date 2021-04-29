import numpy as np
import matplotlib.pyplot as plt

funcion = int(input("Ingrese el numero al que quiere elevar la funcion X  "))
f = lambda x : x**funcion 
menosx = int(input("Ingresa el parametro a  "))
masx = int(input("Ingresa el parametro b  "))
rectangulos=int(input("Ingresa el numero de rectangulos, recuerda que entre mas rectangulos mas preciso es "))
a = menosx; b = masx; N = rectangulos
n = 10 

x = np.linspace(a,b,N)
y = f(x)

X = np.linspace(a,b,n*N+1)
Y = f(X)

#definimos el tamaño de la figura
plt.figure(figsize=((masx+2),5))

#mostramos los ejes x y
plt.axhline(0, color='blue')
plt.axvline(0, color='red')
plt.plot(masx,0)

plt.plot(X,Y,'b')
rectangulo = x[1:] 
rectangulo2 = y[1:]

#Nombre a los ejes
plt.xlabel('x')
plt.ylabel('y')

#Creamos los rectangulos que van debajo de la curva
plt.plot(rectangulo,rectangulo2,'b.',markersize=10)
plt.bar(rectangulo,rectangulo2,width=-(b-a)/N,alpha=0.5,edgecolor='black', color='purple')


#Realizamos la suma de rieman con la funcion sum + todos los rectangulos
deltax = (b-a)/N
rectangulo = np.linspace(deltax,b,N)
sumatoria = np.sum(f(rectangulo) * deltax)
print("La suma de Riemann por el extremo derecho es: ", sumatoria)

plt.title('La suma de Riemann por el extremo derecho es: {}'.format(sumatoria))



#Imprimimos la grafica

plt.show()
