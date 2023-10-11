namespace Задание_1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] arr = { 1, 2, 3, 4, 3, 6, 3, 8, 3, 10 };
            int oddCount = 0;
            int evenCount = 0;

            int uniqCount = 0;
            
            foreach (int i in arr)
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
            for (int i = 0; i < arr.Length - 1; i++)
            {
                int count = 0;
                for (int j = i + 1; j < arr.Length -1; j++)
                {
                    if (arr[i] == arr[j] )
                    {
                        count++;
                    }
                }
                if (count == 0)
                {
                    uniqCount++;
                }
            }

            Console.WriteLine($"Количество четных: {oddCount}");
            Console.WriteLine($"Количество нечетных: {evenCount}");
            Console.WriteLine($"Количество уникальных: {uniqCount}");


        }
    }
}