namespace Задание_5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // двумерный массив 3x3
            int[,] array =
            {
            { 5, 10, 3 },
            { 8, 2, 7 },
            { 1, 9, 4 }
            };

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