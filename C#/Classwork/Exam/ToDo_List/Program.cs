namespace ToDo_List
{
    struct Task
    {
        public string Title;
        public string Description;
        public string Priority;
        //public enum Priority
        //{
        //    Low,
        //    Middle,
        //    High
        //};
        public DateTime Date;
    }

    class Program
    {
        static Task[] tasks = new Task[100]; // Массив задач (максимум 100)

        static void Main(string[] args)
        {
            while (true)
            {
                Console.WriteLine("Выберите действие:");
                Console.WriteLine("1. Посмотреть задачи");
                Console.WriteLine("2. Добавить задачу");
                Console.WriteLine("3. Удалить задачу");
                Console.WriteLine("4. Выйти");
                int choice = 0;
                while (!int.TryParse(Console.ReadLine(), out choice))
                {
                    Console.WriteLine("Ошибка. Введите целое число от 1 до 4.");
                }

                switch (choice)
                {
                    case 1:
                        ShowTask();
                        break;
                    case 2:
                        AddTask();
                        break;
                    case 3:
                        RemoveTask();
                        break;
                    case 4:
                        Environment.Exit(0);
                        break;
                    default:
                        Console.WriteLine("Неверный выбор. Попробуйте снова.");
                        break;
                }
            }
        }

        static void ShowTask()
        {
            foreach (var task in tasks)
            {
                if (task.Title != null)
                    Console.WriteLine($"Задача: {task.Title}, Описание: {task.Description} Приоритет: {task.Priority}, Дата: {task.Date} ");
            }
        }

        static void AddTask()
        {
            Console.WriteLine("Введите название задачи:");
            string title = Convert.ToString(Console.ReadLine());
            Console.WriteLine("Описание задачи:");
            string description = Console.ReadLine();
            Console.WriteLine("Введите приоритет:");
            string priority = Console.ReadLine();
            Console.WriteLine("Введите дату:");
            DateTime date = Convert.ToDateTime(Console.ReadLine());

            Task newTask = new Task
            {
                Title = title,
                Description = description,
                Priority = priority,
                Date = date
            };

            for (int i = 0; i < tasks.Length; i++)
            {
                if (tasks[i].Title == null)
                {
                    tasks[i] = newTask;
                    Console.WriteLine("Задача успешно добавлена!");
                    return;
                }
            }

            Console.WriteLine("Невозможно добавить новый задачу. Список задач полон.");
        }

        static void RemoveTask()
        {
            Console.WriteLine("Введите имя задачи, которую нужно удалить:");
            string title = Console.ReadLine();

            for (int i = 0; i < tasks.Length; i++)
            {
                if (tasks[i].Title != null && tasks[i].Title.Equals(title, StringComparison.OrdinalIgnoreCase))
                {
                    tasks[i] = new Task(); // Удаляем контакт, просто создав новый пустой контакт
                    Console.WriteLine("Задача успешно удалена!");
                    return;
                }
            }

            Console.WriteLine("Задача не найдена.");
        }
    }
}