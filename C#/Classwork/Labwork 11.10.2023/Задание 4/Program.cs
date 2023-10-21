using static ArrayHelper.ArrayOperations;

namespace Задание_4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write(@"
    Даны 2 массива размерности M и N соответственно.
Необходимо переписать в третий массив общие элементы
первых двух массивов без повторений.
            " + "\n");

            Console.WriteLine("Введите размер первого массива: ");
            int size1;
            while (!int.TryParse(Console.ReadLine(), out size1))
            {
                Console.WriteLine("Пфф... Введите целое положительное число.");
            }

            int[] array1 = new int[size1];

            Console.WriteLine("Введите размер второго массива: ");
            int size2;
            while (!int.TryParse(Console.ReadLine(), out size2))
            {
                Console.WriteLine("Пфф... Введите целое положительное число.");
            }

            int[] array2 = new int[size2];

            Console.WriteLine("\nВыберите способ заполнения массива, 1 или 2:\n1: Заполнить автоматически.\n2: Заполнить самостоятельно.");
            int choice;
            while (!int.TryParse(Console.ReadLine(), out choice) || !(choice == 1 || choice == 2))
            {
                Console.WriteLine("Выберите 1 или 2.");
            }

            switch (choice)
            {
                case 1:
                    Console.Write("Первый ");
                    FillArrayWithRandomNumbers(array1);
                    ShowArray(array1);

                    Console.Write("Второй ");
                    FillArrayWithRandomNumbers(array2);
                    ShowArray(array2);

                    break;
                case 2:
                    Console.WriteLine("Первый: ");
                    FillArrayManually(array1);
                    ShowArray(array1);

                    Console.WriteLine("Второй: ");
                    FillArrayManually(array2);
                    ShowArray(array2);

                    break;
                default:
                    return;
            }

            int maxLength = Math.Max(array1.Length, array2.Length);

            int[] array3 = new int[maxLength];
            int count = 0; // Счетчик общих элементов

            for (int i = 0; i < array1.Length; i++)
            {
                for (int j = 0; j < array2.Length; j++)
                {
                    if (array1[i] == array2[j])
                    {
                        bool alreadyThere = false;
                        for (int k = 0; k < count; k++)
                        {

                            if (array3[k] == array1[i])
                            {
                                alreadyThere = true;
                                break;
                            }
                        }
                        if (!alreadyThere)
                        {
                            array3[count] = array1[i];
                            count++;
                        }
                        break;
                    }
                }
            }

            /*
             
            int arr2[ROWS][COLS];

  for (size_t i = 0; i < ROWS; i++)
  {

    for (size_t j = 0; j < COLS; )
    {
      int newNum = rand() % 100;
      bool alreadyThere = false;

      for (size_t row = 0; row < ROWS; row++)
      {
        for (size_t col = 0; col < COLS; col++)
        {
          if (newNum == arr2[row][col])
          {
            alreadyThere = true;
            break;
          }

        }
      }
      if (!alreadyThere)
      {
        arr2[i][j] = newNum;
        j++;
      }
    }
  }
             
             */



            Console.Write("Общие элементы в двух массивах: ");
            for (int i = 0; i < count; i++)
            {
                Console.Write(array3[i] + " ");
            }
            if (count == 0)
            {
                Console.WriteLine("0");
            }
        }
    }
}