using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        int length;
        bool includeLetters = false;
        bool includeNumbers = false;
        bool includeSpecialSymbols = false;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            if(!int.TryParse(maskedTextBox_pass_length.Text, out length) || !(length > 0 && length < 65))
            {
                MessageBox.Show("Введите число от 1 до 64");
            }
            else
            {

                if (checkBox_symbols.Checked == false &&
                    checkBox_numbers.Checked == false &&
                    checkBox_spec_symbols.Checked == false)
                {
                    MessageBox.Show("Хотя бы один параметр должен быть выбран");
                }

                if (checkBox_symbols.Checked)
                {
                    includeLetters = true;
                }
                if (checkBox_numbers.Checked)
                {
                    includeNumbers = true;
                }
                if (checkBox_spec_symbols.Checked)
                {
                    includeSpecialSymbols = true;
                }

                string characters = "";
                if (checkBox_symbols.Checked ||
                    checkBox_numbers.Checked ||
                    checkBox_spec_symbols.Checked)
                {
                    characters = GenerateCharacterString(includeLetters, includeNumbers, includeSpecialSymbols);

                }
                string password = "";

                if (characters != "")
                {
                    password = GeneratePassword(length, characters);

                }

                textBox_password.Text = password;

                includeLetters = false;
                includeNumbers = false;
                includeSpecialSymbols = false;
            }


        }
        static string GenerateCharacterString(bool includeLetters, bool includeNumbers, bool includeSpecialSymbols)
        {
            StringBuilder characterString = new StringBuilder();

            if (includeLetters)
            {
                characterString.Append("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
            }

            if (includeNumbers)
            {
                characterString.Append("0123456789");
            }

            if (includeSpecialSymbols)
            {
                characterString.Append("!@#$%^&*()-_+=<>?/[]{}|");
            }

            return characterString.ToString();
        }

        static string GeneratePassword(int length, string characterString)
        {
            Random random = new Random();
            StringBuilder password = new StringBuilder();

            for (int i = 0; i < length; i++)
            {
                int index = random.Next(characterString.Length);
                password.Append(characterString[index]);
            }

            return password.ToString();
        }
    }
}
