namespace MainForms
{
    partial class ManageCategoriesForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.categoriesListBox = new System.Windows.Forms.ListBox();
            this.newCategoryTextBox = new System.Windows.Forms.TextBox();
            this.addCategoryButton = new System.Windows.Forms.Button();
            this.deleteCategoryButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // categoriesListBox
            // 
            this.categoriesListBox.FormattingEnabled = true;
            this.categoriesListBox.Location = new System.Drawing.Point(13, 13);
            this.categoriesListBox.Name = "categoriesListBox";
            this.categoriesListBox.Size = new System.Drawing.Size(120, 95);
            this.categoriesListBox.TabIndex = 0;
            // 
            // newCategoryTextBox
            // 
            this.newCategoryTextBox.Location = new System.Drawing.Point(13, 115);
            this.newCategoryTextBox.Name = "newCategoryTextBox";
            this.newCategoryTextBox.Size = new System.Drawing.Size(100, 20);
            this.newCategoryTextBox.TabIndex = 1;
            // 
            // addCategoryButton
            // 
            this.addCategoryButton.Location = new System.Drawing.Point(13, 142);
            this.addCategoryButton.Name = "addCategoryButton";
            this.addCategoryButton.Size = new System.Drawing.Size(75, 23);
            this.addCategoryButton.TabIndex = 2;
            this.addCategoryButton.Text = "Добавить";
            this.addCategoryButton.UseVisualStyleBackColor = true;
            this.addCategoryButton.Click += new System.EventHandler(this.addCategoryButton_Click);
            // 
            // deleteCategoryButton
            // 
            this.deleteCategoryButton.Location = new System.Drawing.Point(13, 172);
            this.deleteCategoryButton.Name = "deleteCategoryButton";
            this.deleteCategoryButton.Size = new System.Drawing.Size(75, 23);
            this.deleteCategoryButton.TabIndex = 3;
            this.deleteCategoryButton.Text = "Удалить";
            this.deleteCategoryButton.UseVisualStyleBackColor = true;
            // 
            // ManageCategoriesForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.deleteCategoryButton);
            this.Controls.Add(this.addCategoryButton);
            this.Controls.Add(this.newCategoryTextBox);
            this.Controls.Add(this.categoriesListBox);
            this.Name = "ManageCategoriesForm";
            this.Text = "ManageCategoriesForm";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ListBox categoriesListBox;
        private System.Windows.Forms.TextBox newCategoryTextBox;
        private System.Windows.Forms.Button addCategoryButton;
        private System.Windows.Forms.Button deleteCategoryButton;
    }
}