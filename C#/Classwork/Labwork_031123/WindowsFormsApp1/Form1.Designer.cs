namespace WindowsFormsApp1
{
    partial class Form1
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
            this.label1 = new System.Windows.Forms.Label();
            this.checkBox_numbers = new System.Windows.Forms.CheckBox();
            this.checkBox_spec_symbols = new System.Windows.Forms.CheckBox();
            this.button_create_pass = new System.Windows.Forms.Button();
            this.maskedTextBox_pass_length = new System.Windows.Forms.MaskedTextBox();
            this.textBox_password = new System.Windows.Forms.TextBox();
            this.checkBox_symbols = new System.Windows.Forms.CheckBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(43, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(219, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "Введите длину пароля:";
            // 
            // checkBox_numbers
            // 
            this.checkBox_numbers.AutoSize = true;
            this.checkBox_numbers.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.checkBox_numbers.Location = new System.Drawing.Point(268, 77);
            this.checkBox_numbers.Name = "checkBox_numbers";
            this.checkBox_numbers.Size = new System.Drawing.Size(183, 28);
            this.checkBox_numbers.TabIndex = 4;
            this.checkBox_numbers.Text = "Добавить цифры";
            this.checkBox_numbers.UseVisualStyleBackColor = true;
            // 
            // checkBox_spec_symbols
            // 
            this.checkBox_spec_symbols.AutoSize = true;
            this.checkBox_spec_symbols.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.checkBox_spec_symbols.Location = new System.Drawing.Point(268, 108);
            this.checkBox_spec_symbols.Name = "checkBox_spec_symbols";
            this.checkBox_spec_symbols.Size = new System.Drawing.Size(255, 28);
            this.checkBox_spec_symbols.TabIndex = 5;
            this.checkBox_spec_symbols.Text = "Добавить спец. символы";
            this.checkBox_spec_symbols.UseVisualStyleBackColor = true;
            // 
            // button_create_pass
            // 
            this.button_create_pass.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_create_pass.Location = new System.Drawing.Point(47, 44);
            this.button_create_pass.Name = "button_create_pass";
            this.button_create_pass.Size = new System.Drawing.Size(215, 92);
            this.button_create_pass.TabIndex = 6;
            this.button_create_pass.Text = "Создать пароль";
            this.button_create_pass.UseVisualStyleBackColor = true;
            this.button_create_pass.Click += new System.EventHandler(this.button1_Click);
            // 
            // maskedTextBox_pass_length
            // 
            this.maskedTextBox_pass_length.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.maskedTextBox_pass_length.Location = new System.Drawing.Point(268, 9);
            this.maskedTextBox_pass_length.Mask = "00000";
            this.maskedTextBox_pass_length.Name = "maskedTextBox_pass_length";
            this.maskedTextBox_pass_length.Size = new System.Drawing.Size(57, 29);
            this.maskedTextBox_pass_length.TabIndex = 0;
            // 
            // textBox_password
            // 
            this.textBox_password.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBox_password.Location = new System.Drawing.Point(47, 157);
            this.textBox_password.Name = "textBox_password";
            this.textBox_password.Size = new System.Drawing.Size(476, 29);
            this.textBox_password.TabIndex = 8;
            // 
            // checkBox_symbols
            // 
            this.checkBox_symbols.AutoSize = true;
            this.checkBox_symbols.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.checkBox_symbols.Location = new System.Drawing.Point(268, 44);
            this.checkBox_symbols.Name = "checkBox_symbols";
            this.checkBox_symbols.Size = new System.Drawing.Size(176, 28);
            this.checkBox_symbols.TabIndex = 9;
            this.checkBox_symbols.Text = "Добавить буквы";
            this.checkBox_symbols.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(569, 227);
            this.Controls.Add(this.checkBox_symbols);
            this.Controls.Add(this.textBox_password);
            this.Controls.Add(this.maskedTextBox_pass_length);
            this.Controls.Add(this.button_create_pass);
            this.Controls.Add(this.checkBox_spec_symbols);
            this.Controls.Add(this.checkBox_numbers);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Password generator";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.CheckBox checkBox_numbers;
        private System.Windows.Forms.CheckBox checkBox_spec_symbols;
        private System.Windows.Forms.Button button_create_pass;
        private System.Windows.Forms.MaskedTextBox maskedTextBox_pass_length;
        private System.Windows.Forms.TextBox textBox_password;
        private System.Windows.Forms.CheckBox checkBox_symbols;
    }
}

