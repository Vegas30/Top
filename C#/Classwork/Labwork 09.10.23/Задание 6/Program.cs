namespace Задание_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Выберите что переводим:\n1)Цельсий в Фаренгейт\n2)Фаренгейт в Цельсий\n");
            int choice = 0;

            if (!int.TryParse(Console.ReadLine(), out choice))
            {
                Console.WriteLine("Неверный ввод. Пожалуйста, введите корректное число.");
            }

            Console.WriteLine("Введите температуру: ");
            double temptemperature;

            if (double.TryParse(Console.ReadLine(), out temptemperature))
            {

                switch (choice)
                {
                    case 1:
                        //(0 °C × 9/5) + 32
                        double tempFarengeit = (temptemperature * 9 / 5) + 32;
                        Console.WriteLine($"Температура в Фаренгейтах: {tempFarengeit}");
                        break;

                    case 2:
                        //5/9 (t °F - 32)
                        double tempCelsius = (temptemperature - 32) * 5 / 9;
                        Console.WriteLine($"Температура в градусах Цельсия: {tempCelsius}");
                        break;

                    default:
                        break;
                }
            }

            else
            {
                Console.WriteLine("Неверный ввод. Пожалуйста, введите корректное число.");
            }



        }
    }
}