void setStyle()
{
  gStyle->SetErrorX(0);
  gROOT->ForceStyle();

  gROOT->SetStyle("Plain");
  gStyle->SetPalette(1);
  gStyle->SetTextFont(132);
  gStyle->SetNdivisions(505,"X");
  gStyle->SetNdivisions(505,"Y");
  gStyle->SetTitleFont(132,"X");
  gStyle->SetLabelFont(132,"X");
  gStyle->SetTitleFont(132,"Y");
  gStyle->SetLabelFont(132,"Y");
  gStyle->SetTitleSize(0.05,"X");
  gStyle->SetTitleOffset(1.8,"X");
  gStyle->SetLabelSize(0.05,"X");
  gStyle->SetTitleSize(0.05,"Y");
  gStyle->SetTitleOffset(1.8,"Y");
  gStyle->SetLabelSize(0.05,"Y");
  gStyle->SetOptStat(0);
  gStyle->SetOptDate(0);
  
  gStyle->SetPadLeftMargin(0.2);
  gStyle->SetPadBottomMargin(0.2);
  gStyle->SetPadTickX(1);
  gStyle->SetPadTickY(1);
  
  gStyle->SetErrorX(0);
  //gROOT->ForceStyle();
}

TH1F *drawFrame(Float_t xlow, Float_t ylow, Float_t xhigh, Float_t yhigh, TString xTitle="", TString yTitle="")
{
  TH1F *hFrame = gPad->DrawFrame(xlow,ylow,xhigh,yhigh);
  hFrame->GetXaxis()->SetTitle(xTitle);
  hFrame->GetYaxis()->SetTitle(yTitle);

  return hFrame;
}

TH1F *newTH1F(TString hName, TString hTitle,
              Int_t nBinsX, Float_t xlow, Float_t xhigh,
              Int_t fColor=1, Int_t fSumw2=1,
              Int_t fMarkerStyle=7, Float_t fMarkerSize=1)
{
  TH1F *hDummy = new TH1F(hName,hTitle,nBinsX,xlow,xhigh);
  hDummy->SetLineColor(fColor);
  //hDummy->SetLineWidth(2);
  hDummy->SetMarkerColor(fColor);
  hDummy->SetMarkerStyle(fMarkerStyle);
  hDummy->SetMarkerSize(fMarkerSize);

  if(fSumw2) { hDummy->Sumw2(); }
  else       { hDummy->SetFillColor(fColor);}
  
  hDummy->SetStats(0);
  
  return hDummy;
}

TProfile *newTProfile(TString hName, TString hTitle,
		      Int_t nBinsX, Float_t xlow, Float_t xhigh,
		      TString opt="s",
		      Int_t fColor=1, Int_t fSumw2=1,
		      Int_t fMarkerStyle=7, Float_t fMarkerSize=1)
{
  TProfile *hDummy = new TProfile(hName,hTitle,nBinsX,xlow,xhigh,opt);
  hDummy->SetLineColor(fColor);
  //hDummy->SetLineWidth(2);
  hDummy->SetMarkerColor(fColor);
  hDummy->SetMarkerStyle(fMarkerStyle);
  hDummy->SetMarkerSize(fMarkerSize);
  
  hDummy->SetStats(0);
  
  return hDummy;
}

TH2F *newTH2F(TString fName, TString fTitle, 
	      Int_t fNBinsX, Double_t fNXlow, Double_t fNXhigh,
	      Int_t fNBinsY, Double_t fNYlow, Double_t fNYhigh,
	      Int_t fColor=1, Int_t fMarkerStyle=7, Int_t fMarkerSize=1)
{
  TH2F *hDummy = new TH2F(fName,fTitle,fNBinsX,fNXlow,fNXhigh,
			  fNBinsY,fNYlow,fNYhigh);

  hDummy->SetLineColor(fColor);
  hDummy->SetMarkerColor(fColor);
  hDummy->SetMarkerStyle(fMarkerStyle);
  hDummy->SetMarkerSize(fMarkerSize);

  hDummy->SetStats(0);
  
  return hDummy;
}

void newTLatex(Float_t x, Float_t y, TString fText, Int_t fColor=1, 
	       Int_t fAlign=21, Float_t fSize, Float_t fAngle=0)
{
  TLatex *l = new TLatex(x,y,fText);
  
  l->SetTextColor(fColor);
  l->SetTextAlign(fAlign);
  l->SetTextSize(fSize);
  l->SetTextAngle(fAngle);

  l->Draw();  
}

void set_color_style(){
    const Int_t NRGBs = 5;
    const Int_t NCont = 255;

    Double_t stops[NRGBs] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
    Double_t red[NRGBs]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
    Double_t green[NRGBs] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
    Double_t blue[NRGBs]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
    TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
    gStyle->SetNumberContours(NCont);
}


