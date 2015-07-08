
#include "Style.h";

int iColor = 1;    //color or black and white?

void collision(){

  //set-up
  gROOT->Macro("init.C");
  setStyle();

  //make the plot
  TCanvas *cColl = new TCanvas("cColl", "cColl", 1000, 500);
  cColl->Divide(2,1);
  cColl->Draw();
  //drawFrame(0., 0., 1., 1., "", "");
  cColl->cd(1);
  ellipises();
  arrows1();

  cColl->cd(2);
  circles();
  arrows2();
}

void ellipises(){

  TEllipse *e1 = new TEllipse(0.33, 0.66, 0.025, 0.2, 0., 360., 0.);
  e1->SetLineWidth(2);
  e1->SetFillStyle(3003);
  e1->SetFillColor(1);
  if(iColor)e1->SetFillColor(kBlue);
  if(iColor)e1->SetLineColor(kBlue);
  e1->Draw();

  TEllipse *e2 = new TEllipse(0.66, 0.33, 0.025, 0.2, 0., 360., 0.);
  e2->SetLineWidth(2);
  e2->SetFillStyle(3003);
  e2->SetFillColor(1);
  if(iColor)e2->SetFillColor(kRed);
  if(iColor)e2->SetLineColor(kRed);
  e2->Draw();

  TLatex *xA1 = new TLatex(0.16, 0.8, "Nucleus");
  xA1->SetTextSize(0.04);
  if(iColor)xA1->SetTextColor(kBlue);
  xA1->Draw();

  TLatex *xA2 = new TLatex(0.21, 0.765, "A");
  xA2->SetTextSize(0.04);
  if(iColor)xA2->SetTextColor(kBlue);
  xA2->Draw();

  TLatex *xB1 = new TLatex(0.72, 0.47, "Nucleus");
  xB1->SetTextSize(0.04);
  if(iColor)xB1->SetTextColor(kRed);
  xB1->Draw();
  
  TLatex *xB2 = new TLatex(0.77, 0.435, "B");
  xB2->SetTextSize(0.04);
  if(iColor)xB2->SetTextColor(kRed);
  xB2->Draw();

  TLatex *xSide = new TLatex(0.45, 0.95, "#bf{Side View}");
  xSide->SetTextSize(0.04);
  xSide->Draw();

  TLatex *xa = new TLatex(0.025, 0.9, "a)");
  xa->SetTextSize(0.04);
  xa->Draw();

}

void arrows1(){
 
  TArrow *a1 = new TArrow(0.375, 0.75, 0.45, 0.75, 0.01);
  a1->SetLineWidth(2);
  if(iColor)a1->SetLineColor(kBlue);
  if(iColor)a1->SetFillColor(kBlue);
  a1->Draw("|>");
  
  TArrow *a2 = new TArrow(0.625, 0.25, 0.55, 0.25, 0.01); 
  a2->SetLineWidth(2);
  if(iColor)a2->SetLineColor(kRed);
  if(iColor)a2->SetFillColor(kRed);
  a2->Draw("|>");

  TArrow *a3 = new TArrow(0.5, 0.33, 0.5, 0.66, 0.01); 
  a3->SetLineWidth(2);
  a3->Draw("<|>");
  TLatex *xImp = new TLatex(0.51, 0.525, "#it{b}");
  xImp->SetTextSize(0.04);
  xImp->Draw();

  TArrow *a4 = new TArrow(0.2, 0.05, 0.8, 0.05, 0.01); 
  a4->SetLineStyle(2);
  a4->Draw("|>");

  TLatex *xZ = new TLatex(0.3, 0.015, "z axis   (beam direction)");
  xZ->SetTextSize(0.04);
  xZ->Draw();

  TLine *l1 = new TLine(0.33, 0.66, 0.55, 0.66);
  l1->SetLineStyle(2);  
  l1->Draw();

  TLine *l2 = new TLine(0.66, 0.33, 0.45, 0.33);
  l2->SetLineStyle(2);  
  l2->Draw();
}

void circles(){

  //TEllipse *c1 = new TEllipse(0.5, 0.4, 0.165, 0.165, 0., 360., 0);
  TEllipse *c1 = new TEllipse(0.5, 0.4, 0.2, 0.2, 0., 360., 0);
  c1->SetLineWidth(2);
  c1->SetFillStyle(3003);
  c1->SetFillColor(1);
  if(iColor)c1->SetFillColor(kRed);
  if(iColor)c1->SetLineColor(kRed);
  c1->Draw();
  
  //TEllipse *c2 = new TEllipse(0.5, 0.59, 0.165, 0.165, 0., 360., 0);
  TEllipse *c2 = new TEllipse(0.5, 0.59, 0.2, 0.2, 0., 360., 0);
  c2->SetLineWidth(2);
  c2->SetFillStyle(3003);
  c2->SetFillColor(1);
  if(iColor)c2->SetFillColor(kBlue);
  if(iColor)c2->SetLineColor(kBlue);
  c2->Draw();
  
  TLatex *xA1 = new TLatex(0.297105, 0.826444, "Nucleus");
  xA1->SetTextSize(0.04);
  if(iColor)xA1->SetTextColor(kBlue);
  xA1->Draw();

  TLatex *xA2 = new TLatex(0.349398, 0.785368, "A");
  xA2->SetTextSize(0.04);
  if(iColor)xA2->SetTextColor(kBlue);
  xA2->Draw();
  
  TLatex *xB1 = new TLatex(0.301288, 0.169232, "Nucleus");
  xB1->SetTextSize(0.04);
  if(iColor)xB1->SetTextColor(kRed);
  xB1->Draw();

  TLatex *xB2 = new TLatex(0.351489, 0.13248, "B");
  xB2->SetTextSize(0.04);
  if(iColor)xB2->SetTextColor(kRed);
  xB2->Draw();

  TLatex *xBeam = new TLatex(0.45, 0.95, "#bf{Beam View}");
  xBeam->SetTextSize(0.04);
  xBeam->Draw();

  TLatex *xb = new TLatex(0.025, 0.9, "b)");
  xb->SetTextSize(0.04);
  xb->Draw();
}

void arrows2(){

  TArrow *a1 = new TArrow(0.75, 0.4, 0.75, 0.59, 0.01);
  a1->SetLineWidth(2);
  a1->Draw("<|>");

  TArrow *a2 = new TArrow(0.5, 0.59, 0.5, .785368, 0.01);
  a2->SetLineWidth(2);
  a2->Draw("|->");

  TLatex *xImp = new TLatex(0.765, 0.5, "#it{b}");
  xImp->SetTextSize(0.04);
  xImp->Draw();

  TLatex *xR = new TLatex(0.515, 0.65, "R");
  xR->SetTextSize(0.04);
  xR->Draw();

  TLatex *xZ = new TLatex(0.4, 0.015, "z axis #odot (out of page)");
  xZ->SetTextSize(0.04);
  xZ->Draw();
}
