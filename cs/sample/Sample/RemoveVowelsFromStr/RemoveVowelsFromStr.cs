using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace Sample.RemoveVowelsFromStr{
    public class removeVowelsFromStr{
        public static string naive(string s){
            Regex rgx = new Regex("[aeiou]");
            return rgx.Replace(s,"");
        }
    }
}
