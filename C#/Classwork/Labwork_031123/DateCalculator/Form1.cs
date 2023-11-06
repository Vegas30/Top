using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DateCalculator
{
    public partial class Form1 : Form
    {
        DateTime inputDate;
        DateTime outputDate;
        int value = 0;
        bool addSub = false;


        public Form1()
        {
            InitializeComponent();

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void dateTimePicker1_ValueChanged(object sender, EventArgs e)
        {
            textBox1.Text = dateTimePicker1.Text.ToString();
            inputDate = DateTime.Parse(dateTimePicker1.Text);
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button_Plus_Click(object sender, EventArgs e)
        {
            inputDate = DateTime.Parse(dateTimePicker1.Text);
            button_Minus.Enabled = false;
            addSub = true;
        }
        private void button_Minus_Click(object sender, EventArgs e)
        {
            inputDate = DateTime.Parse(dateTimePicker1.Text);
            button_Plus.Enabled = false;
            addSub = false;
        }

        private void button_Days_Click(object sender, EventArgs e)
        {
            if (!int.TryParse(textBox2.Text, out value) || value < 0 || value == null)
            {
                MessageBox.Show("Введите кол-во дней, месяцев или лет");
            }
            if (value > 0)
            {
                if (addSub)
                {
                    outputDate = inputDate.AddDays(value);
                }
                else
                {
                    outputDate = inputDate.AddDays(-value);
                }
                textBox3.Text = outputDate.ToLongDateString();

            }
            button_Plus.Enabled = true;
            button_Minus.Enabled = true;
        }

        private void button_Months_Click(object sender, EventArgs e)
        {
            if (!int.TryParse(textBox3.Text, out value) || value < 0 || value == null)
            {
                MessageBox.Show("Введите кол-во дней, месяцев или лет");
            }
            if (value > 0)
            {
                if (addSub)
                {
                    outputDate = inputDate.AddMonths(value);
                }
                else
                {
                    outputDate = inputDate.AddMonths(-value);
                }
                textBox3.Text = outputDate.ToLongDateString();

            }
            button_Plus.Enabled = true;
            button_Minus.Enabled = true;
        }

        private void button_Years_Click(object sender, EventArgs e)
        {
            if (!int.TryParse(textBox3.Text, out value) || value < 0 || value == null)
            {
                MessageBox.Show("Введите кол-во дней, месяцев или лет");
            }
            if (value > 0)
            {
                if (addSub)
                {
                    outputDate = inputDate.AddYears(value);
                }
                else
                {
                    outputDate = inputDate.AddYears(-value);
                }
                textBox3.Text = outputDate.ToLongDateString();

            }
            button_Plus.Enabled = true;
            button_Minus.Enabled = true;
        }

    }
}
