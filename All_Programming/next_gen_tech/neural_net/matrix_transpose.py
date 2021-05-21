# Matrix transpose with numpy array

import numpy as np 

a=[1,2,3]
b=[3,4,5]

a=np.array([a])
b=np.array([b]).T 

print(np.dot(a,b))


x=[3,4,5,6]

print(np.expand_dims(np.array(x),axis=0)) # expand_dims() will add new dimension at the index of the axis 