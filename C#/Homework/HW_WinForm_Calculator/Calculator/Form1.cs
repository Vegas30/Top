using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1 : Form
    {

        public string action;
        public string number1;
        public bool inputNum2;
        public Form1()
        {
            inputNum2 = false;
            InitializeComponent();
        }

        private void button22_Click(object sender, EventArgs e)
        {
            if (inputNum2)
            {
                inputNum2 = false;
                textBox1.Text = "0";
            }

            Button button = (Button)sender;

            if (textBox1.Text == "0")
            {
                textBox1.Text = button.Text;
            }
            else
            {
                textBox1.Text = textBox1.Text + button.Text;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox1.Text = "0";
        }

        private void button20_Click(object sender, EventArgs e)
        {
            Button btn = (Button)sender;
            action = btn.Text;
            number1 = textBox1.Text;
            inputNum2 = true;

        }

        private void button24_Click(object sender, EventArgs e)
        {
            double numDbl1,numDbl2, res;
            res =0;
            numDbl1 = Convert.ToDouble(number1);
            numDbl2 = Convert.ToDouble(textBox1.Text);
            if (action == "+")
            {
                res = numDbl1 + numDbl2;
            }
            if (action == "-")
            {
                res = numDbl1 - numDbl2;
            }
            if (action == "X")
            {
                res = numDbl1 * numDbl2;
            }
            if (action == "/")
            {
                res = numDbl1 / numDbl2;
            }
            if (action == "%")
            {
                res = numDbl1 * numDbl2 / 100;
            }
            action = "=";
            inputNum2 = true;
            textBox1.Text = res.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            double numDbl, res;
            numDbl = Convert.ToDouble(textBox1.Text);
            res = Math.Sqrt(numDbl);
            textBox1.Text = res.ToString();

        }

        private void button3_Click(object sender, EventArgs e)
        {
            double numDbl, res;
            numDbl = Convert.ToDouble(textBox1.Text);
            res = Math.Pow(numDbl, 2);
            textBox1.Text = res.ToString();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            double numDbl, res;
            numDbl = Convert.ToDouble(textBox1.Text);
            res = 1 / numDbl;
            textBox1.Text = res.ToString();
        }

        private void button21_Click(object sender, EventArgs e)
        {
            double numDbl, res;
            numDbl = Convert.ToDouble(textBox1.Text);
            res = -numDbl;
            textBox1.Text = res.ToString();
        }

        private void button23_Click(object sender, EventArgs e)
        {
            if (!textBox1.Text.Contains(","))
            {
            textBox1.Text = textBox1.Text + ",";
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text.Substring(0, textBox1.Text.Length - 1);
            if (textBox1.Text == "")
            {
                textBox1.Text = "0";
            }
        }
    }
}
