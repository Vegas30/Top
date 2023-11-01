using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp4
{
    public partial class Form1 : Form
    {
        int secretNum;
        public void InitializeGame()
        {
            Random randomNumber = new Random();
            secretNum = randomNumber.Next(1, 15);
            label1.Text = "Игра началась!";
            label2.Text = "Компьютер загадал число от 1 до 15, попробуйте угадать: ";
            label3.Text = secretNum.ToString();
            button_CheckGuess.Enabled = true;


        }

        public void CheckGuess()
        {
            int userNum;
            string message;
            if (!int.TryParse(textBox1.Text, out userNum))
            {
                textBox1.Text = "";
                MessageBox.Show("Введите целое число от 1 до 15");
            }

            if (userNum > secretNum)
            {
                MessageBox.Show("Ваше число больше загаданного");
            }
            if (userNum < secretNum && userNum != 0)
            {
                MessageBox.Show("Ваше число меньше загаданного");
            }
            if (userNum == secretNum)
            {
                label1.Text = "ВЫ УГАДАЛИ ЧИСЛО!!!";
                message = "Повторить игру?";

                DialogResult result;
                MessageBoxButtons button = MessageBoxButtons.YesNo;
                result =  MessageBox.Show(message, label1.Text, button);
                if (result == DialogResult.Yes)
                {
                    label1.Text = "";
                    label2.Text = "";
                    label3.Text = "";
                    textBox1.Text = "";
                    InitializeGame();
                }
                else
                {
                    label1.Text = "";
                    label2.Text = "";
                    label3.Text = "";
                    textBox1.Text = "";
                    button_CheckGuess.Enabled = false;
                }
                
            }

        }

        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button_NewGame_Click(object sender, EventArgs e)
        {
            InitializeGame();
        }

        private void textBox1_TextChanged_1(object sender, EventArgs e)
        {

        }

        private void button_CheckGuess_Click(object sender, EventArgs e)
        {
            CheckGuess();
        }
    }
}
