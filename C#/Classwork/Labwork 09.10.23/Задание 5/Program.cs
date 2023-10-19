namespace Задание_5
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Console.Write(
@"  Пользователь вводит с клавиатуры дату. Приложе-
ние должно отобразить название сезона и дня недели.
Например, если введено 22.12.2021, приложение должно
отобразить Winter Wednesday." + "\n\n");



            Console.WriteLine("Введите дату: ");
            string inputDate = Console.ReadLine();

            // Пытаемся преобразовать введенную строку в объект DateTime
            if (DateTime.TryParseExact(inputDate, "dd.MM.yyyy", null, System.Globalization.DateTimeStyles.None, out DateTime date))
            {
                // Получаем название сезона
                string season = GetSeason(date.Month);

                // Получаем название дня недели
                DayOfWeek dayOfWeek = date.DayOfWeek;
                //string dayOfWeek = date.ToString("dddd"); // и так тоже можно

                // Выводим результат
                Console.WriteLine($"{season} {dayOfWeek}");
            }
            else
            {
                Console.WriteLine("Некорректный формат даты.");
            }

            static string GetSeason(int month)
            {
                switch (month)
                {
                    case 12:
                    case 1:
                    case 2:
                        return "Winter";
                    case 3:
                    case 4:
                    case 5:
                        return "Spring";
                    case 6:
                    case 7:
                    case 8:
                        return "Summer";
                    case 9:
                    case 10:
                    case 11:
                        return "Autumn";
                    default:
                        return "Unknown Season";
                }

            }
        }

    }
}
