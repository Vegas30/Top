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
    public partial class ManageCategoriesForm : Form
    {
        //private ListBox categoriesListBox;
        //private TextBox newCategoryTextBox;
       // private Button addCategoryButton;
        //private Button deleteCategoryButton;

        public ManageCategoriesForm(List<Category> categories)
        {
            InitializeComponent();

            foreach (var category in categories)
            {
                this.categoriesListBox.Items.Add(category.Name);
            }
        }

        // Метод для обработки добавления новой категории
        private void AddCategory()
        {
            // Логика добавления новой категории
            // ...
        }

        // Метод для обработки удаления выбранной категории
        private void DeleteCategory()
        {
            // Логика удаления выбранной категории
            // ...
        }

        private void addCategoryButton_Click(object sender, EventArgs e)
        {
            string newCategoryName = newCategoryTextBox.Text.Trim();

            if (!string.IsNullOrEmpty(newCategoryName))
            {
                if (!categories.Exists(category => category.Name.Equals(newCategoryName, StringComparison.OrdinalIgnoreCase)))
                {
                    Category newCategory = new Category(newCategoryName);
                    categories.Add(newCategory);

                     // Обновление ListBox с категориями
                    this.categoriesListBox.Items.Add(newCategory.Name);
                }
                else
                {
                    MessageBox.Show("Такая категория уже существует!", "Предупреждение", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                }
            }
            else
            {
                MessageBox.Show("Введите название категории!", "Предупреждение", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }

            newCategoryTextBox.Clear(); // Очистка TextBox после добавления категории
        }
    }
}
