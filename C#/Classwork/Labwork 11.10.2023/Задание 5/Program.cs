using static ArrayHelper.ArrayOperations;

namespace Задание_5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write(@"
    Разработайте приложение, которое будет находить минимальное и максимальное значение в двумерном массиве.
            " + "\n");


            Console.WriteLine("Введите количество строк массива:");
            int rows = int.Parse(Console.ReadLine());

            Console.WriteLine("Введите количество столбцов массива:");
            int cols = int.Parse(Console.ReadLine());

            int[,] array = new int[rows, cols];

            Console.WriteLine("\nВыберите способ заполнения массива, 1 или 2:\n1: Заполнить автоматически.\n2: Заполнить самостоятельно.");
            int choice;
            while (!int.TryParse(Console.ReadLine(), out choice) || !(choice == 1 || choice == 2))
            {
                Console.WriteLine("Выберите 1 или 2.");
            }

            switch (choice)
            {
                case 1:
                    Fill2DimArrayWithRandomNumbers(array);
                    Show2DimArray(array, rows, cols);
                    break;
                case 2:
                    Fill2DimArrayManually(array);
                    Show2DimArray(array, rows, cols);
                    break;
                default:
                    return;
            }

            int min = array[0, 0];
            int max = array[0, 0];

            for (int i = 0; i < array.GetLength(0); i++)
            {
                for (int j = 0; j < array.GetLength(1); j++)
                {
                    if (array[i, j] < min)
                    {
                        min = array[i, j];
                    }

                    if (array[i, j] > max)
                    {
                        max = array[i, j];
                    }
                }
            }

            Console.WriteLine("Минимальное значение в массиве: " + min);
            Console.WriteLine("Максимальное значение в массиве: " + max);
        }
    }
}