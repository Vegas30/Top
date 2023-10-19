using static ArrayHelper.ArrayOperations;

namespace Задание_1
{
    internal class Program
    {

      
        static void Main()
        {
            Console.Write(@"
    Создайте приложение, которое отображает количество 
четных, нечетных, уникальных элементов массива.
            " + "\n");

            Console.WriteLine("Введите размер массива: ");
            int size;
            while (!int.TryParse(Console.ReadLine(), out size))
            {
                Console.WriteLine("Пфф... Введите целое положительное число.");
            }

            int[] array = new int[size];

            Console.WriteLine("\nВыберите способ заполнения массива, 1 или 2:\n1: Заполнить автоматически.\n2: Заполнить самостоятельно.");
            int choice;
            while (!int.TryParse(Console.ReadLine(), out choice) || !(choice == 1 || choice == 2))
            {
                Console.WriteLine("Выберите 1 или 2.");
            }

            switch (choice)
            {
                case 1:
                    FillArrayWithRandomNumbers(array);
                    ShowArray(array);
                    break;
                case 2:
                    FillArrayManually(array);
                    ShowArray(array);
                    break;
                default:
                    return;
            }

            int oddCount = 0;
            int evenCount = 0;

            int uniqCount = 0;

            foreach (int i in array)
            {
                if (i % 2 == 0)
                {
                    oddCount++;
                }
                else
                {
                    evenCount++;
                }
            }
            for (int i = 0; i < array.Length - 1; i++)
            {
                int count = 0;
                for (int j = i + 1; j < array.Length - 1; j++)
                {
                    if (array[i] == array[j])
                    {
                        count++;
                    }
                }
                if (count == 0)
                {
                    uniqCount++;
                }
            }

            Console.WriteLine($"\nКоличество четных: {oddCount}");
            Console.WriteLine($"Количество нечетных: {evenCount}");
            Console.WriteLine($"Количество уникальных: {uniqCount}");
        }
    }
}