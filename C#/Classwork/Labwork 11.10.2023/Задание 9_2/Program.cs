namespace Задание_9_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write(@"
    Реализуйте приложение для подсчёта количество вхождений подстроки в строку. Пользователь вводит исходную
строку и слово для поиска. Приложений отображает результат поиска.
Например:
пользователь ввёл: Why she had to go. I don't know, she wouldn't say;
подстрока для поиска: she;
результат поиска: 2.
            " + "\n");

            Console.WriteLine("Введите исходную строку:");
            string inputString = Console.ReadLine();

            Console.WriteLine("Введите подстроку для поиска:");
            string searchString = Console.ReadLine();

            int count = 0;
            int index = 0;

            while ((index = inputString.IndexOf(searchString, index)) != -1)
            {
                index += searchString.Length;
                count++;
            }
            Console.WriteLine($"Результат поиска: {count}");
        }

    }
}