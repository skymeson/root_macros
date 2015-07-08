#include "Style.h";

TCanvas *Canvas;
TF1 *W_S = new TF1("W_S","([2]/(1.+exp((x-[0])/[1])))*(x>=0) + ([2]/(1.+exp((-x-[0])/[1])))*(x<0)",0,20);

void woodsSaxon()
{
  //set up
  gROOT->Macro("init.C");
  setStyle();

  Canvas = new TCanvas("Canvas","Woods-Saxon Distribution for a Au Nucleus",0,0,500,500);
  Canvas->SetLeftMargin(0.2);
  Canvas->SetBottomMargin(0.2);
  TH1F *hFrame = Canvas->DrawFrame(0,0.,15,0.20);
  hFrame->GetXaxis()->SetNdivisions(505);
  hFrame->GetXaxis()->SetTitle("Distance from Center [fm]");
  hFrame->GetXaxis()->SetTitleOffset(1.6);
  hFrame->GetYaxis()->SetNdivisions(505);
  hFrame->GetYaxis()->SetTitle("Probablity");
  hFrame->GetYaxis()->SetTitleOffset(1.8);
  
  W_S->SetParameters(6.3691,0.54,1);
  //W_S->Draw();
  Float_t Integral = W_S->Integral(0,15);
  W_S->SetParameter(2,1./Integral);
  W_S->Draw("same");
  
  TLine *line = new TLine(W_S->GetParameter(0),0, W_S->GetParameter(0),W_S->Eval(0));
  line->SetLineStyle(2);
  line->Draw();

  TArrow *arr = new TArrow(W_S->GetParameter(0),W_S->Eval(0)/2., W_S->GetParameter(0)+W_S->GetParameter(1), W_S->Eval(0)/2.,0.01,"|>");
  arr->SetFillColor(1);arr->Draw();

  TLatex *latex = new TLatex(6.5,0.15,"Nuclear size");
  latex->SetTextSize(0.035);
  latex->Draw();
  latex = new TLatex(7.0,0.075,"Skin Width");
  latex->SetTextSize(0.035);
  latex->Draw();
}













