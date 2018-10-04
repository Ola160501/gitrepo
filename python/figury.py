#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury.py

#  MA 02110-1301, USA.
#  
#  


def main(args):
    
    a = int(input("Podaj 1 bok prostokąta:"))
    b = int(input("Podaj 1 bok prostokąta:"))
    znak = input("podaj znak: ")
    for i in range(a):
        for j in range(b):
            print(znak, end='')
        print()
        
    a = int(input("Podaj 1 bok prostokąta:"))
    b = int(input("Podaj 1 bok prostokąta:"))
    znak = input("podaj znak: ")
    for i in range(a):
        for j in range(b):
            if j== 0 or j == b - 1:
                print(znak.l end='')
            else
                print(znak, end='')
    
    
    

    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
