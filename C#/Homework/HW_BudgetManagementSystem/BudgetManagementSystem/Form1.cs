using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BudgetManagementSystem
{
    public partial class Form1 : Form
    {
        private double totalBudget = 0;

        public Form1()
        {
            InitializeComponent();
        }
        private void btnAddIncome_Click(object sender, EventArgs e)
        {
            if (double.TryParse(txtIncome.Text, out double incomeAmount) && incomeAmount > 0)
            {
                totalBudget += incomeAmount;
                UpdateBudgetDisplay();
            }
            else
            {
                MessageBox.Show("Пожалуйста, введите целое положительное число.");
            }
        }

        private void btnAddExpense_Click(object sender, EventArgs e)
        {
            if (double.TryParse(txtExpense.Text, out double expenseAmount) && expenseAmount > 0)
            {
                totalBudget -= expenseAmount;
                UpdateBudgetDisplay();
            }
            else
            {
                MessageBox.Show("Пожалуйста, введите целое положительное число.");
            }
        }

        private void UpdateBudgetDisplay()
        {
            lblTotalBudget.Text = $"Доступно средств: {totalBudget:C}";
        }
    }
}
