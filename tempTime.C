//
//

#include "Style.h"

void tempTime(){

  gROOT->Macro("init.C");
  setStyle();

  //make the plot
  TCanvas *cNew = new TCanvas("cNew", "cNew", 500, 500);
  drawFrame(-3., 130., 65., 279., "#tau [fm]", "T [MeV]");
  cNew->Draw();
  
  drawQGP();
  drawMix();
  drawHHG();
}

void drawQGP(){

  TLine *l0 = new TLine(1., 130., 1., 250);
  l0->SetLineWidth(2);
  l0->Draw();

  TLine *l1 = new TLine(3., 130., 3., 170);
  l1->SetLineWidth(2);
  l1->Draw();

  TEllipse *e0 = new TEllipse(3.64312, 203.7, 1.7852, 67.5551, 137.5, 210, 1.5);
  e0->SetNoEdges();
  e0->SetLineWidth(2);
  e0->Draw();

  TLatex *x0 = new TLatex(7.2, 194.651, "QGP");
  x0->Draw();

  TArrow *a0 = new TArrow(8.29547, 191.705, 1.89892, 176.973, 0.02);
  a0->SetLineWidth(2);
  a0->Draw("|>");

  TLatex *x1 = new TLatex(9.37741, 248.316, "T_{0} = 250 MeV");
  x1->Draw();

  TArrow *a1 = new TArrow(8.83644, 250, 1.96611, 250, 0.02);
  a1->SetLineWidth(2);
  a1->Draw("|>");


}

void drawMix(){

  TLine *l0 = new TLine(3., 170., 39., 170);
  l0->SetLineWidth(2);
  l0->Draw();

  TLine *l1 = new TLine(39., 130., 39., 170.);
  l1->SetLineWidth(2);
  l1->Draw();

  TLatex *x0 = new TLatex(10.3075, 142.038, "Mixed Phase");
  x0->Draw();

  TLatex *x1 = new TLatex(30.0495, 192.546, "T_{C} = 170 MeV");
  x1->Draw();

  TArrow *a1 = new TArrow(32.25, 189.179, 32.25, 173.606, 0.02);
  a1->SetLineWidth(2);
  a1->Draw("|>");
  
}
void drawHHG(){

  TLine *l0 = new TLine(39., 170., 57., 150);
  l0->SetLineWidth(2);
  l0->Draw();

  TLine *l1 = new TLine(57., 130., 57., 150.);
  l1->SetLineWidth(2);
  l1->Draw();

  TLatex *x0 = new TLatex(43.3935, 142.038, "HHG");
  x0->Draw();

}
