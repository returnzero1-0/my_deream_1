# this will give output of the single neuron.

import numpy as np 

inputs=[1,2,3,2.5]
weights=[0.2,0.8,-0.5,1.0]
bias=2

outputs=np.dot(weights,inputs)+bias
print(outputs)

