#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    spl = s.split(":")
    if spl[2][2] == 'P' and spl[0] != '12':
        spl[0] = int(spl[0]) + 12
    elif spl[2][2] == 'A' and spl[0] == '12':
        spl[0] = '00'

    spl[2] = spl[2][0]+spl[2][1]
    msg = str(spl[0])+":"+str(spl[1])+":"+str(spl[2])
    return msg

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
