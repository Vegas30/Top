using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exercise_3_BMI
{
    public partial class Form1 : Form
    {
        double weight = 0;
        double height = 0;
        double bmi = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            if (!double.TryParse(textBox1.Text, out weight) || (weight < 0) || (weight == null))
            {
                MessageBox.Show("Введите положительное число, вес в кг");
            }
            if (!double.TryParse(textBox2.Text, out height) || (height < 0) || (height == null))
            {
                MessageBox.Show("Введите положительное число, рост в см");
            }

            if (weight > 0 && height > 0)
            {
                height = height / 100;
                bmi = Math.Round(weight / (height * height),1);
                textBox3.Text = Convert.ToString(bmi);
                if (bmi < 16)
                {
                    textBox4.Text = "Выраженный дефицит массы тела";
                }
                if (bmi > 16 && bmi < 18.5)
                {
                    textBox4.Text = "Недостаточная (дефицит) масса тела";
                }
                if (bmi > 18.5 && bmi < 25)
                {
                    textBox4.Text = "Норма";
                }
                if (bmi > 25 && bmi < 30)
                {
                    textBox4.Text = "Избыточная масса тела (предожирение)";
                }
                if (bmi > 30 && bmi < 35)
                {
                    textBox4.Text = "Ожирение первой степени";
                }
                if (bmi > 35 && bmi < 40)
                {
                    textBox4.Text = "Ожирение второй степени";
                }
                if (bmi > 40)
                {
                    textBox4.Text = "Ожирение третьей степени (морбидное)";
                }
            }


        }

    }
}
