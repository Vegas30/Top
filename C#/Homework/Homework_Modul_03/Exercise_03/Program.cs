namespace Exercise_03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            bool repeat = true;
            do
            {

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

                Console.WriteLine("\nВыберите тип сортировки массива, 1 или 2:\n1: По возрастанию.\n2: По убыванию.");
                int sortChoice;
                while (!int.TryParse(Console.ReadLine(), out sortChoice) || !(sortChoice == 1 || sortChoice == 2))
                {
                    Console.WriteLine("Выберите 1 или 2.");
                }

                switch (sortChoice)
                {
                    case 1:

                        BubbleSortAscending(array);
                        Console.WriteLine("Отсортированный массив по возрастанию: " + string.Join(", ", array));
                        break;

                    case 2:

                        BubbleSortDescending(array);
                        Console.WriteLine("Отсортированный массив по убыванию: " + string.Join(", ", array));
                        break;

                    default:
                        return;
                }

                Console.WriteLine("Для повтора нажмите (Y) или (any key) для выхода)");
                string answer = Console.ReadLine().ToLower();
                
                if (answer != "y")
                {
                    repeat = false;
                }

                Console.Clear();
            } while (repeat);

            // Метод для сортировки массива по возрастанию (пузырьковая сортировка)
            static void BubbleSortAscending(int[] arr)
            {
                int n = arr.Length;
                for (int i = 0; i < n - 1; i++)
                {
                    for (int j = 0; j < n - i - 1; j++)
                    {
                        if (arr[j] > arr[j + 1])
                        {
                            // обмен значениями
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
            }

            // Метод для сортировки массива по убыванию (пузырьковая сортировка)
            static void BubbleSortDescending(int[] arr)
            {
                int n = arr.Length;
                for (int i = 0; i < n - 1; i++)
                {
                    for (int j = 0; j < n - i - 1; j++)
                    {
                        if (arr[j] < arr[j + 1])
                        {
                            // обмен значениями
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
            }

            static void FillArrayWithRandomNumbers(int[] array)
            {
                Random random = new Random();
                for (int i = 0; i < array.Length; i++)
                {
                    array[i] = random.Next(1, 101); // Заполняем массив случайными числами от 1 до 100 
                }
            }

            static void FillArrayManually(int[] array)
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

            static void ShowArray(int[] array)
            {
                Console.WriteLine("Ваш массив:");
                foreach (int num in array)
                {
                    Console.Write(num + " ");
                }
                Console.WriteLine("\n");
            }
        }
    }
}
