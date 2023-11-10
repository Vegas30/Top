using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exercise
{
    public partial class Form1 : Form
    {
        DateTime newEventDate;
        DateTime today = DateTime.Now;
        
        public Form1()
        {
            InitializeComponent();
            label2.Visible = false;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void dateTimePicker1_ValueChanged(object sender, EventArgs e)
        {
            newEventDate = DateTime.Parse( dateTimePicker1.Text);
            TimeSpan left = newEventDate - today;
            label2.Visible = true;
            if (left.Days < 0)
            {
                label2.Text = "Событие уже прошло " + -left.Days + " дней назад " + -left.Hours + " часов";
            }
            else if (left.Days == 0 && left.Hours < 0)
            {
                label2.Text = "Событие сегодня";
            }
            else
            {
            label2.Text = "До события осталось " + left.Days + " дней " + left.Hours + " часов";
            }
        }
    }
}
