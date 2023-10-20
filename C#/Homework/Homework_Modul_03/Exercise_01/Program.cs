namespace Exercise_01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(@"
    Напишите метод, который возвращает произведение чисел в указанном диапазоне.
Границы диапазона передаются в качестве параметров." + "\n\n");

            Console.WriteLine("Введите начальное значение: ");
            int start;
            while(!int.TryParse(Console.ReadLine(), out start))
            {
                Console.WriteLine("Ошибка. Введите целое число: ");
            }

            Console.WriteLine("Введите конечное значение: ");
            int end;
            while (!int.TryParse(Console.ReadLine(), out end))
            {
                Console.WriteLine("Ошибка. Введите целое число: ");
            }
            
            int result = CalculateProductInRange(start, end);
            Console.WriteLine($"Произведение чисел от {start} до {end} равно: {result}");
        }

        
        static int CalculateProductInRange(int start, int end)
        {
            // Проверка на корректность границ диапазона
            if (start > end)
            {
                Console.WriteLine("Ошибка: начальное значение больше конечного значения.");
                return 0; // возвращаем 0 в случае ошибки
            }

            int product = 1; // начальное значение произведения

            
            for (int i = start; i <= end; i++)
            {
                product *= i;
            }

            return product; // возвращаем произведение
        }
    }
}