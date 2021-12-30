import pandas as pd
import numpy as np
class Solution:
    @staticmethod
    def most_corr(prices):
        """
        :param prices: (pandas.DataFrame) A dataframe containing each ticker's 
                    daily closing prices.
        :returns: (container of strings) A container, containing the two tickers that 
                are the most highly (linearly) correlated by daily percentage change.
        """
        cor = prices.pct_change().corr().unstack() # correlation of % change for each pair of stocks
        cor = cor[cor != 1].sort_values(ascending=False, kind='quicksort') # take out field with value = 1, and sort by values
        return list(cor.index[0]) # return the most correlated pair of stocks

