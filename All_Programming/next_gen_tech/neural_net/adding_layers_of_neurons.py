# this program will have 1 input layer and 2 hidden layers

import numpy as np 

inputs=[
    [1,2,3,2.5],
    [2.0,5.0,-1.0,2],
    [-1.5,2.7,3.3,-0.8]
]                               # 12 inputs/ samples/ features

weights=[

        [0.2,0.8,-0.5,1.0],
        [0.5,-0.91,0.26,-0.5],
        [-0.26,-0.27,0.17,0.87]
]                                   # we need 12 weights 3 set of 4

biases=[2,3,0.5]                    # we have 3 hidden neurons

# 3 biases and 3 set of weights which has 4 weights each set.

# layer1_output is hidden layer 1

layer1_output=np.dot(inputs,np.array(weights).T) + biases
print("Layer-1 output: \n",layer1_output)

# layer2_output is hidden layer 2 which is having 3 neurons

# We have weights2 shape = (3,3) because output of pervious layer is having output shape as (3,3)

weights2=[

        [0.1,-0.14,0.5],
        [-0.5,0.12,-0.33],
        [-0.44,0.73,-0.13]
]
biases2=[-1,2,-0.5]

layer2_output=np.dot(layer1_output,np.array(weights2).T) + biases2

print("Layer-2 output: \n",layer2_output)