#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury_pole.py


def main(args):
    a = input('Podaj pierwszy bok')
    b = input('Podaj drugi bok')
    print("Obwód: ", 2 * int(a) + 2 * int(b))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
