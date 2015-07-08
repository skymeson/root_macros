
#include "Style.h";

void spaceTime(){

  gROOT->Macro("init.C");

  //make the plot
  TCanvas *cFire = new TCanvas("cFire", "cFire", 500, 500);
  cFire->Draw();
  //drawFrame(-1., -1., 1., 1., "", "");
  
  drawAxes();
  drawArrows();
  drawFxns();
  writeWords();
}


void drawAxes(){

  TArrow *a1 = new TArrow(0.01, 0.28, 0.99, 0.28, 0.02);
  a1->SetLineWidth(3);
  a1->Draw("|>");
  
  TLatex *xZdir = new TLatex(0.97, 0.23, "z");
  xZdir->SetTextSize(0.04);
  xZdir->Draw();
  
  TArrow *a2 = new TArrow(0.5, 0.01, 0.5, 0.99, 0.02);
  a2->SetLineWidth(3);
  a2->Draw("|>");

  TLatex *xTime = new TLatex(0.525, 0.96, "t");
  xTime->SetTextSize(0.04);
  xTime->Draw();
}

void drawArrows(){

  TArrow *a1 = new TArrow(0.666493, 0.0714286, 0.569937, 0.190789, 0.02);
  a1->SetLineWidth(2);  
  a1->Draw("|>");

  TLine *l1 = new TLine(0.57, 0.19, 0.025, 0.88);
  l1->SetLineWidth(2);
  l1->Draw();
  
  TArrow *a2 = new TArrow(0.333507, 0.0714286, 0.4300063, 0.190789, 0.02);
  a2->SetLineWidth(2);  
  a2->Draw("|>");

  TLine *l2 = new TLine(0.43, 0.19, 0.976, 0.88);
  l2->SetLineWidth(2);
  l2->Draw();
  
  TArrow *aPre = new TArrow(0.245968, 0.444915, 0.473904, 0.348263, 0.02);
  aPre->Draw("|>");

  TArrow *aCol = new TArrow(0.671371, 0.317797, 0.532258, 0.290254, 0.02);
  aCol->Draw("|>");
}

void drawFxns(){
  TF1 *f1 = new TF1("f1", "0.38+pow(2*(x-.5), 2)", 0.4, 0.6);
  f1->SetLineWidth(1.);
  f1->Draw("SAME");

  TF1 *f2 = new TF1("f2", "0.55+pow(1.2*(x-.5), 2)", 0.2, 0.8);
  f2->SetLineWidth(1.);
  f2->Draw("SAME");

  TF1 *f3 = new TF1("f3", "0.775+pow(0.75*(x-.5), 2)", 0.09, 0.91);
  f3->SetLineWidth(1.);
  f3->Draw("SAME");

}

void writeWords(){

  TLatex *xQGP = new TLatex(0.55, 0.475, "QGP");
  xQGP->SetTextSize(0.04);
  xQGP->Draw();

  TLatex *xMP1 = new TLatex(0.55, 0.695, "Mixed");
  xMP1->SetTextSize(0.04);
  xMP1->Draw();

  TLatex *xMP2 = new TLatex(0.6, 0.65, "Phase");
  xMP2->SetTextSize(0.04);
  xMP2->Draw();

  TLatex *xHG1 = new TLatex(0.55, 0.895, "Hadron");
  xHG1->SetTextSize(0.04);
  xHG1->Draw();

  TLatex *xHG2 = new TLatex(0.6, 0.85, "Gas");
  xHG2->SetTextSize(0.04);
  xHG2->Draw();

  TLatex *xPre1 = new TLatex(0.0362903, 0.457627, "Initial Hard");
  xPre1->SetTextSize(0.04);
  xPre1->Draw();

  TLatex *xPre2 = new TLatex(0.0322581, 0.419492, "Scatterings");
  xPre2->SetTextSize(0.04);
  xPre2->Draw();

  TLatex *xPre3 = new TLatex(0.00806452, 0.370763, "(Pre-Equilibrium)");
  xPre3->SetTextSize(0.04);
  xPre3->Draw();

  TLatex *xNucA = new TLatex(0.231855, 0.0233051, "Nucleus A"); 
  xNucA->SetTextSize(0.04);
  xNucA->Draw();

  TLatex *xNucB = new TLatex(0.586694, 0.0233051, "Nucleus B"); 
  xNucB->SetTextSize(0.04);
  xNucB->Draw();

  TLatex *xColl = new TLatex(0.679435, 0.309322, "Collision"); 
  xColl->SetTextSize(0.04);
  xColl->Draw();
}
