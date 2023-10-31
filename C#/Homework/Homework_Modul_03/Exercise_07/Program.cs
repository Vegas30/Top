namespace Exercise_07
{
    public class Matrix
    {
        private int[,] data; // двумерный массив для хранения данных матрицы

        // Конструктор для создания матрицы с заданным размером
        public Matrix(int rows, int cols)
        {
            data = new int[rows, cols];
        }

        // Конструктор для создания матрицы и заполнения ее данными
        public Matrix(int[,] initialData)
        {
            data = initialData;
        }

        // Метод для ввода данных в матрицу
        public void InputData()
        {
            int rows = data.GetLength(0);
            int cols = data.GetLength(1);

            Console.WriteLine("Введите элементы матрицы:");

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    Console.Write($"Элемент [{i + 1},{j + 1}]: ");
                    data[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }
        }

        // Метод для вывода данных матрицы
        public void DisplayData()
        {
            int rows = data.GetLength(0);
            int cols = data.GetLength(1);

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    Console.Write(data[i, j] + "\t");
                }
                Console.WriteLine();
            }
        }

        // Перегруженный метод для подсчета максимального элемента в матрице
        public int FindMaximum()
        {
            int max = data[0, 0];
            int rows = data.GetLength(0);
            int cols = data.GetLength(1);

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    if (data[i, j] > max)
                    {
                        max = data[i, j];
                    }
                }
            }

            return max;
        }

        // Перегруженный метод для подсчета минимального элемента в матрице
        public int FindMinimum()
        {
            int min = data[0, 0];
            int rows = data.GetLength(0);
            int cols = data.GetLength(1);

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    if (data[i, j] < min)
                    {
                        min = data[i, j];
                    }
                }
            }

            return min;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            // Создаем матрицу 3x3
            Matrix matrix = new Matrix(3, 3);

            // Вводим данные в матрицу
            matrix.InputData();

            // Выводим данные матрицы
            Console.WriteLine("Введенная матрица:");
            matrix.DisplayData();

            // Подсчитываем и выводим максимальный элемент
            int max = matrix.FindMaximum();
            Console.WriteLine($"Максимальный элемент в матрице: {max}");

            // Подсчитываем и выводим минимальный элемент
            int min = matrix.FindMinimum();
            Console.WriteLine($"Минимальный элемент в матрице: {min}");

            Console.ReadLine();
        }
    }
}