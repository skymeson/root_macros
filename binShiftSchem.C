#include "Style.h";

int iColor = 0;

void binShiftSchem(){

  //set-up
  gROOT->Macro("init.C");
  setStyle();
  
  //make the plot
  TCanvas *cBinShift = new TCanvas("cBinShift", "cBinShift", 1000, 500);
  cBinShift->Divide(2,1);
  cBinShift->Draw();

  cBinShift->cd(1);
  histo1();
  box1();
  ellipse1();

  cBinShift->cd(2);
  histo2();
  box2();
  ellipse2();
}

void histo1(){
  int nBins = 10;
  int xMin = 0;
  int xMax = 10;

  TH1F *h1 = new TH1F("h1", "h1", nBins, xMin, xMax);
  for(int iBin = 0; iBin < nBins; iBin++){
    h1->SetBinContent(iBin+1, 2);
  }
  h1->SetFillColor(kGray);
  if(iColor)h1->SetFillColor(kBlue-4);
  h1->SetBarWidth(0.9);
  h1->SetTitle("");
  h1->SetXTitle("p_{T} [GeV/c]");
  h1->SetYTitle("");
  h1->Draw("bar0");

  TLatex *x1 = new TLatex(1.3, 3.4, "a)");
  x1->Draw();
}

void box1(){
  TBox *b1 = new TBox(6.0, 2.075, 6.9, 2.);
  b1->SetFillColor(1);
  b1->Draw();

  TBox *b2 = new TBox(7.0, 2., 7.9, 1.925);
  b2->SetFillColor(1);
  b2->Draw();

  TBox *b3 = new TBox(8.0, 2.075, 8.9, 2.);
  b3->SetFillColor(1);
  b3->Draw();
}

void ellipse1(){
  TEllipse *e1 = new TEllipse(6.9, 1.6, 0.35, 1.3, 25., 145., 350.);
  e1->SetNoEdges();
  e1->SetFillStyle(0);
  e1->SetLineWidth(2);
  if(iColor)e1->SetLineColor(2);
  e1->Draw();

  TArrow *a1 = new TArrow(6.73315, 2.40639, 6.64949, 2.29833, 0.02);
  a1->SetLineWidth(2);
  if(iColor)a1->SetLineColor(2);
  a1->Draw();

  TEllipse *e2 = new TEllipse(7.9, 1.6, 0.35, 1.3, 32.5, 155., 10.);
  e2->SetNoEdges();
  e2->SetFillStyle(0);
  e2->SetLineWidth(2);
  if(iColor)e2->SetLineColor(2);
  e2->Draw();

  TArrow *a2 = new TArrow(8.06685, 2.40639, 8.15051, 2.29833, 0.02);
  a2->SetLineWidth(2);
  if(iColor)a2->SetLineColor(2);
  a2->Draw();

}

void histo2(){
  int nBins = 10;
  int xMin = 0;
  int xMax = 10;
  double iBinCent;
  double iFxnVal;

  TF1 *f = new TF1("f", "5.1*exp(-x/2)", 0, 10);

  TH1F *h2 = new TH1F("h2", "h2", nBins, xMin, xMax);
  for(int iBin = 0; iBin < nBins; iBin++){
    iBinCent = h2->GetBinCenter(iBin+1);
    iFxnVal = f->Eval(iBinCent);
    h2->SetBinContent(iBin+1, iFxnVal);
  }
  h2->SetFillColor(kGray);
  if(iColor)h2->SetFillColor(kBlue-4);
  h2->SetBarWidth(0.9);
  h2->SetTitle("");
  h2->SetXTitle("p_{T} [GeV/c]");
  h2->SetYTitle("");
  h2->Draw("bar0");

  TLatex *x2 = new TLatex(1.3, 3.4, "b)");
  x2->Draw();
  
}

void box2(){
  TBox *b1 = new TBox(2.0, 1.45, 2.9, 1.525);
  b1->SetFillColor(1);
  b1->Draw();

  TBox *b2 = new TBox(3.0, 0.91, 3.9, 0.835);
  b2->SetFillColor(1);
  b2->Draw();

  TBox *b3 = new TBox(4.0, 0.53, 4.9, 0.605);
  b3->SetFillColor(1);
  b3->Draw();
}

void ellipse2(){
  TEllipse *e1 = new TEllipse(2.8, 0.6, 0.5, 1.3, 25., 125., 350.);
  e1->SetNoEdges();
  e1->SetFillStyle(0);
  e1->SetLineWidth(2);
  if(iColor)e1->SetLineColor(2);
  e1->Draw();

  TArrow *a1 = new TArrow(2.63342,1.66819, 2.60553, 1.64415, 0.02);
  a1->SetLineWidth(2);
  if(iColor)a1->SetLineColor(2);
  a1->Draw();

  TEllipse *e2 = new TEllipse(4.0, 0.44, 0.4, 1.3, 11.0, 147.5, 10.);
  e2->SetNoEdges();
  e2->SetFillStyle(0);
  e2->SetLineWidth(2);
  if(iColor)e2->SetLineColor(2);
  e2->Draw();

  TArrow *a2 = new TArrow(4.333, 0.754562, 4.333, 0.694455, 0.02);
  a2->SetLineWidth(2);
  if(iColor)a2->SetLineColor(2);
  a2->Draw();
}
