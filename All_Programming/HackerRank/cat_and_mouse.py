
def catAndMouse(cat_A,cat_B,mouse_C):

    ca_score=abs(cat_A-mouse_C)
    cb_score=abs(cat_B-mouse_C)

    if(ca_score<cb_score):
        print("Cat A")
    if(cb_score<ca_score):
        print("Cat B")
    if(ca_score==cb_score or cb_score==ca_score):
        print("Mouse C")
  

queries=int(input())



lst1=[]
lst2=[]
lst3=[]


for i in range(0,queries):
    cat_A,cat_B,mouse_C=map(int,input().split(" "))
    
    lst1.append(cat_A)
    lst2.append(cat_B)
    lst3.append(mouse_C)
    

for i in range(0,queries):
    a=lst1[i]
    b=lst2[i]
    m=lst3[i]

    catAndMouse(a,b,m)
    #print(a,b,m)

#print(a)
#print(b)
#print(m)



#print(lst1)
#print(lst2)
#print(lst3)


'''
if(mouse_C > cat_A and mouse_C<cat_B): # mouse in middle
        ca_score=mouse_C-cat_A
        cb_score=cat_B-mouse_C

        if(cb_score < ca_score):
            print("Cat B")
        if(ca_score < cb_score):
            print("Cat A")
        if(cb_score==ca_score):
            print("Mouse C")
    
    
    if(mouse_C < cat_A and mouse_C<cat_B):    #mouse before both cats
        ca_score=cat_A-mouse_C
        cb_score=cat_B-mouse_C

        if(ca_score < cb_score):
            print("Cat A")
        if(cb_score< ca_score):
            print("Cat B")
        if(ca_score==cb_score):
            print("Mouse C")
    
    if(mouse_C > cat_A and mouse_C >cat_B):   #mouse after both cats
        ca_score=mouse_C-cat_A
        cb_score=mouse_C-cat_B

        if(cb_score <ca_score):
            print("Cat B")
        if(ca_score<cb_score):
            print("Cat A")
        if(cb_score==ca_score):
            print("Mouse C")

    if(mouse_C==cat_A and mouse_C==cat_B):    #mouse is with cats
        print("Mouse C")


'''