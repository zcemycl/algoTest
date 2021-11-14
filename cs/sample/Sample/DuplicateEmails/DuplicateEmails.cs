using System;
using System.Collections.Generic;
using Microsoft.Data.Sqlite;

namespace Sample.DuplicateEmails{
    public class duplicateEmails{
        public static string naive(){
            string result = "";
            using var con = new SqliteConnection("Data Source=:memory:");
            con.Open();
            var cmd = con.CreateCommand();
            cmd.CommandText = @"CREATE TABLE Person(
                id INTEGER PRIMARY KEY,
                email TEXT)";
            cmd.ExecuteNonQuery();
            cmd.CommandText = "INSERT INTO Person VALUES (1,'a@b.com')";
            cmd.ExecuteNonQuery();
            cmd.CommandText = "INSERT INTO Person VALUES (2,'c@d.com')";
            cmd.ExecuteNonQuery();
            cmd.CommandText = "INSERT INTO Person VALUES (3,'a@b.com')";
            cmd.ExecuteNonQuery();

            cmd.CommandText = "SELECT email as Email FROM Person GROUP BY email HAVING COUNT(email)>1;";
            var rdr = cmd.ExecuteReader();

            while (rdr.Read())
            {
                result = rdr.GetString(0);
            }

            return result;
        }
    }
}
