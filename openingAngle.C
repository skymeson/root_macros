#include "Style.h";

int oneDecay = 1;

void openingAngle(){

  gROOT->Macro("init.C");

  //make the plot
  TCanvas *cOpen = new TCanvas("cOpen", "cOpen", 1000, 500);
  cOpen->Divide(2,1);
  cOpen->Draw();

  cOpen->cd(1);
  pion1();

  cOpen->cd(2);
  pion2();
}


pion1(){
  TLatex *x1 = new TLatex(0.27828, 0.489191, "#pi^{0}");
  x1->SetTextSize(0.04);
  x1->Draw();

  TLatex *x2 = new TLatex(0.648511, 0.547561, "#gamma_{1}");
  x2->SetTextSize(0.04);
  x2->Draw();

  TLatex *x3 = new TLatex(0.673611, 0.428658, "#gamma_{2}");
  x3->SetTextSize(0.04);
  x3->Draw();

  TLatex *x4 = new TLatex(0.604585, 0.484867, "#theta");
  x4->SetTextSize(0.04);
  x4->Draw();

  TMarker *m1 = new TMarker(0.5, 0.5, 20);
  m1->SetMarkerSize(1.);
  m1->Draw();

  TArrow *a1 = new TArrow(0.33, 0.5, 0.5, 0.5, 0.02);
  a1->SetLineWidth(2);
  a1->Draw("->-");
 
  TArrow *a2 = new TArrow(0.5, 0.5, 0.638052, 0.551885, 0.01);
  a2->SetLineWidth(2);
  a2->Draw("|>");

  TArrow *a3 = new TArrow(0.5, 0.5, 0.665244, 0.437305, 0.01);
  a3->SetLineWidth(2);
  a3->Draw("|>");

  TEllipse *e1 = new TEllipse(0.5, 0.5, 0.1, 0.13, -17., 15., 0.);
  e1->SetNoEdges();
  e1->SetFillStyle(0);
  e1->SetLineWidth(2);
  e1->Draw();

  if(oneDecay){
    TCanvas *cOne = new TCanvas("cOne", "cOne", 500, 500);
    x1->Draw();
    x2->Draw();
    x3->Draw();
    x4->Draw();
    m1->Draw();
    a1->Draw("->-");
    a2->Draw("|>");
    a3->Draw("|>");
    e1->Draw();
  }
}

pion2(){
  TLatex *x1 = new TLatex(0.27828, 0.489191, "#pi^{0}");
  x1->SetTextSize(0.04);
  x1->Draw();

  TLatex *x2 = new TLatex(0.552293, 0.564856, "#gamma_{1}");
  x2->SetTextSize(0.04);
  x2->Draw();

  TLatex *x3 = new TLatex(0.868139, 0.43082, "#gamma_{2}");
  x3->SetTextSize(0.04);
  x3->Draw();

  TLatex *x4 = new TLatex(0.629685, 0.536752, "#theta");
  x4->SetTextSize(0.04);
  x4->Draw();

  TMarker *m1 = new TMarker(0.5, 0.5, 20);
  m1->SetMarkerSize(1.);
  m1->Draw();

  TArrow *a1 = new TArrow(0.33, 0.5, 0.5, 0.5, 0.02);
  a1->SetLineWidth(2);
  a1->Draw("->-");

  TArrow *a2 = new TArrow(0.5, 0.5, 0.546017, 0.564856, 0.01);
  a2->SetLineWidth(2);
  a2->Draw("|>");
 
  TArrow *a3 = new TArrow(0.5, 0.5, 0.853497, 0.439467, 0.01);
  a3->SetLineWidth(2);
  a3->Draw(">");

  TEllipse *e1 = new TEllipse(0.5, 0.5, 0.125, 0.13, -9.5, 53.5, 0.);
  e1->SetNoEdges();
  e1->SetFillStyle(0);
  e1->SetLineWidth(2);
  e1->Draw();

  TLine *l1 = new TLine(0.562751, 0.597285, 0.627594, 0.694569);
  l1->SetLineWidth(2);
  l1->SetLineStyle(2);
  l1->Draw();
}
