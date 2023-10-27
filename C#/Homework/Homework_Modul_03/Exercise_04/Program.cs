namespace Exercise_04
{
    class City
    {
        private string cityName;
        private string countryName;
        private int population;
        private int areaCode;
        private string[] districts;

        // Конструктор класса
        public City(string cityName, string countryName, int population, int areaCode, string[] districts)
        {
            this.cityName = cityName;
            this.countryName = countryName;
            this.population = population;
            this.areaCode = areaCode;
            this.districts = districts;
        }

        // Метод для ввода данных о городе
        public void InputData()
        {
            Console.Write("Введите название города: ");
            cityName = Console.ReadLine();

            Console.Write("Введите название страны: ");
            countryName = Console.ReadLine();

            Console.Write("Введите количество жителей в городе: ");
            population = Convert.ToInt32(Console.ReadLine());

            Console.Write("Введите телефонный код города: ");
            areaCode = Convert.ToInt32(Console.ReadLine());

            Console.Write("Введите количество районов города: ");
            int numberOfDistricts = Convert.ToInt32(Console.ReadLine());
            districts = new string[numberOfDistricts];

            for (int i = 0; i < numberOfDistricts; i++)
            {
                Console.Write($"Введите название {i + 1}-го района: ");
                districts[i] = Console.ReadLine();
            }
        }

        // Метод для вывода данных о городе
        public void DisplayData()
        {
            Console.WriteLine($"Название города: {cityName}");
            Console.WriteLine($"Название страны: {countryName}");
            Console.WriteLine($"Количество жителей: {population}");
            Console.WriteLine($"Телефонный код города: {areaCode}");
            Console.WriteLine("Название районов города:");
            for (int i = 0; i < districts.Length; i++)
            {
                Console.WriteLine($"{i + 1}. {districts[i]}");
            }
        }

        // Методы доступа к отдельным полям через методы класса
        public string GetCityName()
        {
            return cityName;
        }

        public void SetCityName(string cityName)
        {
            this.cityName = cityName;
        }

        // Аналогично для других полей: countryName, population, areaCode, districts
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(@"
    Создайте класс «Город». Необходимо хранить в полях
класса: название города, название страны, количество
жителей в городе, телефонный код города, название районов города.
Реализуйте методы класса для ввода данных,
вывода данных, реализуйте доступ к отдельным полям
через методы класса." + "\n\n");

            City myCity = new City("Москва", "Россия", 12678079, 495, new string[] { "Центральный", "Западный", "Северный" });

            // Изменение данных через методы класса
            myCity.SetCityName("Санкт-Петербург");

            // Вывод данных через метод класса
            myCity.DisplayData();

            // Ввод данных через метод класса
            myCity.InputData();

            // Вывод обновленных данных через метод класса
            myCity.DisplayData();
        }
    }
}