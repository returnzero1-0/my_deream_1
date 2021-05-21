import numpy as np
import nnfs
from nnfs.datasets import spiral_data

nnfs.init()


# Dense layer
class Layer_Dense:
	def __init__(self,n_inputs,n_neurons):
		self.weights=0.01 * np.random.randn(n_inputs,n_neurons)
		self.biases=np.zeros((1,n_neurons))
		print("Weights:\n",self.weights,self.weights.shape)
		print("Biases:\n",self.biases,self.biases.shape)

	def forward(self,inputs):
		self.output=np.dot(inputs,self.weights) + self.biases

# create dataset
X,y=spiral_data(samples=100,classes=3)
print(X,X.shape)
#print(y)

# create Dense Layer with 2 input features and 3 output values
dense1=Layer_Dense(2,3)

# perform forward pass of out training data through this layer
dense1.forward(X)

# sets see output of first few samples
print(dense1.output[:5])
