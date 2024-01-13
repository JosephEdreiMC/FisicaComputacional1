import matplotlib as mpl
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.cbook as cbook
plt.plotfile('data.csv', cols=(0,2), delimiter=',')
plt.plotfile('data.csv', cols=(0,3), delimiter=',', newfig=False)
plt.xlabel('x')
plt.ylabel('derivada')
plt.savefig('derivada.png')
plt.show

