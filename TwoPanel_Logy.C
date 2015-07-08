TCanvas *Canvas;
TPad *pad;
TFile *file;

void TwoPanel_Logy()
{
  setup();
    
  pad->cd(1);

  pad->cd(2);

  gPad->RedrawAxis();
  
  drawLabels1();
  pad->cd(1); drawLabels2();
  pad->cd(2); drawLabels2();
  pad->cd(1); gPad->SetLogy(1); gPad->Update();
  pad->cd(2); gPad->SetLogy(1); gPad->Update();
  
}  

void drawLabels1()
{
  pad->cd(1);
  Double_t xmin = gPad->GetFrame()->GetX1();
  Double_t xmax = gPad->GetFrame()->GetX2();
  Double_t ymin = gPad->GetFrame()->GetY1();
  Double_t ymax = gPad->GetFrame()->GetY2();
  Double_t dx = xmax-xmin;
  Double_t dy = ymax-ymin;

  TMarker *m;
  TLatex *latex;
  
  latex = new TLatex(xmin+dx*0.05,pow(10,log10(ymax)-log10(ymax/ymin)*0.075),"Some Text Here");
  latex->SetTextAlign(12); latex->SetTextSize(0.050); latex->Draw();

  TLatex *latex = new TLatex(xmin+0.95*dx,pow(10,log10(ymax)-log10(ymax/ymin)*0.075),"Some other text goes here");
  latex->SetTextAlign(32); latex->SetTextSize(0.045);
  latex->Draw();
}

void drawLabels2()
{
  //pad->cd(2);
  Double_t xmin = gPad->GetFrame()->GetX1();
  Double_t xmax = gPad->GetFrame()->GetX2();
  Double_t ymin = gPad->GetFrame()->GetY1();
  Double_t ymax = gPad->GetFrame()->GetY2();
  Double_t dx = xmax-xmin;
  Double_t dy = ymax-ymin;

  TMarker *m;
  TLatex *latex;
  
  latex = new TLatex(xmin+dx*0.05,pow(10,log10(ymax)-log10(ymax/ymin)*0.075),"More useless info");
  latex->SetTextAlign(12); latex->SetTextSize(0.050); latex->Draw();

}


void setup()
{
  gROOT->SetStyle("Plain");
  gStyle->SetOptDate(0);
  Canvas = new TCanvas("Canvas","Spectra",0,0,800,500);

  Canvas->cd();
  TGaxis *ga1 = new TGaxis(0.2*5./8.+0.001,0.2,0.522+0.002,0.2,2.75,10.25,505,"S");
  ga1->SetTickSize(0.00);
  ga1->Draw();
  TGaxis *ga2 = new TGaxis(0.533,0.2,1-0.1*5./8.-0.005,0.2,2.75,6.25,505,"S");
  ga2->SetTickSize(0.00);
  ga2->Draw();

  TGaxis *ga3 = new TGaxis(0.2*5./8.+0.001,0.2,0.2*5./8.+0.001,0.892,5e-9,2e-1,505,"SLG");
  ga3->SetTickSize(0.00);
  ga3->SetLabelOffset(0.04);
  ga3->SetTitle("#frac{1}{2#pip_{T}}#frac{d^{2}N}{dp_{T}dy}");
  ga3->SetTitleOffset(1.2);
  ga3->Draw();

  TLatex *latex = new TLatex(0.53,0.10,"Transverse Momentum, p_{T} (GeV/c)");
  latex->SetTextSize(0.04);
  latex->SetTextAlign(22);
  latex->Draw();

  pad = new TPad("pad","",0.2*5./8.,0.2,1.0-0.1*5./8.,0.9);
  pad->Draw();
  pad->cd();
  gPad->Divide(2,1,0.001,0.001);

  pad->cd(1);
  gPad->SetGrid(0,0);
  gPad->SetLeftMargin(0.001);  gPad->SetRightMargin(0.01);
  gPad->SetTopMargin(0.01);   gPad->SetBottomMargin(0.0001);
  gPad->SetTicks();
  drawFrame(2.75,5e-9,10.25,2e-1,"Transverse Momentum, p_{T} (GeV/c)","#frac{1}{2#pip_{T}}#frac{d^{2}N}{dp_{T}dy}");
  //  gPad->SetLogy(1);
  pad->cd(2);
  gPad->SetGrid(0,0);
  gPad->SetLeftMargin(0.001);  gPad->SetRightMargin(0.01);
  gPad->SetTopMargin(0.01);   gPad->SetBottomMargin(0.0001);
  gPad->SetTicks();
  drawFrame(2.75,5e-9,6.25,2e-1,"Transverse Momentum, p_{T} (GeV/c)","#frac{1}{2#pip_{T}} #frac{d^{2}N}{dp_{T}dy}");
  //  gPad->SetLogy(1);
}

void drawFrame(Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax,
	       TString xTitle,TString yTitle="")
{
  TH1F *hFrame = Canvas->DrawFrame(xmin,ymin,xmax,ymax);
  hFrame->GetXaxis()->SetTitle(xTitle);
  hFrame->GetXaxis()->SetTitleOffset(1.6);
  hFrame->GetXaxis()->SetNdivisions(505);

  hFrame->GetYaxis()->SetTitle(yTitle);
  hFrame->GetYaxis()->SetTitleOffset(1.8);
  hFrame->GetYaxis()->SetNdivisions(505);
}
