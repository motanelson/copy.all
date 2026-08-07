using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Imaging;
using System.Text;
using System.Windows.Forms;

namespace paints
{
     
    public partial class Form1 : Form
    {
        private Image i;Bitmap b;int value = 0;int value2 = 0;int xx=0;int yy=0;Graphics ee;
        public Form1()
        {
            InitializeComponent();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
        private void PictureBox1_MouseUp(object sender, MouseEventArgs e)
            
        {


            
            if (e.Button==MouseButtons.Left) 
            {
               
                int v = value & 1;
                if (v == 0)
                {
                    xx = e.X; yy = e.Y;
                }
                else {
                    ee = Graphics.FromImage(b);
                    Pen a = new Pen(Color.FromArgb(0, 0, 0));
                    ee.DrawLine(a, e.X, e.Y, xx, yy);
                    ee.Dispose();
                    pictureBox1.Refresh();
                    
                }
                
                statusStrip1.Text = value.ToString();
                value = value + 1;
            }
        
        
            
        }
         private void Form1_Load(object sender, EventArgs e)
        {
            
            pictureBox1.MouseUp += PictureBox1_MouseUp;
            
            b = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            pictureBox1.Image = b;
            statusStrip1.Text = value.ToString();



        }

        private void statusStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {

        }
    }
}
