namespace ToDo_List
{
    struct Task
    {
        public string Title;
        public string Description;
        public string Priority;
        public Priority PriorityLevel;
        public DateTime? Date;
    }

    enum Priority
    {
        низкий,
        средний,
        высокий
    }


    class Program
    {
        static Task[] tasks = new Task[100]; // Массив задач (максимум 100)

        static void Main(string[] args)
        {
            while (true)
            {
                int currentLine = Console.CursorTop;
                Console.SetCursorPosition(Console.CursorLeft, currentLine + 10);
                Console.WriteLine("Выберите действие:");
                Console.WriteLine("1. Посмотреть задачи");
                Console.WriteLine("2. Добавить задачу");
                Console.WriteLine("3. Удалить задачу");
                Console.WriteLine("4. Выйти");
                int choice;
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
            Console.Clear();
            foreach (var task in tasks)
            {
                if (task.Title != null)
                    //Console.WriteLine($"Задача: {task.Title}, Описание: {task.Description} Приоритет: {task.PriorityLevel}, Дата: {task.Date} ");
                    Console.WriteLine("Задача: {0}, \tОписание: {1} \tПриоритет: {2}, \tДата: {3:D} ", task.Title, task.Description, task.PriorityLevel, task.Date);
            }
        }


        static void AddTask()
        {
            Console.Clear();

            Console.WriteLine("Введите название задачи:");
            string? title = Convert.ToString(Console.ReadLine());

            Console.WriteLine("Описание задачи:");
            string? description = Console.ReadLine();

            Console.WriteLine("Введите приоритет:");
            object? priority;
            while (!Enum.TryParse(typeof(Priority), Console.ReadLine().ToLower(), out priority))
            {
                Console.WriteLine("Введите приоритет: Низкий, Средний или Высокий");
            }

            Console.WriteLine("Введите дату:");
            DateTime? date = null;
            string inputDate = Console.ReadLine();
            if (!string.IsNullOrEmpty(inputDate))
            {
                date = DateTime.Parse(inputDate);
            }

            Task newTask = new()
            {
                Title = title,
                Description = description,
                PriorityLevel = (Priority)priority,
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
            string? title = Console.ReadLine();

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
