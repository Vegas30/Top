using static ArrayHelper.ArrayOperations;

namespace Задание_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write(@"
    Создайте приложение, отображающее количество
значений в массиве меньше заданного параметра пользователем.
Например, количество значений меньших, чем 7
(7 введено пользователем с клавиатуры).
            " + "\n");

            Console.WriteLine("Введите целое число: ");

            int userNumber;

            if (!int.TryParse(Console.ReadLine(), out userNumber))
            {
                Console.WriteLine("Вы ввели не целое число!");
            }

            Console.WriteLine("Введите размер массива: ");
            int size;
            while (!int.TryParse(Console.ReadLine(), out size))
            {
                Console.WriteLine("Пфф... Введите целое положительное число.");
            }

            int[] numArr = new int[size];

            Console.WriteLine("\nВыберите способ заполнения массива, 1 или 2:\n1: Заполнить автоматически.\n2: Заполнить самостоятельно.");
            int choice;
            while (!int.TryParse(Console.ReadLine(), out choice) || !(choice == 1 || choice == 2))
            {
                Console.WriteLine("Выберите 1 или 2.");
            }

            switch (choice)
            {
                case 1:
                    FillArrayWithRandomNumbers(numArr);
                    ShowArray(numArr);
                    break;
                case 2:
                    FillArrayManually(numArr);
                    ShowArray(numArr);
                    break;
                default:
                    return;
            }

           // int[] numArr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

            int countNumbers = 0;

            foreach (int num in numArr)
            {
                if (num < userNumber)
                {
                    countNumbers++;
                }    
            }

            Console.WriteLine($"Количество значений в массиве меньше заданного: {countNumbers}");
        }
    }
}