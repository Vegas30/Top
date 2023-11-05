using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exercise_01_MessageBoxes
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string resume = "Игорь Валуйсков\r\nВеб-разработчик\r\ni_valuiskov@mail.ru github.com/Vegas30\r\n\r\nЯ учусь веб-разработке. Решил стать front-end разработчиком. Это мои первые шаги в изучении основ HTML и CSS. Изучал професию тестировщика, даже прошел платный курс на одном известном обучающем портале. Не понравилось, ни обучение ни сама професия, видимо не моё или преподавание было слабое. Чуствую что разработка мне по душе, прохожу обучение на Хекслете с удовольствием.\r\n\r\nГотов к удаленной работе. Готов обучаться дальше.\r\n\r\nОпыт работы\r\nНастроение ООО Россия\r\nДиректор(учередитель), апрель 2004 - ноябрь 2010\r\nОткрытие кофейни\r\nОрганизация работы\r\nМобител ООО Россия\r\nДиректор(учредитель), апрель 2003 - ноябрь 2008\r\nОфициальный дилер Мегафон\r\nОрганизация работы сети салонов сотовой связи\r\nОбразование\r\nАГУ г.Астрахани\r\nФиз.мат информатика Бакалавр 1996 - 2000\r\nОткрытый университет\r\nMBA 2009\r\nДругие навыки и увлечения\r\nОпытный пользователь ПК\r\nЗнание английского языка\r\nИгорь Валуйсков\r\n\r\nг.Астрахань, ул. Московская, +7977122222, i_valuiskov@mail.ru.";
            int totalCharacters = resume.Length;
            int numMessageBoxes = 3;
            int averageCharactersPerPage = totalCharacters / numMessageBoxes;

            MessageBox.Show(resume.Substring(0, averageCharactersPerPage), "Резюме (1/3)");

            int remainingCharacters = totalCharacters - averageCharactersPerPage;
            int length = Math.Min(averageCharactersPerPage, remainingCharacters);
            MessageBox.Show(resume.Substring(averageCharactersPerPage, length), "Резюме (2/3)");

            remainingCharacters -= length;
            MessageBox.Show(resume.Substring(averageCharactersPerPage * 2, remainingCharacters), "Резюме (3/3)" + $"Среднее количество символов на странице: {averageCharactersPerPage}", MessageBoxButtons.OK, MessageBoxIcon.Information);

            //MessageBox.Show($"Среднее количество символов на странице: {averageCharactersPerPage}", "Среднее количество символов", MessageBoxButtons.OK, MessageBoxIcon.Information);

            Application.Exit();
        }
    }
}
