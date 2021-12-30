import pandas as pd
import numpy as np

class Solution:
    @staticmethod
    def login_table(id_name_verified, id_password):
        """
        :param id_name_verified: (DataFrame) DataFrame with columns: Id, Login, Verified.   
        :param id_password: (numpy.array) Two-dimensional NumPy array where each element
                            is an array that contains: Id and Password
        :returns: (None) The function should modify id_name_verified DataFrame in-place. 
                It should not return anything.
        """   
        id_name_verified.drop('Verified',1,inplace=True)
        id_name_verified['Password']=id_password[:,1]
