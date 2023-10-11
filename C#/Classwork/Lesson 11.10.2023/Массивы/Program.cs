namespace Массивы
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str1 = "Простая строка";
            char[] chArr = { 'c', 'т', 'р', 'о', 'к', 'а' };
            string str2 = new string(chArr);
            string str3 = new string(chArr, 1,2);

            Console.WriteLine(str3);

        }
    }
}