# inputs that are just to start.
# Our network will have weights initialized radmonly and biases set as zero to start.

inputs=[1,2,3]
weights=[0.2,0.8,-0.5]

# Next we need the bias, at this moment we are modeling a single neuron with 3 inputs. since we are modeling only one neuron that is why only one random bias. 

bias=2

output=(inputs[0]*weights[0]+inputs[1]*weights[1]+inputs[2]*weights[2]+bias)

print("#1 Output = ",output)

inputs=[1.0,2.0,3.0,2.5]
weights=[0.2,0.8,-0.5,1.0]
bias=2.0

output=(inputs[0]*weights[0]+inputs[1]*weights[1]+inputs[2]*weights[2]+inputs[3]*weights[3]+bias)

print("#2 Output = ",output)
