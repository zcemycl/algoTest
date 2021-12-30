import numpy as np
import pandas as pd
import os
current = os.path.dirname(os.path.realpath(__file__))

class Solution:
    @staticmethod
    def readdf():
        df = pd.read_csv(current+'/electionpoll.csv')
        return df
    @staticmethod
    def naive(df):
        res = []
        columns = list(df.columns)
        res.append(round(np.mean(df["Workers' Party"]),1))
        res.append(round(np.median(df["Workers' Party"])))
        res.append(round(df["Workers' Party"].std(),1))
        tmpdf = df[df[columns[0]].str.contains("2019-03-")]["Workers' Party"]
        res.append(tmpdf.max()-tmpdf.min())

        maxVal,date,Party=0,"",""
        for party in columns[1:]:
            idx = df[party].argmax()
            tmpVal = df[party].iloc[idx]
            tmpDate = df[columns[0]].iloc[idx]
            if tmpVal>maxVal:
                maxVal = tmpVal
                date = tmpDate
                Party = party
        res.append(maxVal)
        res.append(date)
        res.append(Party)

        maxDif,Party = 0,""
        for party in list(df.columns)[1:]:
            tmpDif = df[party].max()-df[party].min()
            if tmpDif>maxDif:
                maxDif=tmpDif
                Party = party
        res.append(Party)
        res.append(maxDif)
        return res