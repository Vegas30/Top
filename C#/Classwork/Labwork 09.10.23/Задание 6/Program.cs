namespace Задание_6
{
    internal class Program
    {
        static void Main()
        {
            Console.Write(
@"  Пользователь вводит с клавиатуры показания тем-
пературы. В зависимости от выбора пользователя про-
грамма переводит температуру из Фаренгейта в Цельсий
или наоборот." + "\n\n");


            Console.Write("Выберите что переводим:\n1)Цельсий в Фаренгейт\n2)Фаренгейт в Цельсий\n");
            int choice;

            while (!int.TryParse(Console.ReadLine(), out choice) || !(choice == 1 || choice == 2))
            {
                Console.WriteLine("Неверный ввод. Пожалуйста, введите 1 или 2.");
            }

            Console.WriteLine("Введите температуру: ");
            double temptemperature;

            while (!double.TryParse(Console.ReadLine(), out temptemperature))
            {
                Console.WriteLine("Неверный ввод. Пожалуйста, введите число.");
            }

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
    }
}