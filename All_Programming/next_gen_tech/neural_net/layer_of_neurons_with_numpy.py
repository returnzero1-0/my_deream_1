# this willgive outputs of multiple neurons

import numpy as np

inputs=[1,2,3,2.5]                      # we have 4 inputs 

weights=[

        [0.2,0.8,-0.5,1.0],
        [0.5,-0.91,0.26,-0.5],
        [-0.26,-0.27,0.17,0.87]
]                                       # 3 X 4 size

biases=[2,3,0.5]                        # we have 3 neurons therefore 3 biases 

outputs=np.dot(weights,inputs)+biases

print(outputs)


