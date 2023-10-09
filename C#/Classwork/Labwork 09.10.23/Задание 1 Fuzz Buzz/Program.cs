namespace Задание_1_Fuzz_Buzz
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите число от 0 до 100: ");
            int number = 0;
            number = int.Parse(Console.ReadLine());

            if (number % 3 == 0 & number % 5 == 0)
            {
                Console.WriteLine("Fizz Bizz");
            }

            else if (number % 3 == 0)
            {
                Console.WriteLine("Fizz");
            }
            else if (number % 5 == 0)
            {
                Console.WriteLine("Buzz");
            }
            else
            {
                Console.WriteLine(number);
            }


        }
    }
}