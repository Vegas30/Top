namespace Задание_7
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write(@"
    Пользователь вводит предложение с клавиатуры. Вам
необходимо перевернуть каждое слово предложения и
отобразить результат на экран.
Например:
пользователь ввёл: sun cat dogs cup tea;
после переворота: nus tac sgod puc aet.
            " + "\n");

            Console.WriteLine("Введите предложение:");
            string input = Console.ReadLine();

            string[] words = input.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

            foreach(string word in words)
            {
                char[] charWord = word.ToCharArray();
                Array.Reverse(charWord);

                string reversedWord = new string(charWord);

                Console.Write(reversedWord + " ");
            }

        }
    }
}