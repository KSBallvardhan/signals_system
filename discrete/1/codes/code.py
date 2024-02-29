import numpy as np
import matplotlib.pyplot as plt

# import the data from the text file
data = np.loadtxt("values.txt", skiprows=1)

# clear all the previous figures
plt.close("all")

# extract the 60 terms of the data
x_n = data[:60]
# plot the graph
plt.stem(range(1, len(data) + 1), x_n, markerfmt='bo', linefmt='b-', basefmt='r-',label=r'Simulation') 
plt.scatter(range(1, len(data) + 1), data, color='orange',marker='x',s=100,label=r'Analysis')
# Set labels and title
plt.xlabel('n')
plt.ylabel('x(n)')
plt.xticks(range(1, len(data) + 1))
# Add legend
plt.legend()
plt.grid(True)
plt.savefig("fig1.png")
plt.show()
