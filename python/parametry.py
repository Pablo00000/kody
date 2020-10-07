#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  parametry.py

def zwieksz(a): #przekazanie parametry przez wartosc
    a = a + 2
    print(a)
    
    
def zwieksz2(b): #przekazanie parametry przez wartosc
    b[0] = b[0] + 2
    print(b)
    
def main(args):
    a = 5

    print(a)
    zwieksz(a)
    print(a)
    
    b = [5] # zmienna lokalna, typ złozony
    print(b)
    zwieksz2(b)
    print(b)
    
    
    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
