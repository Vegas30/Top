namespace Exercise_05
{
    class Employee
    {
        public string Name { get; private set; }
        public Employee(string name) 
        {
            Name = name;
        
        }

        public void SetName(string name)
        {
            Name = name;
        }

        public void Show()
        {
            Console.WriteLine(Name);
        }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            Employee emp1 = new Employee("Fedor");

            emp1.Show();

            Console.WriteLine("Name: ");
            string name = Console.ReadLine();
            emp1.SetName(name);
            emp1.Show();

        }
    }
}