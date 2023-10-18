using System;

namespace Задание_4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] array1 = new int[5] { 1, 2, 4, 4, 5 };
            int[] array2 = new int[4] { 1, 2, 4, 4 };

            int maxLength = Math.Max(array1.Length, array2.Length);

            int[] array3 = new int[maxLength];
            int count = 0; // Счетчик общих элементов

            for (int i = 0; i < array1.Length; i++)
            {
                for (int j = 0; j < array2.Length; j++)
                {
                    if (array1[i] == array2[j])
                    {
                        array3[count] = array1[i];
                        count++;
                    }
                }
            }

            Console.WriteLine("Общие элементы в двух массивах:");
            for (int i = 0; i < count; i++)
            {
                Console.Write(array3[i] + " ");
            }

        }
    }
}