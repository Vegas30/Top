namespace черновик
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = System.Text.Encoding.UTF8;
            Console.WriteLine("Модуль 1 Задание 3 Пользователь вводит с клавиатуры четыре цифры.");
            Console.WriteLine("Необходимо создать число, содержащее эти цифры.");
            Console.WriteLine("Например,если с клавиатуры введено 1,5,7,8 тогда нужно сформировать число 1578.");


            Console.WriteLine("Пожалуйста, введите первое число : ");

            int number1 = int.Parse(Console.ReadLine());

            Console.WriteLine("Пожалуйста, введите второе число : ");

            int number2 = int.Parse(Console.ReadLine());
            Console.WriteLine("Пожалуйста, введите третье число : ");

            int number3 = int.Parse(Console.ReadLine());
            Console.WriteLine("Пожалуйста, введите четвертое число : ");

            int number4 = int.Parse(Console.ReadLine());

            Console.WriteLine($"{number1}{number2}{number3}{number4}");
        }
    }
}