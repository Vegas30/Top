namespace Class
{
    class City
    {
        private string name;
        public string country { get; set; }
        private int population ;
        private int telCode;
        private Districts district; 

        public void SetName(string value)
        {
            name = value;
        }
        public string GetName()
        {
            return name;
        }

        public int Population
        {
            set
            {
                population = value;
            }
            get
            {
                return population;
            }
        }
        public void Show()
        {
            Console.WriteLine("\t{0} {1} {2} {3} {4}", name, country, population, telCode, district );
            //Console.WriteLine($"\t{0}", GetName());
        }
    }

    enum Districts
    {
        Kirovskiy,
        Leninskiy
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            City astra = new City();
            astra.SetName("NewAstra");
            astra.country = "Russia";
            astra.Population = 550000;
            Console.WriteLine("\t{0}",astra.GetName());
            astra.Show();
        }
    }
}