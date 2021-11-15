import os
import subprocess
current = os.path.dirname(os.path.realpath(__file__))

class Solution:
    @staticmethod
    def naive():
        with open(current+'/file.txt','r') as f:
            for i,line in enumerate(f.readlines()):
                if i==9: return line
    @staticmethod
    def linuxCMD():
        result = subprocess.run(['sed', '-n','10p','<',current+'/file.txt'], stdout=subprocess.PIPE)
        return result.stdout.decode('utf-8')
