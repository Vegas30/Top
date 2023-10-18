

internal class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Введите шестизначное число:");
        int number = 0;

        while (!(int.TryParse(Console.ReadLine(), out number)) && number >= 100000 && number <= 999999)
        {
            Console.WriteLine("Введите шестизначное число."); 
        }
            
        


        Console.WriteLine("Введите номера разрядов для обмена (например, 1 и 6):");
        int firstDigit, secondDigit;

        while (!int.TryParse(Console.ReadLine(), out firstDigit) && firstDigit >= 1 && firstDigit <= 6)
        {
            Console.WriteLine("Неверный ввод. Пожалуйста, введите целое число от 1 до 6.");
        }
        while (!int.TryParse(Console.ReadLine(), out secondDigit) && secondDigit >= 1 && secondDigit <= 6)
        {
            Console.WriteLine("Неверный ввод. Пожалуйста, введите целое число от 1 до 6.");
        }



        // Разделяем число на цифры
        int[] digits = new int[6];
        for (int i = 5; i >= 0; i--)
        {
            digits[i] = number % 10;
            number /= 10;
        }

        // Обмениваем цифры местами
        int temp = digits[firstDigit - 1];
        digits[firstDigit - 1] = digits[secondDigit - 1];
        digits[secondDigit - 1] = temp;

        // Собираем число обратно из цифр
        int result = 0;
        for (int i = 0; i < 6; i++)
        {
            result = result * 10 + digits[i];
        }

        Console.WriteLine($"Результат обмена: {result}");



    }
}
