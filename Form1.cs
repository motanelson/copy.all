using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace paints
{
     
    public partial class Form1 : Form
    {
        private Image i;Bitmap b;
        public Form1()
        {
            InitializeComponent();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
        private void PictureBox1_MouseMove(object sender, MouseEventArgs e)
            
        {
            
             
           
            if (e.Button==MouseButtons.Left) 
            {
                b.SetPixel(e.X,e.Y,Color.Black);
                //MessageBox.Show("#");
                pictureBox1.Refresh();
            }
        
        
            
        }
         private void Form1_Load(object sender, EventArgs e)
        {
            pictureBox1.MouseMove += PictureBox1_MouseMove;
            i= pictureBox1.Image;b= new Bitmap(pictureBox1.Width, pictureBox1.Height);pictureBox1.Image = b;
        }
    }
}
