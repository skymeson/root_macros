//
//

#include "Style.h"

//main
void photons(){

  setStyle();

  TCanvas *cPhotons = new TCanvas("cPhotons", "cPhotons", 500, 500);

  drawBoxes();
  drawLines();
  drawArrows();
  drawText();

}//main

void drawBoxes(){

  TBox *b0 = new TBox(0.55, 0.75, 0.95, 0.95);
  b0->SetFillColor(5);
  b0->Draw();

  TBox *b1 = new TBox(0.55, 0.55, 0.95, 0.75);
  b1->SetFillColor(kGray);
  b1->Draw();

  TBox *b2 = new TBox(0.55, 0.05, 0.95, 0.55);
  b2->SetFillColor(kBlue-7);
  b2->Draw();
  
}//drawBoxes()

void drawLines(){

  TLine *l0 = new TLine(0.525, 0.95, 0.05, 0.95);
  l0->SetLineStyle(9);
  l0->SetLineWidth(3);
  l0->Draw();

  TLine *l1 = new TLine(0.525, 0.75, 0.20, 0.75);
  l1->SetLineStyle(9);
  l1->SetLineWidth(3);
  l1->Draw();

  TLine *l2 = new TLine(0.525, 0.55, 0.35, 0.55);
  l2->SetLineStyle(9);
  l2->SetLineWidth(3);
  l2->Draw();
  
  TLine *l3 = new TLine(0.525, 0.05, 0.05, 0.05);
  l3->SetLineStyle(9);
  l3->SetLineWidth(3);
  l3->Draw();

}//drawLines()

void drawArrows(){

  TArrow *a0 = new TArrow(0.075, 0.65, 0.075, 0.935, 0.02);
  a0->SetLineWidth(3);
  a0->Draw("|>");

  TArrow *a1 = new TArrow(0.075, 0.5, 0.075, 0.065, 0.02);
  a1->SetLineWidth(3);
  a1->Draw("|>");

  TArrow *a2 = new TArrow(0.225, 0.525, 0.225, 0.735, 0.02);
  a2->SetLineWidth(3);
  a2->Draw("|>");

  TArrow *a3 = new TArrow(0.225, 0.385, 0.225, 0.065, 0.02);
  a3->SetLineWidth(3);
  a3->Draw("|>");

  TArrow *a4 = new TArrow(0.375, 0.4, 0.375, 0.535, 0.02);
  a4->SetLineWidth(3);
  a4->Draw("|>");

  TArrow *a3 = new TArrow(0.375, 0.275, 0.375, 0.065, 0.02);
  a3->SetLineWidth(3);
  a3->Draw("|>");

}//drawArrows()

void drawText(){

  TLatex *x0 = new TLatex(0.035, 0.55, "N^{#gamma}_{inc}");
  x0->SetTextSize(0.075);
  x0->Draw();

  TLatex *x1 = new TLatex(0.177419, 0.434322, "N^{#gamma}_{decay}");
  x1->SetTextSize(0.075);
  x1->Draw();
  
  TLatex *x2 = new TLatex(0.328629, 0.311441, "N^{#gamma}_{#pi^{0} decay}");
  x2->SetTextSize(0.075);
  x2->Draw();

  TLatex *x3 = new TLatex(0.665323, 0.834746, "N^{#gamma}_{direct}");
  x3->SetTextSize(0.075);
  x3->Draw();
}
