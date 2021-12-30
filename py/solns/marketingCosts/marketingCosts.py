class Solution:
    @staticmethod
    def desired_marketing_expenditure(marketing_expenditure, units_sold, desired_units_sold):
        import numpy as np
        from sklearn import linear_model
        """
        :param marketing_expenditure: (list) A list of integers with the expenditure for each previous campaign.
        :param units_sold: (list) A list of integers with the number of units sold for each previous campaign.
        :param desired_units_sold: (integer) Target number of units to sell in the new campaign.
        :returns: (float) Required amount of money to be invested.
        """
        marketing_expenditure = np.array(marketing_expenditure).reshape(-1, 1)
        units_sold = np.array(units_sold).reshape(-1, 1)
        reg = linear_model.LinearRegression()
        reg.fit(marketing_expenditure , units_sold)
        return (desired_units_sold - reg.intercept_)/reg.coef_
