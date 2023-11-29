using System.Windows.Forms;

namespace MainForms
{
    partial class MainForm
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.descriptionTextBox = new System.Windows.Forms.TextBox();
            this.amountTextBox = new System.Windows.Forms.TextBox();
            this.categoryComboBox = new System.Windows.Forms.ComboBox();
            this.incomeRadioButton = new System.Windows.Forms.RadioButton();
            this.transactionsGridView = new System.Windows.Forms.DataGridView();
            this.descriptionColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.amountColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.categoryColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.typeColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.addTransactionButton = new System.Windows.Forms.Button();
            this.expenseRadioButton = new System.Windows.Forms.RadioButton();
            this.newCategoryButton = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.balanceValueTextBox = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.clearButton = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.transactionsGridView)).BeginInit();
            this.SuspendLayout();
            // 
            // descriptionTextBox
            // 
            this.descriptionTextBox.Location = new System.Drawing.Point(198, 12);
            this.descriptionTextBox.Name = "descriptionTextBox";
            this.descriptionTextBox.Size = new System.Drawing.Size(121, 20);
            this.descriptionTextBox.TabIndex = 0;
            // 
            // amountTextBox
            // 
            this.amountTextBox.Location = new System.Drawing.Point(198, 38);
            this.amountTextBox.Name = "amountTextBox";
            this.amountTextBox.Size = new System.Drawing.Size(121, 20);
            this.amountTextBox.TabIndex = 1;
            // 
            // categoryComboBox
            // 
            this.categoryComboBox.FormattingEnabled = true;
            this.categoryComboBox.Location = new System.Drawing.Point(198, 64);
            this.categoryComboBox.Name = "categoryComboBox";
            this.categoryComboBox.Size = new System.Drawing.Size(121, 21);
            this.categoryComboBox.TabIndex = 2;
            // 
            // incomeRadioButton
            // 
            this.incomeRadioButton.AutoSize = true;
            this.incomeRadioButton.Location = new System.Drawing.Point(198, 91);
            this.incomeRadioButton.Name = "incomeRadioButton";
            this.incomeRadioButton.Size = new System.Drawing.Size(57, 17);
            this.incomeRadioButton.TabIndex = 3;
            this.incomeRadioButton.TabStop = true;
            this.incomeRadioButton.Text = "Доход";
            this.incomeRadioButton.UseVisualStyleBackColor = true;
            // 
            // transactionsGridView
            // 
            this.transactionsGridView.AllowUserToAddRows = false;
            this.transactionsGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.transactionsGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.descriptionColumn,
            this.amountColumn,
            this.categoryColumn,
            this.typeColumn});
            this.transactionsGridView.Location = new System.Drawing.Point(325, 13);
            this.transactionsGridView.Name = "transactionsGridView";
            this.transactionsGridView.ReadOnly = true;
            this.transactionsGridView.Size = new System.Drawing.Size(463, 409);
            this.transactionsGridView.TabIndex = 4;
            // 
            // descriptionColumn
            // 
            this.descriptionColumn.DataPropertyName = "Description";
            this.descriptionColumn.HeaderText = "Описание";
            this.descriptionColumn.Name = "descriptionColumn";
            this.descriptionColumn.ReadOnly = true;
            // 
            // amountColumn
            // 
            this.amountColumn.DataPropertyName = "Amount";
            this.amountColumn.HeaderText = "Сумма";
            this.amountColumn.Name = "amountColumn";
            this.amountColumn.ReadOnly = true;
            // 
            // categoryColumn
            // 
            this.categoryColumn.DataPropertyName = "Category.Name";
            this.categoryColumn.HeaderText = "Категория";
            this.categoryColumn.Name = "categoryColumn";
            this.categoryColumn.ReadOnly = true;
            // 
            // typeColumn
            // 
            this.typeColumn.DataPropertyName = "Type";
            this.typeColumn.HeaderText = "Тип";
            this.typeColumn.Name = "typeColumn";
            this.typeColumn.ReadOnly = true;
            // 
            // addTransactionButton
            // 
            this.addTransactionButton.Location = new System.Drawing.Point(198, 135);
            this.addTransactionButton.Name = "addTransactionButton";
            this.addTransactionButton.Size = new System.Drawing.Size(75, 23);
            this.addTransactionButton.TabIndex = 5;
            this.addTransactionButton.Text = "Добавить";
            this.addTransactionButton.UseVisualStyleBackColor = true;
            this.addTransactionButton.Click += new System.EventHandler(this.addTransactionButton_Click);
            // 
            // expenseRadioButton
            // 
            this.expenseRadioButton.AutoSize = true;
            this.expenseRadioButton.Location = new System.Drawing.Point(198, 112);
            this.expenseRadioButton.Name = "expenseRadioButton";
            this.expenseRadioButton.Size = new System.Drawing.Size(61, 17);
            this.expenseRadioButton.TabIndex = 6;
            this.expenseRadioButton.TabStop = true;
            this.expenseRadioButton.Text = "Расход";
            this.expenseRadioButton.UseVisualStyleBackColor = true;
            // 
            // newCategoryButton
            // 
            this.newCategoryButton.Location = new System.Drawing.Point(117, 64);
            this.newCategoryButton.Name = "newCategoryButton";
            this.newCategoryButton.Size = new System.Drawing.Size(75, 23);
            this.newCategoryButton.TabIndex = 7;
            this.newCategoryButton.Text = "Категории";
            this.newCategoryButton.UseVisualStyleBackColor = true;
            this.newCategoryButton.Click += new System.EventHandler(this.newCategoryButton_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(73, 15);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(122, 13);
            this.label1.TabIndex = 8;
            this.label1.Text = "Описание транзакции:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(151, 41);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(44, 13);
            this.label2.TabIndex = 9;
            this.label2.Text = "Сумма:";
            // 
            // balanceValueTextBox
            // 
            this.balanceValueTextBox.Location = new System.Drawing.Point(198, 193);
            this.balanceValueTextBox.Name = "balanceValueTextBox";
            this.balanceValueTextBox.Size = new System.Drawing.Size(121, 20);
            this.balanceValueTextBox.TabIndex = 10;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(98, 196);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(94, 13);
            this.label3.TabIndex = 11;
            this.label3.Text = "Текущий баланс:";
            // 
            // clearButton
            // 
            this.clearButton.Location = new System.Drawing.Point(198, 164);
            this.clearButton.Name = "clearButton";
            this.clearButton.Size = new System.Drawing.Size(75, 23);
            this.clearButton.TabIndex = 12;
            this.clearButton.Text = "Очистить";
            this.clearButton.UseVisualStyleBackColor = true;
            this.clearButton.Click += new System.EventHandler(this.clearButton_Click);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.clearButton);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.balanceValueTextBox);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.newCategoryButton);
            this.Controls.Add(this.expenseRadioButton);
            this.Controls.Add(this.addTransactionButton);
            this.Controls.Add(this.transactionsGridView);
            this.Controls.Add(this.incomeRadioButton);
            this.Controls.Add(this.categoryComboBox);
            this.Controls.Add(this.amountTextBox);
            this.Controls.Add(this.descriptionTextBox);
            this.Name = "MainForm";
            this.Text = "BudgetManagementSystem V2";
            ((System.ComponentModel.ISupportInitialize)(this.transactionsGridView)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox descriptionTextBox;
        private System.Windows.Forms.TextBox amountTextBox;
        private System.Windows.Forms.ComboBox categoryComboBox;
        private System.Windows.Forms.RadioButton incomeRadioButton;
        private System.Windows.Forms.DataGridView transactionsGridView;
        private System.Windows.Forms.Button addTransactionButton;
        private System.Windows.Forms.RadioButton expenseRadioButton;
        private DataGridViewTextBoxColumn descriptionColumn;
        private DataGridViewTextBoxColumn amountColumn;
        private DataGridViewTextBoxColumn categoryColumn;
        private DataGridViewTextBoxColumn typeColumn;
        private Button newCategoryButton;
        private Label label1;
        private Label label2;
        private TextBox balanceValueTextBox;
        private Label label3;
        private Button clearButton;
    }
}

