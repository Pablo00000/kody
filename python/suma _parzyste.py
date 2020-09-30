#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma _liczb.py



def main(args):
    
    a = 0
    p = int(input("Podaj początek sumowanego zakresu"))
    k = int(input("Podaj koniec sumowanego zakresu"))

    for i in range(p , k + 1):
        print(i)
        if i % 2 == 0:
            a = a + i
    print ("Suma = ", a)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
