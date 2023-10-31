using System;

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

        public void FillMatrixWithRandomNumbers()
        {
            Random random = new Random();
            for (int i = 0; i < data.GetLength(0); i++)
            {
                for (int j = 0; j < data.GetLength(1); j++)
                {
                    data[i, j] = random.Next(1, 101); // заполняем случайными числами от 1 до 100
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
            Console.Write(@"
    Реализуйте класс «Матрица». Реализуйте конструкторы и методы класса для ввода данных, вывода данных,
подсчёта максимума, подсчёта минимума.
            " + "\n");

            Console.WriteLine("Введите количество строк матрицы:");
            int rows;
            while (!int.TryParse(Console.ReadLine(), out rows))
            {
                Console.WriteLine("Вы ввели не целое число!");
            }

            Console.WriteLine("Введите количество столбцов матрицы:");
            int cols;
            while (!int.TryParse(Console.ReadLine(), out cols))
            {
                Console.WriteLine("Вы ввели не целое число!");
            }

            // Создаем матрицу
            Matrix matrix = new Matrix(rows, cols);

            Console.WriteLine("\nВыберите способ заполнения матрицы, 1 или 2:\n1: Заполнить автоматически.\n2: Заполнить самостоятельно.");
            int choice;
            while (!int.TryParse(Console.ReadLine(), out choice) || !(choice == 1 || choice == 2))
            {
                Console.WriteLine("Выберите 1 или 2.");
            }

            switch (choice)
            {
                case 1:
                    matrix.FillMatrixWithRandomNumbers();
                    matrix.DisplayData();
                    break;
                case 2:
                    // Вводим данные в матрицу
                    matrix.InputData();
                    // Выводим данные матрицы
                    Console.WriteLine("Введенная матрица:");
                    matrix.DisplayData();
                    break;
                default:
                    return;
            }

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