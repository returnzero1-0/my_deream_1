

import numpy as np

inputs=[

    [1,2,3,2.5],
    [2.0,5.0,-1.0,2.0],
    [-1.5,2.7,3.3,-0.8]
]                      # we have 12 inputs 

weights=[

        [0.2,0.8,-0.5,1.0],
        [0.5,-0.91,0.26,-0.5],
        [-0.26,-0.27,0.17,0.87]
]                                   # we need 12 weights

biases=[2,3,0.5]                    # we have 3 neurons


# we need to perform Trancepose of Weights to get (3,4) (4,3) = (3,3) 9-outputs

layer_output=np.dot(inputs,np.array(weights).T)+biases

print(layer_output)