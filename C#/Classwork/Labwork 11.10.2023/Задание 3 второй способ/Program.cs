namespace Задание_3_второй_способ
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите три числа:");
            string input = Console.ReadLine();
            int number1 = int.Parse(input[0].ToString());
            int number2 = int.Parse(input[1].ToString());
            int number3 = int.Parse(input[2].ToString());

            int[] array = { 7, 6, 5, 3, 4, 7, 6, 5, 8, 7, 6, 5 };

            int count = 0;

            for (int i = 0; i < array.Length - 2; i++)
            {
                if (array[i] == number1 && array[i + 1] == number2 && array[i + 2] == number3)
                {
                    count++;
                }
            }

            Console.WriteLine($"Количество повторений последовательности: {count}");
        }
    }
}