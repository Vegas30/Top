using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exercise_03_Events
{
    public partial class Form1 : Form
    {
        private Timer timer = new Timer();


        public Form1()
        {
            InitializeComponent();

            timer.Tick += Timer_Tick;

            timer.Interval = 2000;
        }


        private void Form1_MouseMove(object sender, MouseEventArgs e)
        {
            this.Text = $"X = {e.X}, Y = {e.Y}";
        }

        private void Form1_MouseClick(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left && Control.ModifierKeys == Keys.Control)
            {
                this.Close();
            }
            if (e.Button == MouseButtons.Left)
            {
                int x = e.X;
                int y = e.Y;

                Rectangle rectangle = new Rectangle(10, 10, this.ClientSize.Width - 20, this.ClientSize.Height - 20);

                if (rectangle.Contains(x, y))
                {
                    MessageBox.Show("Точка находится внутри прямоугольника.");
                }
                else if (x < 10 || x > this.ClientSize.Width - 10 || y < 10 || y > this.ClientSize.Height - 10)
                {
                    MessageBox.Show("Точка находится снаружи прямоугольника.");
                }
                else
                {
                    MessageBox.Show("Точка находится на границе прямоугольника.");
                }
            }
            if (e.Button == MouseButtons.Right)
            {
                string info = $" Ширина = {this.ClientSize.Width}, Высота = {this.ClientSize.Height}";
                timer.Start();
                this.Text += info;
            }
        }
        private void Timer_Tick(object sender, EventArgs e)
        {
            this.Text = "";

            timer.Stop();
        }

    }
}
