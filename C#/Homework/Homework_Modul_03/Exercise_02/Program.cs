namespace Exercise_02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(@"
    Напишите метод, который проверяет является ли
число числом Фибоначчи. Число передаётся в качестве
параметра. Если число простое нужно вернуть из метода
true, иначе false." + "\n\n");

            Console.WriteLine("Введите целое положельное число: ");
                        int number; // число, которое нужно проверить
            while(!int.TryParse(Console.ReadLine(), out number))
            {
                Console.WriteLine("Ошибка. Введите целое положельное число: ");
            }

            bool isFibonacci = IsFibonacci(number);
            bool isPrime = IsPrime(number);

            Console.WriteLine($"Число {number} является числом Фибоначчи: {isFibonacci}");
            Console.WriteLine($"Число {number} является простым: {isPrime}");
        }

        // Метод для проверки, является ли число числом Фибоначчи
        static bool IsFibonacci(int number)
        {
            // Проверяем, является ли число Фибоначчи
            // Формула для проверки: число x является числом Фибоначчи, если 5 * x^2 + 4 или 5 * x^2 - 4 являются квадратами целых чисел
            int val1 = 5 * number * number + 4;
            int val2 = 5 * number * number - 4;
            return IsPerfectSquare(val1) || IsPerfectSquare(val2);
        }

        // Метод для проверки, является ли число простым
        static bool IsPrime(int number)
        {
            if (number <= 1)
            {
                return false;
            }

            // Проверяем, делится ли число нацело на числа от 2 до корня из number
            for (int i = 2; i * i <= number; i++)
            {
                if (number % i == 0)
                {
                    return false; // число не является простым
                }
            }

            return true; // число является простым
        }

        // Метод для проверки, является ли число квадратом целого числа
        static bool IsPerfectSquare(int number)
        {
            int sqrt = (int)Math.Sqrt(number);
            return sqrt * sqrt == number;
        }
    }
    
}