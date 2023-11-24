using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MainForms
{
    public partial class MainForm : Form
    {
        private List<Transaction> transactions;
        private List<Category> categories;
        public MainForm()
        {
            InitializeComponent();

            // Инициализация списка транзакций и категорий (можно загрузить из базы данных или другого источника).
            transactions = new List<Transaction>();
            categories = new List<Category>
            {
                new Category("Еда"),
                new Category("Транспорт"),
                new Category("Зарплата"),
                // Добавьте другие категории по необходимости.
            };

            // Заполнение выпадающего списка категорий.
            foreach (var category in categories)
            {
                categoryComboBox.Items.Add(category.Name);
            }
        }

        private void addTransactionButton_Click(object sender, EventArgs e)
        {
            // Получение данных о транзакции из пользовательского ввода.
            string description = descriptionTextBox.Text;
            decimal amount = decimal.Parse(amountTextBox.Text);
            Category selectedCategory = categories[categoryComboBox.SelectedIndex];
            TransactionType type = incomeRadioButton.Checked ? TransactionType.Income : TransactionType.Expense;

            // Создание новой транзакции.
            Transaction newTransaction = new Transaction(description, amount, selectedCategory, type);

            // Добавление транзакции в список и отображение в таблице.
            transactions.Add(newTransaction);
            UpdateTransactionsGridView();
        }

        private void UpdateTransactionsGridView()
        {
            // Очистка таблицы перед обновлением данных.
            transactionsGridView.Rows.Clear();

            // Заполнение таблицы данными о транзакциях.
            foreach (var transaction in transactions)
            {
                transactionsGridView.Rows.Add(transaction.Description, transaction.Amount, transaction.Category.Name, transaction.Type);
            }
        }
        private void radioButton_CheckedChanged(object sender, EventArgs e)
        {
            RadioButton radioButton = sender as RadioButton;
            if (radioButton != null && radioButton.Checked)
            {
                if (radioButton == incomeRadioButton)
                {
                    // Логика для выбора типа "Доход"
                }
                else if (radioButton == expenseRadioButton)
                {
                    // Логика для выбора типа "Расход"
                }
            }
        }

        private void newCategoryButton_Click(object sender, EventArgs e)
        {
            ManageCategoriesForm manageCategoriesForm = new ManageCategoriesForm(categories);
            manageCategoriesForm.ShowDialog();
        }
    }

    public class Transaction
    {
        public string Description { get; }
        public decimal Amount { get; }
        public Category Category { get; }
        public TransactionType Type { get; }

        public Transaction(string description, decimal amount, Category category, TransactionType type)
        {
            Description = description;
            Amount = amount;
            Category = category;
            Type = type;
        }
    }

    public class Category
    {
        public string Name { get; }

        public Category(string name)
        {
            Name = name;
        }
    }

    public enum TransactionType
    {
        Income,
        Expense
    }
}


