namespace Задание_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите целое число: ");

            int userNumber;

            if (!int.TryParse(Console.ReadLine(), out userNumber))
            {
                Console.WriteLine("Вы ввели не целое число!");
            }

            int[] numArr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

            int countNumbers = 0;

            foreach (int num in numArr)
            {
                if (num < userNumber)
                {
                    countNumbers++;
                }    
            }

            Console.WriteLine($"Количество значений в массиве меньше заданного: {countNumbers}");
        }
    }
}