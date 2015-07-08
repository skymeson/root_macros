
#include "Style.h";

int iColor = 1;    //color or black and white?

void TAB(){

  //set-up
  gROOT->Macro("init.C");
  setStyle();

  //make the plot
  TCanvas *cTAB = new TCanvas("cTAB", "cTAB", 1000, 500);
  cTAB->Divide(2,1);
  cTAB->Draw();
 
  cTAB->cd(1);
  restFrame();

  cTAB->cd(2);
  labFrame();
}

void restFrame(){
  TLatex *x1 = new TLatex(0.4, 0.15, "Rest Frame");
  x1->SetTextSize(0.04);
  x1->Draw();
  TEllipse *e1 = new TEllipse(0.5, 0.5, 0.3, 0.3, 0., 360., 0.);
  e1->SetLineWidth(2);
  if(iColor)e1->SetLineColor(4);
  e1->Draw();
  TEllipse *e2 = new TEllipse(0.25, 0.5, 0.05, 0.05, 0., 360., 0.);
  e2->SetLineWidth(2);
  if(iColor)e2->SetLineColor(4);
  e2->SetFillColor(1);
  if(iColor)e2->SetFillColor(4);
  e2->Draw();
  TEllipse *e3 = new TEllipse(0.35, 0.5, 0.05, 0.05, 0., 360., 0.);
  e3->SetLineWidth(2);
  if(iColor)e3->SetLineColor(4);
  e3->SetFillColor(1);
  if(iColor)e3->SetFillColor(4);
  e3->Draw();
  TEllipse *e4 = new TEllipse(0.45, 0.5, 0.05, 0.05, 0., 360., 0.);
  e4->SetLineWidth(2);
  if(iColor)e4->SetLineColor(4);
  e4->SetFillColor(1);
  if(iColor)e4->SetFillColor(4);
  e4->Draw();
  TEllipse *e5 = new TEllipse(0.55, 0.5, 0.05, 0.05, 0., 360., 0.);
  e5->SetLineWidth(2);
  if(iColor)e5->SetLineColor(4);
  e5->SetFillColor(1);
  if(iColor)e5->SetFillColor(4);
  e5->Draw();
  TEllipse *e6 = new TEllipse(0.65, 0.5, 0.05, 0.05, 0., 360., 0.);
  e6->SetLineWidth(2);
  if(iColor)e6->SetLineColor(4);
  e6->SetFillColor(1);
  if(iColor)e6->SetFillColor(4);
  e6->Draw();
  TEllipse *e7 = new TEllipse(0.75, 0.5, 0.05, 0.05, 0., 360., 0.);
  e7->SetLineWidth(2);
  if(iColor)e7->SetLineColor(4);
  e7->SetFillColor(1);
  if(iColor)e7->SetFillColor(4);
  e7->Draw();
}

void labFrame(){
  TArrow *a1 = new TArrow(0.352122, 0.201526, 0.64679, 0.201526, 0.01);
  a1->SetLineWidth(2);
  a1->Draw("|>");
  TLatex *x1 = new TLatex(0.4, 0.15, "z Direction");
  x1->SetTextSize(0.04);
  x1->Draw();
  TLatex *x2 = new TLatex(0.385, 0.5, "T_{A}(b)");
  x2->SetTextSize(0.04);
  x2->Draw();
  TEllipse *e1 = new TEllipse(0.35, 0.5, 0.01, 0.3, 0., 360., 0.);
  e1->SetLineWidth(2);
  if(iColor)e1->SetLineColor(4);
  e1->Draw();
  TEllipse *e2 = new TEllipse(0.35, 0.5, 0.01, 0.05, 0., 360., 0.);
  e2->SetLineWidth(2);
  e2->SetFillColor(1);
  if(iColor)e2->SetLineColor(4);
  if(iColor)e2->SetFillColor(4);
  e2->Draw();
}
