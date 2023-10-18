namespace Задание_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("ВВедите число: ");
            double number = 0;

            while (!double.TryParse(Console.ReadLine(), out number))
            {
                Console.WriteLine("Неверный ввод. Пожалуйста, введите корректное число.");
            }

            
            Console.WriteLine("Введите процент: ");
            double procent = 0;

            while (!double.TryParse(Console.ReadLine(), out procent) || procent < 0)
            {
                Console.WriteLine("Неверный ввод. Пожалуйста, введите корректное положительное число.");
            }

            double result = (number * procent) / 100;
            Console.WriteLine($"{procent}% от {number}: {result}");
        }
    }
}