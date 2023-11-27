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
        decimal currentBalance = 0;
        

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
            string description = "";
            if (string.IsNullOrWhiteSpace(descriptionTextBox.Text))
            {
                MessageBox.Show("Введите корректное описание !", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }
            else
            {
                description = descriptionTextBox.Text;
            }
            decimal amount = decimal.Parse(amountTextBox.Text);
            if (!decimal.TryParse(amountTextBox.Text, out amount))
            {
                MessageBox.Show("Введите корректную сумму транзакции!", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            if (categoryComboBox.SelectedIndex == -1)
            {
                MessageBox.Show("Выберите категорию!", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }
            Category selectedCategory = categories[categoryComboBox.SelectedIndex];

            TransactionType type;

            if (incomeRadioButton.Checked)
            {
                type = TransactionType.Income;
            }
            else if (expenseRadioButton.Checked)
            {
                type = TransactionType.Expense;
            }
            else
            {
                // Если ни один из RadioButton не выбран
                MessageBox.Show("Выберите тип транзакции, Доход или Расход", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            // Создание новой транзакции.
            Transaction newTransaction = new Transaction(description, amount, selectedCategory, type);

            // Добавление транзакции в список и отображение в таблице.
            transactions.Add(newTransaction);
            
            UpdateTransactionsGridView();
            UpdeteCurrentBalance();
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

        private void UpdeteCurrentBalance()
        {
            balanceValueTextBox.Text = string.Empty;
            currentBalance = 0;
            foreach (var transaction in transactions)
            {
                if (transaction.Type == TransactionType.Income)
                {
                currentBalance += transaction.Amount;
                }
                if(transaction.Type == TransactionType.Expense)
                {
                    currentBalance -= transaction.Amount; 
                }

            }

            balanceValueTextBox.Text = currentBalance.ToString();
        }


        private void newCategoryButton_Click(object sender, EventArgs e)
        {
            ManageCategoriesForm manageCategoriesForm = new ManageCategoriesForm(categories);
            manageCategoriesForm.ShowDialog();
        }

        private void clearButton_Click(object sender, EventArgs e)
        {
            descriptionTextBox.Text = string.Empty;
            amountTextBox.Text = string.Empty;
            categoryComboBox.Text = string.Empty;
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


