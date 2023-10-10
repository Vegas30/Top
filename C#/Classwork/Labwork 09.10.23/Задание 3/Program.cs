namespace Задание_3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Ведите четыре числа: ");

            string concatenatedNumber = "";

            // Считываем четыре цифры с клавиатуры и конкатенируем их в строку
            for (int i = 0; i < 4; i++)
            {
                // Проверяем, что введенное значение - цифра
                if (int.TryParse(Console.ReadLine(), out int digit) && digit >= 0 && digit <= 9)
                {
                    concatenatedNumber += digit; // Конкатенируем введенную цифру к строке
                }
                else
                {
                    Console.WriteLine("Некорректный ввод. Пожалуйста, введите цифру.");
                    // Если введено не число, уменьшаем счетчик, чтобы повторить попытку для текущей позиции
                    i--;
                }
            }
            int number = int.Parse(concatenatedNumber);

            Console.WriteLine($"Сформированное число: {number}");

        }
    }
}