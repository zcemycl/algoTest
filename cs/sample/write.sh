#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo edit Sample cs file 
exec `echo "using System;" >> Sample/${name^}/${name^}.cs`
exec `echo "using System.Collections.Generic;" >> Sample/${name^}/${name^}.cs`
exec `echo "" >> Sample/${name^}/${name^}.cs`
exec `echo "namespace Sample.${name^}{" >> Sample/${name^}/${name^}.cs`
exec `echo "    public class ${name,}{" >> Sample/${name^}/${name^}.cs`
exec `echo "        public static int naive(int n){" >> Sample/${name^}/${name^}.cs`
exec `echo "            return n;" >> Sample/${name^}/${name^}.cs`
exec `echo "        }" >> Sample/${name^}/${name^}.cs`
exec `echo "    }" >> Sample/${name^}/${name^}.cs`
exec `echo "}" >> Sample/${name^}/${name^}.cs`

echo edit Sample.Tests cs file
exec `echo "using System;" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "using Xunit;" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "using Sample.${name^};" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "namespace Sample.Tests{" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "    public class UnitTest_${name^}{" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "        [Theory]" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "        [InlineData(0,0)]" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "        public void checkResult(int n,int expected){" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "            Assert.Equal(expected,${name,}.naive(n));" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "        }" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "    }" >> Sample.Tests/${name^}/test${name^}.cs`
exec `echo "}" >> Sample.Tests/${name^}/test${name^}.cs`