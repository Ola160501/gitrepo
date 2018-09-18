#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szablon.py
# int()-przekształca argument na liczbę całkowitą
# czyli typ INTEGER


# DRY - don't repeat yourself

def main(args):
    a = int(input ("Podaj 1. liczbę: ") )
    print(a)
    b = int(input ("Podaj 2. liczbę: " ) )
    print(b)

    print("Suma:", a+b)
    print("Iloczyn:", a*b)
    print("Iloraz:", a/b)
    print("różnica:", a-b)
    
    return
    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
