# This will show how ReLU activation function operates..

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

'''
np.maximum():
This method we are going to use in our ReLU activation class.
'''
class Activation_ReLu:
    def forward(self,inputs):
        self.output=np.maximum(0,inputs)

# lets apply this activation function to dense layer's outputs in code.

# create dataset
X,y=spiral_data(samples=100,classes=3)

# create dense layer with 2 input features and 3 output values
dense1=Layer_Dense(2,3)

#craete ReLU activation (to be used with Dense Layer):
activation1=Activation_ReLu()

# make a forward pass for training data through this layer
dense1.forward(X)

# Forward pass through activation function
# takes in output from previous layer
# dense1.output is the output of dense layer which is input to activation function
activation1.forward(dense1.output)

#print the first few samples
print(activation1.output[:5])


# That's it, -ve values are clipped/removed due to ReLU 


