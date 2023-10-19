namespace Задание_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write(@"
    Пользователь вводит предложение с клавиатуры. Вам
необходимо подсчитать количество слов в нём.
            " + "\n");

            Console.WriteLine("Введите предложение:");
            string input = Console.ReadLine();

            // string[] words = input.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
            // int wordCount = words.Length;

            int wordCount = 0;
            bool inWord = false;   

            foreach (char c in input)
            {
                if (char.IsLetter(c))
                {
                    // Если текущий символ - буква, и мы не находимся внутри слова, начинаем новое слово
                    if (!inWord)
                    {
                        inWord = true;
                        wordCount++;
                    }
                }
                else
                {
                    // Если текущий символ не буква, мы не находимся внутри слова
                    inWord = false;
                }
            }

            Console.WriteLine($"Количество слов в предложении: {wordCount}");
        }
    }
}