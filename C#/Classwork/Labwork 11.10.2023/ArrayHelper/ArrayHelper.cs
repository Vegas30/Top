namespace ArrayHelper
{
    public class ArrayOperations
    {
        public static void FillArrayWithRandomNumbers(int[] array)
        {
            Random random = new Random();
            for (int i = 0; i < array.Length; i++)
            {
                array[i] = random.Next(1, 101); // Заполняем массив случайными числами от 1 до 100 
            }
        }

        public static void FillArrayManually(int[] array)
        {
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write($"Введите элемент {i + 1}: ");

                while (!int.TryParse(Console.ReadLine(), out array[i]))
                {
                    Console.WriteLine("Введите число: ");
                }
            }
        }

        public static void ShowArray(int[] array)
        {
            Console.WriteLine("Ваш массив:");
            foreach (int num in array)
            {
                Console.Write(num + " ");
            }
            Console.WriteLine("\n");
        }

        public static void Fill2DimArrayWithRandomNumbers(int[,] array)
        {
            Random random = new Random();

            for (int i = 0; i < array.GetLength(0); i++)
            {
                for (int j = 0; j < array.GetLength(1); j++)
                {
                    array[i, j] = random.Next(1, 101); // заполняем случайными числами от 1 до 100
                }
            }
        }

        public static void Fill2DimArrayManually(int[,] array)
        {
            for (int i = 0; i < array.GetLength(0); i++)
            {
                for (int j = 0; j < array.GetLength(1); j++)
                {
                    Console.WriteLine($"Введите элемент массива для строки {i + 1} и столбца {j + 1}:");
                    array[i, j] = int.Parse(Console.ReadLine());
                }
            }
        }

        public static void Show2DimArray(int[,] array, int rows, int cols)
        {
            Console.WriteLine("Ваш массив:");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    Console.Write(array[i, j] + "\t");
                }
                Console.WriteLine();
            }
        }
    }
}