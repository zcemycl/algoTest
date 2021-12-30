import unittest
from parameterized import parameterized as p
from solns.loginTable.loginTable import *

class UnitTest_LoginTable(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        id_name_verified = pd.DataFrame([[1, "JohnDoe", True],
            [2, "AnnFranklin", False]],
            columns=["Id", "Login", "Verified"])
        id_password = np.array([[1,987340123],
            [2,187031122]], np.int32)
        Solution.login_table(id_name_verified, id_password)
        print(id_name_verified)
