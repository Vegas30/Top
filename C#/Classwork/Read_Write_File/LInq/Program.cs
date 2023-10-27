using System.Linq;
namespace LInq
{

    public class Student
    {
        public string Name { get; set; }
        public int Ball { get; set; }
    }




    internal class Program
    {
        static void Main(string[] args)
        {
            Student student1 = new Student();
            student1.Name = "Name1";
            student1.Ball = 10;

            Student student2 = new Student();
            student2.Name = "Name2";
            student2.Ball = 12;

            var list = new List<Student>();
            list.Add(student1);
            list.Add(student2);

            var evenSearch = from student in list
                             where student.Ball >= 11
                             select student;



            Console.WriteLine("Студенты с оценками больше 11:");
            foreach (var student in evenSearch)
            {
                Console.WriteLine(student.Name);
            }

        }
    }
}