void SchemPhase()
{
  Setup();

  DrawAxis();
  DrawCrit(kFALSE);//kTRUE is draw deconfinement
  
  DrawText(kFALSE);//kTRUE is draw deconfinement
  
  DrawCentPeriph();

  DrawData();

  DrawModernAdditions();//CGC and Critical End Point
}

void DrawModernAdditions()
{
  //Color Glass Condensate Phase in Fragmentation region
  TF1 *fCGC = new TF1("fCGC","0.1+pow(x-0.9,2)",0.78,1.0);
  fCGC->SetLineColor(2);
  fCGC->SetLineStyle(2);
  fCGC->Draw("same");
  
  newTLatex(0.9,0.05,"CGC",2,22,0.03,0);

  TF1 *fCrit = new TF1("fCrit","0.72-1.25*1.25*pow(x,4)",0.3,0.4);
  fCrit->SetLineColor(2);
  fCrit->SetLineWidth(8);
  fCrit->Draw("same");
  newTLatex(0.37,0.72,"Critical End Point?",2,12,0.03,0);
}

void DrawData()
{
  newTLatex(0.70,0.25,"SIS",1,22,0.030,0);
  newTLatex(0.65,0.35,"AGS",1,22,0.030,0);
  newTLatex(0.55,0.50,"SPS",1,22,0.030,0);
  newTLatex(0.40,0.63,"RHIC",1,22,0.030,0);
  newTLatex(0.25,0.68,"LHC",1,22,0.030,0);
}

void DrawCentPeriph()
{
  TArrow *arr = new TArrow(0.1,0.9,0.05,0.6,0.02,">");
  arr->SetLineStyle(2);
  arr->Draw();
  newTLatex(0.10,0.95,"Central",1,22,0.030,0);
  newTLatex(0.10,0.90,"Regions",1,22,0.030,0);
  
  TArrow *arr = new TArrow(0.95,0.1,0.6,0.05,0.02,">");
  arr->SetLineStyle(2);
  arr->Draw();
  newTLatex(0.97,0.20,"Fragmentation",1,22,0.030,0);
  newTLatex(0.97,0.15,"Regions",1,22,0.030,0);
}

void DrawText(Bool_t kDrawTwo)
{
  if(kDrawTwo) {
    newTLatex(0.25,0.75,"Deconfinement",1,22,0.030,-5);
    newTLatex(0.59,0.59,"Chiral",1,22,0.030,-50);
    newTLatex(0.68,0.45,"Transitions",1,22,0.030,-60);}
  newTLatex(0.20,0.20,"Hadrons",1,22,0.030,0);
  newTLatex(0.60,0.85,"Deconfined Quarks",1,22,0.030,0);
  newTLatex(0.60,0.80,"and Gluons",1,22,0.030,0);
}

void newTLatex(Float_t x, Float_t y, TString text, Int_t Color,
               Int_t Align, Float_t Size=0.030, Float_t Angle=0.)
{
  TLatex *latex = new TLatex(x,y,text);
  latex->SetTextSize(Size);
  latex->SetTextColor(Color);
  latex->SetTextAlign(Align);
  latex->SetTextAngle(Angle);

  latex->Draw();
}

void DrawCrit(Bool_t kDrawTwo)
{
  TF1 *fCrit = new TF1("fCrit","0.8-1.25*pow(x,4)",0,0.9);
  if(kDrawTwo) fCrit->Draw("same");
  fCrit = new TF1("fCrit","0.72-1.25*1.25*pow(x,4)",0,0.83);
  fCrit->Draw("same");
}

void DrawAxis()
{
  TArrow *arr = new TArrow(0,0,1,0,0.03,"|>");
  arr->SetFillColor(1);
  arr->Draw();

  arr = new TArrow(0,0,0,1,0.03,"|>");
  arr->SetFillColor(1);
  arr->Draw();
}

void Setup()
{
  Canvas = new TCanvas("Canvas","Canvas",0,0,500,500);
  Canvas->SetLeftMargin(0.2);
  Canvas->SetBottomMargin(0.2);
  
  Canvas->Range(-0.2,-0.2,1.1,1.1);
  TLatex *latex = new TLatex(1.0,-0.1,"Baryo-chemical Potential, #mu_{B}");
  latex->SetTextAlign(31);
  latex->Draw();
  latex = new TLatex(-0.1,1.0,"Temperature");
  latex->SetTextAlign(31);
  latex->SetTextAngle(90);
  latex->Draw();
}
