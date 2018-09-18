#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szablon.py
# int()-przekształca argument na liczbę całkowitą
# czyli typ INTEGER


# DRY - don't repeat yourself

def hello():
    print("Witaj, jestem Python!")

def witaj():
    imie = input("Jak masz na imię? ")
    print("Witaj", imie, "!")
    
def suma(l1, l2):
    print("Suma", l1 + l1)
    
def roznica(l1, l2):
    print("Rożnica", l1-l2)
    
def iloraz(l1, l2):
    print(iloraz, l1/l2)

def main(args):
    a = int(input ("Podaj 1. liczbę: ") )
    print(a)
    b = int(input ("Podaj 2. liczbę: " ) )
    print(b)
    
    #print("Suma:", a+b)
    suma(a, b)
    #print("Suma:", a+b)
    #print("Iloczyn:", a*b)
    #print("Iloraz:", a/b)
    iloraz(a, b)
    #print("różnica:", a-b)
    różnica(a, b)
    
    hello()  # wywołanie funkcji
    witaj()
    return 0
    
    
    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
