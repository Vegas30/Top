using System.Globalization;

namespace Задание_9_второй_способ
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
            string strTemp = "";
            for (int i = 0; i < inputString.Length; i++)
            {
                if (inputString[i] == searchString[0])
                {
                    for (int j = 0; j < searchString.Length; j++)
                    {
                        if (inputString[i + j] == searchString[j])
                        {
                            strTemp = strTemp + inputString[i + j];
                        }
                    }
                    if (strTemp == searchString)
                    {
                        count++;
                    }

                }
                
                strTemp = "";
            }




            Console.WriteLine($"Результат поиска: {count}");
        }
    }
}