import sqlite3 as sq3
class Solution:
    @staticmethod
    def naive():
        con = sq3.connect(':memory:')
        cur = con.cursor()
        cur.execute('''CREATE TABLE Person (id real,email text)''')
        cur.execute("INSERT INTO Person VALUES (1,'a@b.com')")
        cur.execute("INSERT INTO Person VALUES (2,'c@d.com')")
        cur.execute("INSERT INTO Person VALUES (3,'a@b.com')")
        con.commit()
        for row in cur.execute(
            'SELECT email as Email FROM Person GROUP BY email HAVING COUNT(email)>1;'):
            pass
        con.close()
        return row[0]