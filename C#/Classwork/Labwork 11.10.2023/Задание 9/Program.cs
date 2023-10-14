namespace Задание_9
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите предложение:");
            string inputSentence = Console.ReadLine();

            Console.WriteLine("Введите слово:");
            string targetWord = Console.ReadLine();

            string[] words = inputSentence.Split(new char[] { ' ', ',', '.', '!', '?' }, StringSplitOptions.RemoveEmptyEntries); // убираея пустые элементы при двойном разделителе
            int count = 0;

            foreach (string word in words)
            {
                if (word.Equals(targetWord, StringComparison.OrdinalIgnoreCase)) // игногируем разницу заглавных и строчных букв
                {
                    count++;
                }
            }

            Console.WriteLine($"Слово '{targetWord}' повторяется {count} раз(а) в предложении.");
        }
    }
}