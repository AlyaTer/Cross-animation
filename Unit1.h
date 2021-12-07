//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPath *Path1;
	TPath *Path0;
	TPathAnimation *PathAnimation1;
	TFloatAnimation *FloatAnimation1;
	TButton *Button1;
	TRectangle *Rectangle1;
	TFloatAnimation *FloatAnimation2;
	TFloatAnimation *FloatAnimation3;
	TTrackBar *TrackBar1;
	TTrackBar *TrackBar2;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall PathAnimation1Finish(TObject *Sender);
	void __fastcall TrackBar1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
