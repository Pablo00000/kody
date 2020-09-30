#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  prydzial.py



def main(args):
    
    a = int(input("podaj wzrost"))
    b = int(input("podaj wage"))
    c = (b / (a*a))
    if (c < 18.5):
        print ("niedowaga")
    elif (c <= 25 and c >= 18.5):
        print ("norma")
    elif (c <= 25 and c < 30):
        print ("nadwaga")
    elif (c >= 30 and c <= 50):
        print ("otyłość")
    return 0
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
