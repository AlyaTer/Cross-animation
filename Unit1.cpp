//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------







void __fastcall TForm1::Button1Click(TObject *Sender)
{
Path1 -> Width = TrackBar1 -> Value;
Path1 -> Height = TrackBar1 -> Value;
FloatAnimation2 -> StartValue =  TrackBar1 -> Value;
FloatAnimation2 -> StopValue =  TrackBar1 -> Value*0.5;
FloatAnimation3 -> StartValue =  TrackBar1 -> Value;
FloatAnimation3 -> StopValue =  TrackBar1 -> Value*0.5;


PathAnimation1 -> Duration = TrackBar2 -> Value;

FloatAnimation1 -> Delay = TrackBar2 -> Value* 0.5;
FloatAnimation2 -> Delay = TrackBar2 -> Value* 0.5;
FloatAnimation3 -> Delay = TrackBar2 -> Value* 0.5;


FloatAnimation1 -> Duration = TrackBar2 -> Value* 0.5;
FloatAnimation2 -> Duration = TrackBar2 -> Value* 0.5;
FloatAnimation3 -> Duration = TrackBar2 -> Value* 0.5;

FloatAnimation1 -> Start();
FloatAnimation2 -> Start();
FloatAnimation3 -> Start();
PathAnimation1 -> Start();
//PathAnimation2 -> Start();

}
//---------------------------------------------------------------------------




void __fastcall TForm1::PathAnimation1Finish(TObject *Sender)
{
/*
int W;
 W = StrToInt(Edit1->Text);
 Edit1->Text=String(W);
 Path1->Width = W;
 Path1->Height = W;
 Edit1 -> Repaint();


 if (PathAnimation1 -> Delay >=2 ){

 Path1->Width *=0.9;
 Path1->Height *= 0.9;

 }
 */
}
//---------------------------------------------------------------------------











void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
Path1 -> Width = TrackBar1 -> Value;
Path1 -> Height = TrackBar1 -> Value;
FloatAnimation2 -> StartValue =  TrackBar1 -> Value;
FloatAnimation2 -> StopValue =  TrackBar1 -> Value*0.5;
FloatAnimation3 -> StartValue =  TrackBar1 -> Value;
FloatAnimation3 -> StopValue =  TrackBar1 -> Value*0.5;
}
//---------------------------------------------------------------------------



