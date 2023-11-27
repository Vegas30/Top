using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;

namespace MainForms
{
    public partial class ManageCategoriesForm : Form
    {
        private List<Category> categories;
        //private ListBox categoriesListBox;
        //private TextBox newCategoryTextBox;
        // private Button addCategoryButton;
        //private Button deleteCategoryButton;

        public ManageCategoriesForm(List<Category> categories)
        {
            this.categories = categories;
            InitializeComponent();

            foreach (var category in categories)
            {
                this.categoriesListBox.Items.Add(category.Name);
            }
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

        private void deleteCategoryButton_Click(object sender, EventArgs e)
        {
            if (categoriesListBox.SelectedIndex != -1)
            {
                string selectedCategory = categoriesListBox.SelectedItem.ToString();

                Category categoryToRemove = categories.FirstOrDefault(category => category.Name == selectedCategory);
                if (categoryToRemove != null)
                {
                    categories.Remove(categoryToRemove);
                    categoriesListBox.Items.RemoveAt(categoriesListBox.SelectedIndex);
                }
            }
            else
            {
                MessageBox.Show("Выберите категорию для удаления!", "Предупреждение", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
        }
    }
}
