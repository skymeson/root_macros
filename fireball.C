
#include "Style.h";

int iColor = 1;    //color or black and white?

void fireball(){

  //set-up
  gROOT->Macro("init.C");
  setStyle();

  //ake the plot
  TCanvas *cFire = new TCanvas("cFire", "cFire", 500, 500);
  cFire->Draw();
 
  ellipises();
  arrows1();
}

void ellipises(){

  TEllipse *e1 = new TEllipse(0.66, 0.66, 0.025, 0.2, 0., 360., 0.);
  e1->SetLineWidth(2);
  e1->SetFillStyle(3003);
  e1->SetFillColor(1);
  if(iColor)e1->SetFillColor(kBlue);
  if(iColor)e1->SetLineColor(kBlue);
  e1->SetNoEdges();
  e1->Draw();

  TEllipse *e2 = new TEllipse(0.33, 0.33, 0.025, 0.2, 0., 360., 180.);
  e2->SetLineWidth(2);
  e2->SetFillStyle(3003);
  e2->SetFillColor(1);
  if(iColor)e2->SetFillColor(kRed);
  if(iColor)e2->SetLineColor(kRed);
  e2->SetNoEdges();
  e2->Draw();

  TBox *b1 = new TBox(0.3, 0.6, 0.7, 0.4);
  b1->SetFillColor(0);
  b1->SetLineColor(0);
  b1->Draw();

  TEllipse *e3 = new TEllipse(0.5, 0.5, 0.1, 0.066, 0., 360., 0.);
  e3->SetLineWidth(2);
  if(iColor)e3->SetFillColor(kRed+2);
  if(iColor)e3->SetLineColor(kRed+2);
  e3->Draw();

  TLatex *xFire = new TLatex(0.445, 0.49, "Fireball");
  if(iColor)xFire->SetTextColor(0);
  xFire->SetTextSize(0.04);
  xFire->Draw();

  TLatex *xA1 = new TLatex(0.72, 0.665, "Nucleus");
  xA1->SetTextSize(0.04);
  if(iColor)xA1->SetTextColor(kBlue);
  xA1->Draw();

  TLatex *xA2 = new TLatex(0.77, 0.625, "A");
  xA2->SetTextSize(0.04);
  if(iColor)xA2->SetTextColor(kBlue);
  xA2->Draw();

  TLatex *xB1 = new TLatex(0.13, 0.37, "Nucleus");
  xB1->SetTextSize(0.04);
  if(iColor)xB1->SetTextColor(kRed);
  xB1->Draw();
  
  TLatex *xB2 = new TLatex(0.18, 0.33, "B");
  xB2->SetTextSize(0.04);
  if(iColor)xB2->SetTextColor(kRed);
  xB2->Draw();

  TLatex *xSide = new TLatex(0.45, 0.95, "#bf{Side View}");
  xSide->SetTextSize(0.04);
  xSide->Draw();
}

void arrows1(){
 
  TArrow *a1 = new TArrow(0.7, 0.75, 0.775, 0.75, 0.01);
  a1->SetLineWidth(2);
  if(iColor)a1->SetLineColor(kBlue);
  if(iColor)a1->SetFillColor(kBlue);
  a1->Draw("|>");
  
  TArrow *a2 = new TArrow(0.275, 0.25, 0.2, 0.25, 0.01); 
  a2->SetLineWidth(2);
  if(iColor)a2->SetLineColor(kRed);
  if(iColor)a2->SetFillColor(kRed);
  a2->Draw("|>");

  TArrow *a3 = new TArrow(0.2, 0.05, 0.8, 0.05, 0.01); 
  a3->SetLineStyle(2);
  a3->Draw("|>");

  TLatex *xZ = new TLatex(0.3, 0.015, "z axis   (beam direction)");
  xZ->SetTextSize(0.04);
  xZ->Draw();

  TArrow *a4 = new TArrow(0.5, 0.57, 0.5, 0.65, 0.02);
  a4->SetLineWidth(2);
  a4->Draw("|>");
  
  TArrow *a5 = new TArrow(0.550104, 0.559415, 0.596033, 0.61426, 0.02);
  a5->SetLineWidth(2);
  a5->Draw("|>");

  TArrow *a6 = new TArrow(0.449896, 0.559415, 0.403967, 0.61426, 0.02);
  a6->SetLineWidth(2);
  a6->Draw("|>");

  TArrow *a7 = new TArrow(0.5, 0.43, 0.5, 0.35, 0.02);
  a7->SetLineWidth(2);
  a7->Draw("|>");
  
  TArrow *a8 = new TArrow(0.550104, 0.440585, 0.596033, 0.38574, 0.02);
  a8->SetLineWidth(2);
  a8->Draw("|>");

  TArrow *a9 = new TArrow(0.449896, 0.440585, 0.403967, 0.38574, 0.02);
  a9->SetLineWidth(2);
  a9->Draw("|>");

  TArrow *a10 = new TArrow(0.4, 0.5, 0.335, 0.5, 0.02);
  a10->SetLineWidth(2);
  a10->Draw("|>");

  TArrow *a11 = new TArrow(0.6, 0.5, 0.665, 0.5, 0.02);
  a11->SetLineWidth(2);
  a11->Draw("|>");




}

