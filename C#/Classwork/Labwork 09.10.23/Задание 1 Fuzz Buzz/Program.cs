namespace Задание_1_Fuzz_Buzz
{
    internal class Program
    {
        static void Main(string[] args)
        {
            bool isRunning = true;

            while (isRunning)
            {
                Console.Write("Введите число от 0 до 100: ");
                int number = 0;
                bool isValidNumber = int.TryParse(Console.ReadLine(), out number);

                if (isValidNumber)
                {

                    if (number >= 0 && number <= 100)
                    {
                        if (number % 3 == 0 && number % 5 == 0)
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
                    else
                    {
                        Console.WriteLine("Некорректный ввод. Пожалуйста, введите число от 0 до 100.");
                    }

                }
                else
                {
                    Console.WriteLine("Некорректный ввод. Пожалуйста, введите число от 0 до 100.");
                }

                Console.WriteLine("Хотите продолжить? (Y/N)");
                string answer = Console.ReadLine();

                if (answer.ToLower() != "y")
                {
                    isRunning = false;
                }

                Console.Clear();

            }

        }
    }
}