namespace Task1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input array size: ");
            int size = Convert.ToInt32(Console.ReadLine());

            double[] array = new double[size];

                Console.WriteLine("New array");
            for (int i = 0; i < size; i++)
            {
                Random rand = new Random();
                array[i] = rand.NextDouble() * 100;
                Console.Write($"{Math.Round(array[i],2)} ");
            }
            double summ = 0;
            for (int i = 0; i < size; i++)
            {
                summ += array[i];
            }
            Console.WriteLine($"\nSumm of all elements: {Math.Round(summ,2)}");

            double arrAver = array.Average();
            Console.WriteLine($"Average: {Math.Round(arrAver,2)}");
        }
    }
}