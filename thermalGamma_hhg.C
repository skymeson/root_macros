#include "Style.h";

void thermalGamma_hhg(){

  //set up
  gROOT->Macro("init.C");
  setStyle();
 
  TCanvas *cThermGam_qgp = new TCanvas("cThermGam_qgp","cThermGam_qgp", 1000, 450);
  cThermGam_qgp->Divide(3,1);
  
  cThermGam_qgp->cd(1);
  diagram1(); 

  cThermGam_qgp->cd(2);
  diagram2(); 

  cThermGam_qgp->cd(3);
  diagram3(); 
}
 
void diagram1(){

  TLine *aQ1 = new TLine(0.2, 0.9, 0.5, 0.7);
  aQ1->SetLineWidth(2);
  aQ1->SetLineStyle(2);
  aQ1->Draw();

  TLine *aQ2 = new TLine(0.5, 0.7, 0.5, 0.3);
  aQ2->SetLineWidth(2);
  aQ2->SetLineStyle(2);
  aQ2->Draw();

  TLine *aQ3 = new TLine(0.5, 0.3, 0.8, 0.1);
  aQ3->SetLineWidth(2);
  aQ3->SetLineStyle(2);
  aQ3->Draw();

  TLine *lG1 = new TLine(0.5, 0.3, 0.2, 0.1);
  lG1->SetLineWidth(2);
  lG1->Draw();

  TCurlyLine *lG2 = new TCurlyLine(0.5, 0.7, 0.8, 0.9);
  lG2->SetLineWidth(2);
  lG2->SetWavy();
  lG2->Draw();

  TMarker *m1 = new TMarker(0.5, 0.7, 20);
  m1->SetMarkerSize(1.25);
  m1->Draw();

  TMarker *m2 = new TMarker(0.5, 0.3, 20);
  m2->SetMarkerSize(1.25);
  m2->Draw();

  TLatex *lQ1 = new TLatex(0.141118, 0.906229, "#pi^{#pm}");
  lQ1->SetTextSize(0.07);
  lQ1->Draw();

  TLatex *lQ2 = new TLatex(0.822591, 0.0793381, "#pi^{#pm}");
  lQ2->SetTextSize(0.07);
  lQ2->Draw();

  TLatex *lG = new TLatex(0.134709, 0.0865171, "#rho^{0}");
  lG->SetTextSize(0.07);
  lG->Draw();

  TLatex *lGam = new TLatex(0.817594, 0.903873, "#gamma");
  lGam->SetTextSize(0.07);
  lGam->Draw();
}//end diagram1

void diagram2(){

  TLine *aQ1 = new TLine(0.2, 0.9, 0.5, 0.7);
  aQ1->SetLineWidth(2);
  aQ1->SetLineStyle(2);
  aQ1->Draw();

  TLine *aQ2 = new TLine(0.5, 0.7, 0.5, 0.3);
  aQ2->SetLineWidth(2);
  aQ2->SetLineStyle(2);
  aQ2->Draw();

  TLine *aQ3 = new TLine(0.5, 0.3, 0.8, 0.1);
  aQ3->SetLineWidth(2);
  aQ3->Draw();

  TLine *lG1 = new TLine(0.5, 0.3, 0.2, 0.1);
  lG1->SetLineWidth(2);
  lG1->SetLineStyle(2);
  lG1->Draw();

  TCurlyLine *lG2 = new TCurlyLine(0.5, 0.7, 0.8, 0.9);
  lG2->SetLineWidth(2);
  lG2->SetWavy();
  lG2->Draw();

  TMarker *m1 = new TMarker(0.5, 0.7, 20);
  m1->SetMarkerSize(1.25);
  m1->Draw();

  TMarker *m2 = new TMarker(0.5, 0.3, 20);
  m2->SetMarkerSize(1.25);
  m2->Draw();

  TLatex *lQ1 = new TLatex(0.141118, 0.906229, "#pi^{+}");
  lQ1->SetTextSize(0.07);
  lQ1->Draw();

  TLatex *lQ2 = new TLatex(0.822591, 0.0793381, "#rho^{0}");
  lQ2->SetTextSize(0.07);
  lQ2->Draw();

  TLatex *lG = new TLatex(0.131505, 0.079263, "#pi^{-}");
  lG->SetTextSize(0.07);
  lG->Draw();

  TLatex *lGam = new TLatex(0.817594, 0.903873, "#gamma");
  lGam->SetTextSize(0.07);
  lGam->Draw();
}//end diagram2

void diagram3(){

  TLine *l1 = new TLine(0.2, 0.5, 0.5, 0.5);
  l1->Draw();

  TLine *l2 = new TLine(0.5, 0.5, 0.8, 0.6);
  l2->SetLineWidth(2);
  l2->SetLineStyle(2);
  l2->Draw();

  TLine *l3 = new TLine(0.5, 0.5, 0.8, 0.4);
  l3->SetLineWidth(2);
  l3->SetLineStyle(2);
  l3->Draw();

  TCurlyLine *l4 = new TCurlyLine(0.63048, 0.545074, 0.70828,0.662008 );
  l4->SetLineWidth(2);
  l4->SetWavy();
  l4->Draw();

  TMarker *m1 = new TMarker(0.5, 0.5, 20);
  m1->SetMarkerSize(1.25);
  m1->Draw();

  TLatex *xRho = new TLatex(0.147526, 0.497257, "#rho^{0}");
  xRho->SetTextSize(0.07);
  xRho->Draw();
  
  TLatex *xPi1 = new TLatex(0.807613, 0.369426, "#pi^{+}");
  xPi1->SetTextSize(0.07);
  xPi1->Draw();
  
  TLatex *xPi2 = new TLatex(0.810818, 0.599139, "#pi^{-}");
  xPi2->SetTextSize(0.07);
  xPi2->Draw();

  TLatex *xGam = new TLatex(0.70828, 0.693442, "#gamma");
  xGam->SetTextSize(0.07);
  xGam->Draw();
}//end diagram3
