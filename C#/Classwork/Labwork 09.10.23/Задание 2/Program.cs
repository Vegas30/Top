namespace Задание_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write(@"
    Пользователь вводит с клавиатуры два числа. Первое
число — это значение, второе число процент, который
необходимо посчитать. Например, мы ввели с клавиатуры
90 и 10. Требуется вывести на экран 10 процентов от 90.
Результат: 9." + "\n\n");

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