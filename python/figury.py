#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury.py

#  MA 02110-1301, USA.
#  
#  

def prostokat1(a, b, znak):
    for i in range(a):
        for j in range(b):
            print(znak, end='')
        print()
 
 
def prostokat2(a, b, znak):       
    for i in range(a):
        for j in range(b):
            if j == 0 or j == b - 1 or i == 0 or i == a-1:
                print(znak, end='')
            else:
                print(" ", end='') 
                
                
def choinka(h, znak):
    
    for j in range(h):
                
        print()    
                     
    return 0

    
def main(args):
    a = int(input("Podaj 1 bok prostokąta:"))
    b = int(input("Podaj 1 bok prostokąta:"))
    znak = input("podaj znak: ")
    h = input("Podaj wysokość choinki: ") 
    prostokat1(a,b,znak)
    print()
    prostokat2(a,b,znak)
    print()
    h = int(input("Podaj h choinki"))
    
    return 0 

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
