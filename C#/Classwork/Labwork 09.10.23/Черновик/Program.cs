
using System.Security.Cryptography.X509Certificates;

string text = "Пример строки";

int length = text.Length; // Длина строки
string upperCase = text.ToUpper(); // Преобразование в верхний регистр
string lowerCase = text.ToLower(); // Преобразование в нижний регистр
bool contains = text.Contains("строка"); // Проверка наличия подстроки
int indexOfSubstring = text.IndexOf("строка"); // Первый индекс подстроки
string replaced = text.Replace("строка", "замена"); // Замена подстроки


Console.WriteLine("Введите шестизначное число:");
if (int.TryParse(Console.ReadLine(), out int number) && number >= 100000 && number <= 999999)
{
    Console.WriteLine("Введите номера разрядов для обмена (например, 1 и 6):");
    if (int.TryParse(Console.ReadLine(), out int digit1) && int.TryParse(Console.ReadLine(), out int digit2))
    {
        if (digit1 >= 1 && digit1 <= 6 && digit2 >= 1 && digit2 <= 6)
        {
            // Преобразуем число в строку для удобства работы с символами
            string numberString = number.ToString();

            // Индексы в строке начинаются с 0, поэтому уменьшаем номера разрядов на 1
            digit1--;
            digit2--;


            // Обмен местами цифр
            char[] charArray = numberString.ToCharArray();
            char temp = charArray[digit1];
            charArray[digit1] = charArray[digit2];
            charArray[digit2] = temp;

            // Преобразуем обратно в число и выводим результат
            int result = int.Parse(new string(charArray));
            //int result = int.Parse (string.Join("", charArray));
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
