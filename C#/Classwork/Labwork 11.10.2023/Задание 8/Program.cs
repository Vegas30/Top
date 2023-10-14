namespace Задание_8
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите предложение:");
            string input = Console.ReadLine();

            string vowels = "ауоыэяюёиеАУОЫЭЯЮЁИЕ";
            int count = 0;

            foreach (char letter in input)
            {
                if (vowels.Contains(letter))
                {
                    count++;
                }
            }

            Console.WriteLine($"Количество гласных букв в предложении: {count}");
        }
    }
}