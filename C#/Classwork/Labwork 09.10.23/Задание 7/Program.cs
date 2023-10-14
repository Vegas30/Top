using static System.Console;

namespace Задание_7
{
    internal class Program
    {
        static void Main(string[] args)
        {
            WriteLine("Введите два числа: ");
            int num1, num2;
            if (!int.TryParse(Console.ReadLine(), out num1))
            {
                WriteLine("Не правилный ввод данных");
            }
            if (!int.TryParse(Console.ReadLine(), out num2))
            {
                WriteLine("Не правилный ввод данных");
            }

            if (num1 > num2)
            {
                int temp = num1;
                num1 = num2;
                num2 = temp;
            }

            WriteLine($"Выводим все четные числа диапазона от {num1} до {num2}: ");

            for (int i = num1; i < num2 + 1; i++)
            {
                if (i % 2 == 0)
                {
                    WriteLine(i);
                }
            }
        }
    }
}