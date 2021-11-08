#include<windows.h>
#include <GL/glut.h>
#include<iostream>
using namespace std;

int First_player=0,Second_player=0,Draw=0;
int Int_val_0to9=-1;
int counter_O_X=0;
char arr[9]={0};
//------1st person-----
int No_1_win_by_even_4_divider=0,No_1_win_by_even_4_divider_not=0;
int No_1_win_by_Quotient_0=0,No_1_win_by_Quotient_1=0,No_1_win_by_Quotient_2=0;
int No_1_win_by_reminder_0=0,No_1_win_by_reminder_1=0,No_1_win_by_reminder_2=0;
//------2nd person---------
int No_2_win_by_even_4_divider=0,No_2_win_by_even_4_divider_not=0;
int No_2_win_by_Quotient_0=0,No_2_win_by_Quotient_1=0,No_2_win_by_Quotient_2=0;
int No_2_win_by_reminder_0=0,No_2_win_by_reminder_1=0,No_2_win_by_reminder_2=0;
//---------------------------------------------------------------------------------------------------------------
void fahim(void)
{
    arr[counter_O_X]=(char)Int_val_0to9;
    double a,ax,b,bx;
    double a1,ax1,b1,bx1;
    Int_val_0to9=Int_val_0to9-49;

        if(Int_val_0to9%3==0)
        {
            a=-1.0;
            ax=-0.33;
            a1=-0.95;
            ax1=-0.38;
        }
        if(Int_val_0to9%3==1)
        {
            a=-0.33;
            ax=0.33;
            a1=-0.28;
            ax1=0.28;
        }
        if(Int_val_0to9%3==2)
        {
            a=0.33;
            ax=1.0;
            a1=0.38;
            ax1=0.95;
        }
        if(Int_val_0to9/3==0)
        {
            b=1;
            bx=0.33;
            b1=0.95;
            bx1=0.38;
        }
        if(Int_val_0to9/3==1)
        {
            b=0.33;
            bx=-0.33;
            b1=0.28;
            bx1=-0.28;
        }
        if(Int_val_0to9/3==2)
        {
            b=-0.33;
            bx=-1.0;
            b1=-0.39;
            bx1=-0.95;
        }
        ///---------------------------------------------------clear number--------------------------------------
        glBegin(GL_POLYGON);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(a1, b1);
            glVertex2f(ax1, b1);
            glVertex2f(ax1, bx1);
            glVertex2f(a1, bx1);
        glEnd();
        //----------------------------------------------------------
        if(counter_O_X%2==0)
        {
            glBegin(GL_LINES);

            glColor3f(0.0f, 0.0f, 1.0f);
            glVertex2f(a, b);
            glVertex2f(ax, bx);

            glColor3f(0.0f, 0.0f, 1.0f);
            glVertex2f(a, bx);
            glVertex2f(ax, b);

            glEnd();
        }

        //=====================================Circle================================================================
        if(counter_O_X%2==1)
        {
            if(Int_val_0to9==0)
            {
                //====================Position 0======================================
                glBegin(GL_LINE_LOOP);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(-0.42f, 0.49f);
                glVertex2f(-0.37f, 0.6f);
                glVertex2f(-0.37f, 0.7f);
                glVertex2f(-0.4f, 0.8f);
                glVertex2f(-0.45f, 0.88f);

                glVertex2f(-0.48f, 0.9f);
                glVertex2f(-0.54f, 0.94f);
                glVertex2f(-0.6f, 0.96f);
                glVertex2f(-0.7f, 0.96f);
                glVertex2f(-0.8f, 0.93f);


                glVertex2f(-0.88f, 0.88f);
                glVertex2f(-0.93f, 0.8f);
                glVertex2f(-0.96f, 0.7f);
                glVertex2f(-0.96f, 0.6f);
                glVertex2f(-0.92f, 0.5f);

                glVertex2f(-0.88f, 0.45f);
                glVertex2f(-0.8f, 0.4f);
                glVertex2f(-0.7f, 0.37f);
                glVertex2f(-0.6f, 0.37f);
                glVertex2f(-0.5f, 0.41f);


                glEnd();
            }
            if(Int_val_0to9==1)
            {
                //====================Position 1======================================
                glBegin(GL_LINE_LOOP);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(0.21f, 0.45f);
                glVertex2f(0.25f, 0.5f);
                glVertex2f(0.29f, 0.6f);
                glVertex2f(0.3f, 0.7f);
                glVertex2f(0.27f, 0.8f);

                glVertex2f(0.21f, 0.88f);
                glVertex2f(0.1f, 0.95f);
                glVertex2f(0.0f, 0.97f);
                glVertex2f(-0.1f, 0.95f);
                glVertex2f(-0.19f, 0.89f);


                glVertex2f(-0.27f, 0.8f);
                glVertex2f(-0.3f, 0.7f);
                glVertex2f(-0.29f, 0.6f);
                glVertex2f(-0.25f, 0.5f);
                glVertex2f(-0.21f, 0.45f);

                glVertex2f(-0.14f, 0.4f);
                glVertex2f(-0.1f, 0.38f);
                glVertex2f(0.0f, 0.37f);
                glVertex2f(0.1f, 0.38f);
                glVertex2f(0.14f, 0.4f);


                glEnd();
            }
            if(Int_val_0to9==2)
            {
                //====================Position 2======================================
                glBegin(GL_LINE_LOOP);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(0.88f, 0.45f);
                glVertex2f(0.92f, 0.5f);
                glVertex2f(0.96f, 0.6f);
                glVertex2f(0.96f, 0.7f);
                glVertex2f(0.93f, 0.8f);

                glVertex2f(0.88f, 0.88f);
                glVertex2f(0.8f, 0.93f);
                glVertex2f(0.7f, 0.96f);
                glVertex2f(0.6f, 0.96f);
                glVertex2f(0.5f, 0.92f);


                glVertex2f(0.45f, 0.88f);
                glVertex2f(0.4f, 0.8f);
                glVertex2f(0.37f, 0.7f);
                glVertex2f(0.37f, 0.6f);
                glVertex2f(0.41f, 0.5f);

                glVertex2f(0.45f, 0.45f);
                glVertex2f(0.5f, 0.42f);
                glVertex2f(0.6f, 0.37f);
                glVertex2f(0.7f, 0.37f);
                glVertex2f(0.8f, 0.4f);


                glEnd();

            }
            if(Int_val_0to9==3)
            {
                //=============================Position 3=============================
                glBegin(GL_LINE_LOOP);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(-0.45f, -0.21f);
                glVertex2f(-0.4f, -0.14f);
                glVertex2f(-0.37f, -0.05f);
                glVertex2f(-0.37f, 0.05f);
                glVertex2f(-0.4f, 0.14f);

                glVertex2f(-0.45f, 0.21f);
                glVertex2f(-0.55f, 0.28f);
                glVertex2f(-0.65f, 0.3f);
                glVertex2f(-0.75f, 0.29f);
                glVertex2f(-0.83f, 0.25f);


                glVertex2f(-0.88f, 0.21f);
                glVertex2f(-0.92f, 0.15f);
                glVertex2f(-0.96f, 0.05f);
                glVertex2f(-0.96f, -0.05f);
                glVertex2f(-0.92f, -0.15f);

                glVertex2f(-0.85f, -0.24f);
                glVertex2f(-0.75f, -0.29f);
                glVertex2f(-0.65f, -0.3f);
                glVertex2f(-0.55f, -0.28f);
                glVertex2f(-0.5f, -0.25f);


                glEnd();

            }
            if(Int_val_0to9==4)
            {
                //=============================Position 4=============================
                glBegin(GL_LINE_LOOP);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(0.21f, -0.21f);
                glVertex2f(0.25f, -0.17f);
                glVertex2f(0.30f, -0.05f);
                glVertex2f(0.30f, 0.05f);
                glVertex2f(0.26f, 0.15f);

                glVertex2f(0.21f, 0.21f);
                glVertex2f(0.1f, 0.28f);
                glVertex2f(0.0f, 0.3f);
                glVertex2f(-0.1f, 0.28f);
                glVertex2f(-0.17f, 0.25f);


                glVertex2f(-0.21f, 0.21f);
                glVertex2f(-0.26f, 0.15f);
                glVertex2f(-0.3f, 0.0f);
                glVertex2f(-0.28f, -0.1f);
                glVertex2f(-0.25f, -0.17f);

                glVertex2f(-0.21f, -0.21f);
                glVertex2f(-0.15f, -0.26f);
                glVertex2f(-0.02f, -0.3f);
                glVertex2f(0.1f, -0.28f);
                glVertex2f(0.16f, -0.25f);


                glEnd();
            }
            if(Int_val_0to9==5)
            {
                //=============================Position 5=============================
                glBegin(GL_LINE_LOOP);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(0.88f, -0.21f);
                glVertex2f(0.92f, -0.15f);
                glVertex2f(0.97f, 0.0f);
                glVertex2f(0.95f, 0.1f);
                glVertex2f(0.92f, 0.15f);

                glVertex2f(0.88f, 0.21f);
                glVertex2f(0.8f, 0.27f);
                glVertex2f(0.67f, 0.3f);
                glVertex2f(0.6f, 0.29f);
                glVertex2f(0.5f, 0.25f);


                glVertex2f(0.45f, 0.21f);
                glVertex2f(0.38f, 0.1f);
                glVertex2f(0.37f, 0.0f);
                glVertex2f(0.38f, -0.1f);
                glVertex2f(0.42f, -0.17f);

                glVertex2f(0.45f, -0.21f);
                glVertex2f(0.55f, -0.28f);
                glVertex2f(0.65f, -0.3f);
                glVertex2f(0.75f, -0.29f);
                glVertex2f(0.83f, -0.25f);


                glEnd();

            }
            if(Int_val_0to9==6)
            {
                //====================Position 6======================================
                glBegin(GL_LINE_LOOP);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(-0.42f, -0.49f);
                glVertex2f(-0.37f, -0.6f);
                glVertex2f(-0.37f, -0.7f);
                glVertex2f(-0.4f, -0.8f);
                glVertex2f(-0.45f, -0.88f);

                glVertex2f(-0.48f, -0.9f);
                glVertex2f(-0.54f, -0.94f);
                glVertex2f(-0.6f, -0.96f);
                glVertex2f(-0.7f, -0.96f);
                glVertex2f(-0.8f, -0.93f);


                glVertex2f(-0.88f, -0.88f);
                glVertex2f(-0.93f, -0.8f);
                glVertex2f(-0.96f, -0.7f);
                glVertex2f(-0.96f, -0.6f);
                glVertex2f(-0.92f, -0.5f);

                glVertex2f(-0.88f, -0.45f);
                glVertex2f(-0.8f, -0.4f);
                glVertex2f(-0.7f, -0.37f);
                glVertex2f(-0.6f, -0.37f);
                glVertex2f(-0.5f, -0.41f);


                glEnd();
            }
            if(Int_val_0to9==7)
            {
                //====================Position 7======================================
                glBegin(GL_LINE_LOOP);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(0.21f, -0.45f);
                glVertex2f(0.25f, -0.5f);
                glVertex2f(0.29f, -0.6f);
                glVertex2f(0.3f, -0.7f);
                glVertex2f(0.27f, -0.8f);

                glVertex2f(0.21f, -0.88f);
                glVertex2f(0.1f, -0.95f);
                glVertex2f(0.0f, -0.97f);
                glVertex2f(-0.1f, -0.95f);
                glVertex2f(-0.19f, -0.89f);


                glVertex2f(-0.27f, -0.8f);
                glVertex2f(-0.3f, -0.7f);
                glVertex2f(-0.29f, -0.6f);
                glVertex2f(-0.25f, -0.5f);
                glVertex2f(-0.21f, -0.45f);

                glVertex2f(-0.14f, -0.4f);
                glVertex2f(-0.1f, -0.38f);
                glVertex2f(0.0f, -0.37f);
                glVertex2f(0.1f, -0.38f);
                glVertex2f(0.14f, -0.4f);


                glEnd();
            }
            if(Int_val_0to9==8)
            {
                //====================Position 8======================================
                glBegin(GL_LINE_LOOP);
                glColor3f(0.0f, 1.0f, 0.0f);
                glVertex2f(0.88f, -0.45f);
                glVertex2f(0.92f, -0.5f);
                glVertex2f(0.96f, -0.6f);
                glVertex2f(0.96f, -0.7f);
                glVertex2f(0.93f, -0.8f);

                glVertex2f(0.88f, -0.88f);
                glVertex2f(0.8f, -0.93f);
                glVertex2f(0.7f, -0.96f);
                glVertex2f(0.6f, -0.96f);
                glVertex2f(0.5f, -0.92f);


                glVertex2f(0.45f, -0.88f);
                glVertex2f(0.4f, -0.8f);
                glVertex2f(0.37f, -0.7f);
                glVertex2f(0.37f, -0.6f);
                glVertex2f(0.41f, -0.5f);

                glVertex2f(0.45f, -0.45f);
                glVertex2f(0.5f, -0.42f);
                glVertex2f(0.6f, -0.37f);
                glVertex2f(0.7f, -0.37f);
                glVertex2f(0.8f, -0.4f);


                glEnd();
            }

        }
        //=============================================Final Display Winner==================================
    if(First_player==1)
    {
        glBegin(GL_POLYGON);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-1, 1);
            glVertex2f(1, 1);
            glVertex2f(1, -1);
            glVertex2f(-1, -1);
        glEnd();
        //----------------------------------------------
        //------------------One------------------
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.10, 0.88);
            glVertex2f(-0.10, 0.48);
        glEnd();

        //----------------------------P--------------------
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.10, 0.88);
            glVertex2f(0.33 , 0.88);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.10, 0.88);
            glVertex2f(0.10, 0.48);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.33 , 0.88);
            glVertex2f(0.33 , 0.68);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.33 , 0.68);
            glVertex2f(0.10 , 0.68);
        glEnd();
        //----------------------------W--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.72, 0.20);
            glVertex2f(-0.72 , -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.72, -0.20);
            glVertex2f(-0.60, -0.0);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.60, -0.0);
            glVertex2f(-0.48, -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.48, -0.20);
            glVertex2f(-0.48, 0.20);
        glEnd();

        //----------------------------I--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.0, 0.20);
            glVertex2f(0.0 , -0.20);
        glEnd();
        //----------------------------N--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.72, 0.20);
            glVertex2f(0.72 , -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.72, -0.20);
            glVertex2f(0.48, 0.20);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.48, -0.20);
            glVertex2f(0.48, 0.20);
        glEnd();

    }
    ///================================================================
    if(Second_player==1)
    {
        glBegin(GL_POLYGON);
            glColor3f(1.0f, 0.0f, 1.0f);
            glVertex2f(-1, 1);
            glVertex2f(1, 1);
            glVertex2f(1, -1);
            glVertex2f(-1, -1);
        glEnd();
        //------------------Two------------------
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.33 , 0.88);
            glVertex2f(-0.10, 0.88);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.10, 0.88);
            glVertex2f(-0.10, 0.68);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.10, 0.68);
            glVertex2f(-0.33, 0.68);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.33, 0.68);
            glVertex2f(-0.33, 0.48);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.33, 0.48);
            glVertex2f(-0.10, 0.48);
        glEnd();
        //----------------------------P--------------------
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.10, 0.88);
            glVertex2f(0.33 , 0.88);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.10, 0.88);
            glVertex2f(0.10, 0.48);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.33 , 0.88);
            glVertex2f(0.33 , 0.68);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.33 , 0.68);
            glVertex2f(0.10 , 0.68);
        glEnd();
        //----------------------------W--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.72, 0.20);
            glVertex2f(-0.72 , -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.72, -0.20);
            glVertex2f(-0.60, -0.0);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.60, -0.0);
            glVertex2f(-0.48, -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.48, -0.20);
            glVertex2f(-0.48, 0.20);
        glEnd();

        //----------------------------I--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.0, 0.20);
            glVertex2f(0.0 , -0.20);
        glEnd();
        //----------------------------N--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.72, 0.20);
            glVertex2f(0.72 , -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.72, -0.20);
            glVertex2f(0.48, 0.20);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.48, -0.20);
            glVertex2f(0.48, 0.20);
        glEnd();
    }
    ///=====================================================
    if(Draw==1)
    {
        glBegin(GL_POLYGON);
            glColor3f(1.0f, 1.0f, 0.0f);
            glVertex2f(-1, 1);
            glVertex2f(1, 1);
            glVertex2f(1, -1);
            glVertex2f(-1, -1);
        glEnd();
         //----------------------------------------------------
        //----------------------------D--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.82, 0.20);
            glVertex2f(-0.82 , -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.82, 0.20);
            glVertex2f(-0.60, 0.10);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.82, -0.20);
            glVertex2f(-0.60, -0.10);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.60, 0.10);
            glVertex2f(-0.60, -0.10);
        glEnd();
        //----------------------------R--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.38, 0.20);
            glVertex2f(-0.38 , -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.38, 0.20);
            glVertex2f(-0.15, 0.10);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.15, 0.10);
            glVertex2f(-0.38, 0.0);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.38, 0.0);
            glVertex2f(-0.15, -0.20);
        glEnd();
        //----------------------------A--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.0, -0.20);
            glVertex2f(0.12 , 0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.12 , 0.20);
            glVertex2f(0.24, -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.06 , 0.00);
            glVertex2f(0.18 , 0.00);
        glEnd();
        //----------------------------W--------------------
         glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.42, 0.20);
            glVertex2f(0.42 , -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.42, -0.20);
            glVertex2f(0.60, -0.0);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.60, -0.0);
            glVertex2f(0.78, -0.20);
        glEnd();
        glBegin(GL_LINES);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.78, -0.20);
            glVertex2f(0.78, 0.20);
        glEnd();
    }
        glFlush();

}
//----------------------------------------------------------------------------------------------------------
void Result(void)
{
    int val_store=(int)arr[counter_O_X]-49;
    if(counter_O_X%2==0)
    {
        if(val_store==4)
        {
            No_1_win_by_even_4_divider++;
            No_1_win_by_even_4_divider_not++;
        }
        if((val_store%2==0) && (val_store%4==0) && (val_store!=4))
        {
            No_1_win_by_even_4_divider++;
        }
        if((val_store%2==0) && (val_store%4!=0)&& (val_store!=4))
        {
            No_1_win_by_even_4_divider_not++;
        }
        if(val_store/3==0)
        {
            No_1_win_by_Quotient_0++;
        }
        if(val_store/3==1)
        {
            No_1_win_by_Quotient_1++;
        }
        if(val_store/3==2)
        {
            No_1_win_by_Quotient_2++;
        }
        if(val_store%3==0)
        {
            No_1_win_by_reminder_0++;
        }
        if(val_store%3==1)
        {
            No_1_win_by_reminder_1++;
        }
        if(val_store%3==2)
        {
            No_1_win_by_reminder_2++;
        }
    }
    if(counter_O_X%2==1)
    {
        if(val_store==4)
        {
            No_2_win_by_even_4_divider++;
            No_2_win_by_even_4_divider_not++;
        }
        if((val_store%2==0) && (val_store%4==0) && (val_store!=4))
        {
            No_2_win_by_even_4_divider++;
        }
        if((val_store%2==0) && (val_store%4!=0) && (val_store!=4))
        {
            No_2_win_by_even_4_divider_not++;
        }
        if(val_store/3==0)
        {
            No_2_win_by_Quotient_0++;
        }
        if(val_store/3==1)
        {
            No_2_win_by_Quotient_1++;
        }
        if(val_store/3==2)
        {
            No_2_win_by_Quotient_2++;
        }
       if(val_store%3==0)
        {
            No_2_win_by_reminder_0++;
        }
        if(val_store%3==1)
        {
            No_2_win_by_reminder_1++;
        }
        if(val_store%3==2)
        {
            No_2_win_by_reminder_2++;
        }
    }
}
//-------------------------------------------------------------------------------------------------------------------
void display(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_POLYGON);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-1, 1);
            glVertex2f(1, 1);
            glVertex2f(1, -1);
            glVertex2f(-1, -1);
        glEnd();

    glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.33f, -1.0f);
    glVertex2f(0.33f,  1.0f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.33f, -1.0f);
    glVertex2f(-0.33f,  1.0f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 0.33f);
    glVertex2f( 1.0f, 0.33f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, -0.33f);
    glVertex2f( 1.0f, -0.33f);
    glEnd();

    //-------------------------Numbering---------------------------
    //-----------------One-------------------
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.665 , 0.88);
        glVertex2f(-0.665, 0.48);
    glEnd();
    //------------------Two------------------
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.12 , 0.88);
        glVertex2f(0.12, 0.88);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.12, 0.88);
        glVertex2f(0.12, 0.68);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.12, 0.68);
        glVertex2f(-0.12, 0.68);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.12, 0.68);
        glVertex2f(-0.12, 0.48);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.12, 0.48);
        glVertex2f(0.12, 0.48);
    glEnd();

    //------------------Three------------------
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.55 , 0.88);
        glVertex2f(0.80 , 0.88);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.80 , 0.88);
        glVertex2f(0.80 , 0.48);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.80 , 0.68);
        glVertex2f(0.55 , 0.68);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.80 , 0.48);
        glVertex2f(0.55 , 0.48);
    glEnd();

     //------------------Four------------------
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.80 , 0.21);
        glVertex2f(-0.80 , 0.0);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.80 , 0.0);
        glVertex2f(-0.56 , 0.0);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.56 , 0.21);
        glVertex2f(-0.56 , -0.21);
    glEnd();

    //------------------Five------------------
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.12, 0.21);
        glVertex2f(-0.12 , 0.21);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.12, 0.21);
        glVertex2f(-0.12, 0.0);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.12, 0.0);
        glVertex2f(0.12, 0.0);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.12, 0.0);
        glVertex2f(0.12, -0.21);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.12, -0.21);
        glVertex2f(-0.12, -0.21);
    glEnd();
    //------------------Six------------------
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.80 , 0.21);
        glVertex2f(0.55 , 0.21);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.55 , 0.21);
        glVertex2f(0.55 , -0.21);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.55 , -0.21);
        glVertex2f(0.80 , -0.21);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.80 , -0.21);
        glVertex2f(0.80 , 0.0);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.80 , 0.0);
        glVertex2f(0.55 , 0.0);
    glEnd();

    //------------------Seven------------------
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.80 , -0.48);
        glVertex2f(-0.55 , -0.48);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.55 , -0.48);
        glVertex2f(-0.55 , -0.88);
    glEnd();

    //------------------Eight------------------
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.12 , -0.48);
        glVertex2f(0.12, -0.48);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.12, -0.48);
        glVertex2f(0.12, -0.88);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.12, -0.48);
        glVertex2f(-0.12, -0.88);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.12 , -0.88);
        glVertex2f(0.12, -0.88);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.12 , -0.68);
        glVertex2f(0.12, -0.68);
    glEnd();
    //------------------Nine------------------
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.55 , -0.48);
        glVertex2f(0.80 , -0.48);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.80 , -0.48);
        glVertex2f(0.80 , -0.88);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.80 , -0.88);
        glVertex2f(0.55 , -0.88);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.80 , -0.68);
        glVertex2f(0.55 , -0.68);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.55 , -0.68);
        glVertex2f(0.55 , -0.48);
    glEnd();


	glFlush();
}
void myInit(void)
{
    glClearColor(0.000, 1.000, 0.000,0);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1365, 694, 0.0);
}
//==============================About us Writing===================================
void drawAbout(void * font, char *s, float x, float y)
{
     glRasterPos2f(x, y);
     for (int i = 0; i < strlen (s); i++)
          glutBitmapCharacter (font, s[i]);
}
void About()
{
    glColor3f(0,1,1);

    drawAbout(GLUT_BITMAP_TIMES_ROMAN_24," 1) URMILA MAZUMDER, 18-36549-1",150,200);
    drawAbout(GLUT_BITMAP_TIMES_ROMAN_24," 2) SATYAJIT MALAKAR, 18-36797-1",150,250);
    drawAbout(GLUT_BITMAP_TIMES_ROMAN_24," 3) PRAJNA SHIRSHO SHOME, 18-36805-1",150,300);
    drawAbout(GLUT_BITMAP_TIMES_ROMAN_24," 4) FAHIM AHAMED, 18-36835-1",150,350);

    glColor3f(1,1,0);
    drawAbout(GLUT_BITMAP_TIMES_ROMAN_24," Subject: Computer Graphics ",150,400);
    drawAbout(GLUT_BITMAP_TIMES_ROMAN_24," Section: A ",150,450);

    glColor3f(1,0,0);
    drawAbout(GLUT_BITMAP_TIMES_ROMAN_24," Press A to Start The Game... ",150,500);
}
void myDisplay1(void)
{
    About();
	glFlush();
}
//-------------------------------------------------------------------------------------------------------------------
int lol=0;
void keyboardAction(unsigned char key, int x, int y)
{
    if((lol==0)&&((key=='a')||(key=='A')))
    {
        display();
        lol++;
    }

    //===================About us============================================
    if((lol==0)&&((key=='b')||(key=='B')))
    {
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(600, 500);
        glutInitWindowPosition(0, 0);
        glutCreateWindow("Tik Tak Toe");
        glutDisplayFunc(myDisplay1);
        myInit();
        glutKeyboardFunc(keyboardAction);
        glutMainLoop();

        lol++;
    }

    bool flag=true;
    if((No_1_win_by_even_4_divider>=3)||(No_1_win_by_even_4_divider_not>=3)||(No_1_win_by_Quotient_0>=3)||(No_1_win_by_Quotient_1>=3)||(No_1_win_by_Quotient_2>=3)||(No_1_win_by_reminder_0>=3)||(No_1_win_by_reminder_1>=3)||(No_1_win_by_reminder_2>=3))
    {
        First_player=1;
        cout<<"1st"<<endl;
    }
    else if((No_2_win_by_even_4_divider>=3)||(No_2_win_by_even_4_divider_not>=3)||(No_2_win_by_Quotient_0>=3)||(No_2_win_by_Quotient_1>=3)||(No_2_win_by_Quotient_2>=3)||(No_2_win_by_reminder_0>=3)||(No_2_win_by_reminder_1>=3)||(No_2_win_by_reminder_2>=3))
    {
        Second_player=1;
        cout<<"2nd"<<endl;

    }
    else if(counter_O_X>=9)
    {
        Draw=1;
        cout<<"Draw"<<endl;

    }

    for(int i=0; i <= counter_O_X; i++)
    {
        if(arr[i]==key && counter_O_X != 9)
        {
            flag=false;
            break;
        }

    }
    if(flag==true)
    {
        if((key=='1')||(key=='2')||(key=='3')||(key=='4')||(key=='5')||(key=='6')||(key=='7')||(key=='8')||(key=='9'))
        {
            Int_val_0to9=(int)key;
            fahim();
            Result();
            counter_O_X++;
        }
    }
}
//=========================Game Start Writing==========================================
void drawGameStart(void * font, char *s, float x, float y)
{
     glRasterPos2f(x, y);
     for (int i = 0; i < strlen (s); i++)
          glutBitmapCharacter(font, s[i]);
}
void GameStart()
{
    glColor3f(0,1,1);

    drawGameStart(GLUT_BITMAP_TIMES_ROMAN_24,"A) Start",150,250);
    drawGameStart(GLUT_BITMAP_TIMES_ROMAN_24,"B) About us",150,300);
}
void display1(void)
{
    GameStart();
    glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tik Tak Toe");
	glutDisplayFunc(display1);
	myInit();
	glutKeyboardFunc(keyboardAction);
	glutMainLoop();
	return 0;
}
