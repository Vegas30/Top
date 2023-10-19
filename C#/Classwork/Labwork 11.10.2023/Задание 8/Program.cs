namespace Задание_8
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write(@"
    Пользователь вводит с клавиатуры предложение. Приложение должно посчитать количество гласных букв в нём.
            " + "\n");

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