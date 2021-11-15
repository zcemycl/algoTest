using System;
using System.Collections.Generic;
using System.IO;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sample.TenthLine{
    public class tenthLine{
        public static string naive(){
            string path = Directory.GetCurrentDirectory();
            path = path.Substring(0,path.IndexOf("Sample.Tests"))+
                "Sample/TenthLine/file.txt";
            string[] lines = System.IO.File.ReadAllLines(path);
            int i=0;
            foreach (string line in lines)
            {
                if (i==9) return line;
                i+=1;
            }
            return "";
        }
        public static string linuxCMD(){
            string path = Directory.GetCurrentDirectory();
            path = path.Substring(0,path.IndexOf("Sample.Tests"))+
                "Sample/TenthLine/file.txt";
            var args = string.Format("sed -n '10p' < {0}",path);
            
            var process = new Process(){
            StartInfo = new ProcessStartInfo
                {
                FileName = "/bin/bash",
                Arguments = $"-c \"{args}\"",
                RedirectStandardOutput = true,
                UseShellExecute = false,
                CreateNoWindow = true,
                }
            };
            process.Start();
            string result = process.StandardOutput.ReadToEnd();
            process.WaitForExit();
            return result;
        }
        static void p_ErrorDataReceived(object sender, DataReceivedEventArgs e)
        {
            Process p = sender as Process;
            if (p == null)
                return;
            Console.WriteLine(e.Data);
        }

        static void p_OutputDataReceived(object sender, DataReceivedEventArgs e)
        {
            Process p = sender as Process;
            if (p == null)
                return;
            Console.WriteLine(e.Data);
        }
    }
}
