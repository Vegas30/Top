namespace Задание_3
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int[] digits = new int[4];
            int result = 0;

            Console.WriteLine("Введите четыре цифры от 0 до 9:");

            for (int i = 0; i < 4; i++)
            {
                Console.Write($"Цифра {i + 1}: ");

                if (int.TryParse(Console.ReadLine(), out digits[i]) && digits[i] >= 0 && digits[i] <= 9)
                {
                    result = result * 10 + digits[i];
                }
                else
                {
                    Console.WriteLine("Ошибка! Введите корректную цифру.");
                    return;
                }
            }

            Console.WriteLine($"Сформированное число: {result}");

        }
    }
}