using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StringReverse
{
    class Program
    {
        static void Main(string[] args)
        {
            string name = "Rishi is my name ";
            string rev = " ";
            int len = name.Length;
            //Console.WriteLine(len);
            // Console.WriteLine(name.IndexOf(" "));
            //for (int i = len - 1; i >= 0; i--)
            //{
            //    rev = rev + name[i];
            //}
            //Console.WriteLine(rev);
            int itr = 0;
            for (int i = 0; i <= len - 1; i++)
            {
                if (name[i] == ' ')
                {
                    for (int j = i - 1; j >= itr ; j--)
                    {
                        rev = rev +name[j];
                    }
                    rev = rev + " ";
                    itr = i+1;
                }
            }
            Console.WriteLine(rev);
            Console.ReadLine();
        }
    }
}
