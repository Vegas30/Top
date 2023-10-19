namespace Черновик
{
    internal class Program
    {
        static void Main()
        {
            Console.WriteLine("Введите исходную строку:");
            string inputString = Console.ReadLine();

            Console.WriteLine("Введите подстроку для поиска:");
            string searchString = Console.ReadLine();

            int count = CountSubstringOccurrences(inputString, searchString);

            Console.WriteLine($"Результат поиска: {count}");
        }

        static int CountSubstringOccurrences(string input, string search)
        {
            int count = 0;
            int index = 0;

            while ((index = input.IndexOf(search, index)) != -1)
            {
                index += search.Length;
                count++;
            }

            return count;
        }
    }
}