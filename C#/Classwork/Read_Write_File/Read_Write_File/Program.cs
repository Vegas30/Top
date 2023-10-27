using System;
using System.Collections.Generic;
using System.Linq;
namespace Read_Write_File
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Введите текст: ");
            string inputText = Console.ReadLine();
            string path = @"D:\example.csv";
            File.AppendAllText(path, inputText + Environment.NewLine);


            string content = File.ReadAllText(path);
            Console.WriteLine("Содержимое файла: " + content);
            string[] words = content.Split(' ');
            int count=0;
            foreach (var word in words)
            {
                count++;
            }

            Console.WriteLine(count);
            


            Console.ReadKey();
        }
    }
}
