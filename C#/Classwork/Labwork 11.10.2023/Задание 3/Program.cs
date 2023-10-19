using System.Collections;
using System.Text.RegularExpressions;
using static ArrayHelper.ArrayOperations;

namespace Задание_3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write(@"
    Пользователь вводит с клавиатуры три числа.
Необходимо подсчитать сколько раз последовательность из этих
трёх чисел встречается в массиве.
Например:
пользователь ввёл: 7 6 5;
массив: 7 6 5 3 4 7 6 5 8 7 6 5;
количество повторений последовательности: 3.
            " + "\n");

            Console.WriteLine("Введите три числа");

            string searchNumber = Console.ReadLine();

            Console.WriteLine("Введите размер массива: ");
            int size;
            while (!int.TryParse(Console.ReadLine(), out size))
            {
                Console.WriteLine("Пфф... Введите целое положительное число.");
            }

            int[] intArray = new int[size];

            Console.WriteLine("\nВыберите способ заполнения массива, 1 или 2:\n1: Заполнить автоматически.\n2: Заполнить самостоятельно.");
            int choice;
            while (!int.TryParse(Console.ReadLine(), out choice) || !(choice == 1 || choice == 2))
            {
                Console.WriteLine("Выберите 1 или 2.");
            }

            switch (choice)
            {
                case 1:
                    FillArrayWithRandomNumbers(intArray);
                    ShowArray(intArray);
                    break;
                case 2:
                    FillArrayManually(intArray);
                    ShowArray(intArray);
                    break;
                default:
                    return;
            }

            //int[] intArray = { 7, 6, 5, 3, 4, 7, 6, 5, 8, 7, 6, 5 };

            string strNumbers = string.Join("", intArray);

            Regex regex = new Regex(searchNumber);

            int count = regex.Matches(strNumbers).Count;

            Console.WriteLine($"Количество повторений последовательности: {count}");
        }
    }
}