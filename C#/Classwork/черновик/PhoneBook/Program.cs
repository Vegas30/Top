namespace PhoneBook
{
    struct Contact
    {
        public string Name;
        public string PhoneNumber;
        public string Email;
    }

    class Program
    {
        static Contact[] contacts = new Contact[100]; // Массив контактов (максимум 100)

        static void Main(string[] args)
        {
            while (true)
            {
                Console.WriteLine("Выберите действие:");
                Console.WriteLine("1. Посмотреть контакты");
                Console.WriteLine("2. Добавить контакт");
                Console.WriteLine("3. Удалить контакт");
                Console.WriteLine("4. Выйти");
                int choice = int.Parse(Console.ReadLine());

                switch (choice)
                {
                    case 1:
                        ShowContacts();
                        break;
                    case 2:
                        AddContact();
                        break;
                    case 3:
                        RemoveContact();
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

        static void ShowContacts()
        {
            Console.WriteLine("Введите букву для фильтрации контактов:");
            char filterLetter = Console.ReadLine()[0];
            Console.WriteLine("Контакты, имена которых начинаются на букву '" + filterLetter + "':");
            foreach (var contact in contacts)
            {
                if (contact.Name != null && contact.Name.StartsWith(filterLetter.ToString(), StringComparison.OrdinalIgnoreCase))
                {
                    Console.WriteLine($"Имя: {contact.Name}, Телефон: {contact.PhoneNumber}, Email: {contact.Email}");
                }
            }
        }

        static void AddContact()
        {
            Console.WriteLine("Введите имя:");
            string name = Console.ReadLine();
            Console.WriteLine("Введите номер телефона:");
            string phoneNumber = Console.ReadLine();
            Console.WriteLine("Введите электронную почту:");
            string email = Console.ReadLine();

            Contact newContact = new Contact
            {
                Name = name,
                PhoneNumber = phoneNumber,
                Email = email
            };

            for (int i = 0; i < contacts.Length; i++)
            {
                if (contacts[i].Name == null)
                {
                    contacts[i] = newContact;
                    Console.WriteLine("Контакт успешно добавлен!");
                    return;
                }
            }

            Console.WriteLine("Невозможно добавить новый контакт. Телефонная книга полна.");
        }

        static void RemoveContact()
        {
            Console.WriteLine("Введите имя контакта, который нужно удалить:");
            string name = Console.ReadLine();

            for (int i = 0; i < contacts.Length; i++)
            {
                if (contacts[i].Name != null && contacts[i].Name.Equals(name, StringComparison.OrdinalIgnoreCase))
                {
                    contacts[i] = new Contact(); // Удаляем контакт, просто создав новый пустой контакт
                    Console.WriteLine("Контакт успешно удален!");
                    return;
                }
            }

            Console.WriteLine("Контакт с указанным именем не найден.");
        }
    }
}