namespace Задание_4_второй_вариант
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Console.Write(
@"  Пользователь вводит шестизначное число. После чего
пользователь вводит номера разрядов для обмена цифр.
Например, если пользователь ввёл один и шесть — это
значит, что надо обменять местами первую и шестую
цифры.
Число 723895 должно превратиться в 523897.
Если пользователь ввел не шестизначное число тре-
буется вывести сообщение об ошибке." + "\n\n");



            Console.WriteLine("Введите шестизначное число:");
            if (int.TryParse(Console.ReadLine(), out int number) && number >= 100000 && number <= 999999)
            {
                Console.WriteLine("Введите номера разрядов для обмена (например, 1 и 6):");
                if (int.TryParse(Console.ReadLine(), out int digit1) && int.TryParse(Console.ReadLine(), out int digit2))
                {
                    if (digit1 >= 1 && digit1 <= 6 && digit2 >= 1 && digit2 <= 6)
                    {
                      
                        // Разделяем число на цифры
                        int[] digits = new int[6];
                        for (int i = 5; i >= 0; i--)
                        {
                            digits[i] = number % 10;
                            number /= 10;
                        }

                        // Обмениваем цифры местами

                        (digits[digit1 - 1], digits[digit2 - 1]) = (digits[digit2 - 1], digits[digit1 - 1]);
                        /*                        int temp = digits[digit1 - 1];
                                                digits[digit1 - 1] = digits[digit2 - 1];
                                                digits[digit2 - 1] = temp;
                        */

                        // Собираем число обратно из цифр
                        int result = 0;
                        for (int i = 0; i < 6; i++)
                        {
                            result = result * 10 + digits[i];
                        }

                        Console.WriteLine($"Результат обмена: {result}");
                    }
                    else
                    {
                        Console.WriteLine("Некорректные номера разрядов. Введите числа от 1 до 6.");
                    }
                }
                else
                {
                    Console.WriteLine("Некорректный ввод номеров разрядов.");
                }
            }
            else
            {
                Console.WriteLine("Ошибка. Введите шестизначное число.");
            }
        }
    }
}