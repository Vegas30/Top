using System.Text.RegularExpressions;

namespace Задание_3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите три числа");

            string searchNumber = Console.ReadLine();

            int[] intArray = { 7, 6, 5, 3, 4, 7, 6, 5, 8, 7, 6, 5 };

            string strNumbers = string.Join("", intArray);

            Regex regex = new Regex(searchNumber);

            int count = regex.Matches(strNumbers).Count;

            Console.WriteLine($"Количество повторений последовательности: {count}");
        }
    }
}