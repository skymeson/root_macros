#include "Style.h";

void promptGamma_qgp(){

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

  TArrow *aQ1 = new TArrow(0.2, 0.9, 0.5, 0.7, 0.01);
  aQ1->SetLineWidth(2);
  aQ1->Draw("-|>-");

  TArrow *aQ2 = new TArrow(0.5, 0.7, 0.5, 0.3, 0.01);
  aQ2->SetLineWidth(2);
  aQ2->Draw("-|>-");

  TArrow *aQ3 = new TArrow(0.5, 0.3, 0.8, 0.1, 0.01);
  aQ3->SetLineWidth(2);
  aQ3->Draw("-|>-");

  TCurlyLine *lG1 = new TCurlyLine(0.5, 0.3, 0.2, 0.1);
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

  TLatex *lQ1 = new TLatex(0.141118, 0.906229, "q");
  lQ1->SetTextSize(0.07);
  lQ1->Draw();

  TLatex *lQ2 = new TLatex(0.822591, 0.0793381, "q");
  lQ2->SetTextSize(0.07);
  lQ2->Draw();

  TLatex *lG = new TLatex(0.152978, 0.0765399, "g");
  lG->SetTextSize(0.07);
  lG->Draw();

  TLatex *lGam = new TLatex(0.817594, 0.903873, "#gamma");
  lGam->SetTextSize(0.07);
  lGam->Draw();
}//end diagram1

void diagram2(){

  TArrow *aQ1 = new TArrow(0.2, 0.9, 0.5, 0.7, 0.01);
  aQ1->SetLineWidth(2);
  aQ1->Draw("-|>-");

  TArrow *aQ2 = new TArrow(0.5, 0.7, 0.5, 0.3, 0.01);
  aQ2->SetLineWidth(2);
  aQ2->Draw("-|>-");

  TCurlyLine *aQ3 = new TCurlyLine(0.5, 0.3, 0.8, 0.1);
  aQ3->SetLineWidth(2);
  aQ3->Draw();

  TArrow *lG1 = new TArrow(0.5, 0.3, 0.2, 0.1, 0.01);
  lG1->SetLineWidth(2);
  lG1->Draw("-|>-");

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

  TLatex *lQ1 = new TLatex(0.141118, 0.906229, "q");
  lQ1->SetTextSize(0.07);
  lQ1->Draw();

  TLatex *lQ2 = new TLatex(0.822591, 0.0793381, "g");
  lQ2->SetTextSize(0.07);
  lQ2->Draw();

  TLatex *lG = new TLatex(0.152978, 0.0765399, "#bar{q}");
  lG->SetTextSize(0.07);
  lG->Draw();

  TLatex *lGam = new TLatex(0.817594, 0.903873, "#gamma");
  lGam->SetTextSize(0.07);
  lGam->Draw();
}//end diagram2

void diagram3(){
  TArrow *aQ1 = new TArrow(0.2, 0.9, 0.5, 0.7, 0.01);
  aQ1->SetLineWidth(2);
  aQ1->Draw("-|>-");

  TCurlyLine *aQ2 = new TCurlyLine(0.5, 0.7, 0.5, 0.3);
  aQ2->SetLineWidth(2);
  aQ2->Draw();

  TArrow *aQ3 = new TArrow(0.5, 0.3, 0.8, 0.1, 0.01);
  aQ3->SetLineWidth(2);
  aQ3->Draw("-|>-");

  TArrow *lG1 = new TArrow(0.5, 0.3, 0.2, 0.1, 0.01);
  lG1->SetLineWidth(2);
  lG1->Draw("-|>-");

  TArrow *lG2 = new TArrow(0.5, 0.7, 0.8, 0.9, 0.01);
  lG2->SetLineWidth(2);
  lG2->Draw("-|>-");

  TMarker *m1 = new TMarker(0.5, 0.7, 20);
  m1->SetMarkerSize(1.25);
  m1->Draw();

  TMarker *m2 = new TMarker(0.5, 0.3, 20);
  m2->SetMarkerSize(1.25);
  m2->Draw();

  TLatex *lQ1 = new TLatex(0.141118, 0.906229, "q");
  lQ1->SetTextSize(0.07);
  lQ1->Draw();

  TLatex *lQ2 = new TLatex(0.822591, 0.0793381, "q");
  lQ2->SetTextSize(0.07);
  lQ2->Draw();

  TLatex *lG = new TLatex(0.152978, 0.0765399, "q");
  lG->SetTextSize(0.07);
  lG->Draw();

  TLatex *lGam = new TLatex(0.817594, 0.903873, "q");
  lGam->SetTextSize(0.07);
  lGam->Draw();

  TCurlyLine *aGam = new TCurlyLine(0.705437, 0.838538, 0.842861, 0.741803);
  aGam->SetLineWidth(2);
  aGam->SetWavy();
  aGam->Draw();

  TLatex *lGam2 = new TLatex(0.862013, 0.717326, "#gamma");
  lGam2->SetTextSize(0.07);
  lGam2->Draw();

  TMarker *m3 = new TMarker(0.708768, 0.837649, 20);
  m3->SetMarkerSize(1.25);
  m3->Draw();

}//end diagram3
