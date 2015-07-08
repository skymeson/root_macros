{
//=========Macro generated from canvas: cNew2/cNew2
//=========  (Tue Nov  8 14:07:58 2011) by ROOT version5.18/00b
   TCanvas *cNew2 = new TCanvas("cNew2", "cNew2",369,311,500,550);
   cNew2->ToggleEventStatus();
   cNew2->Range(0,0,1,1);
   cNew2->SetFillColor(0);
   cNew2->SetBorderMode(0);
   cNew2->SetBorderSize(2);
   cNew2->SetFrameBorderMode(0);
   
   TEllipse *ellipse = new TEllipse(0.5,0.7,0.25,0.0333,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.5,0.7,0.25,0.0222,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.5,0.7,0.25,0.0111,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.35,0.35,0.1,0.0333,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.35,0.35,0.1,0.0222,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.35,0.35,0.1,0.0111,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.65,0.35,0.1,0.0333,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.65,0.35,0.1,0.0222,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.65,0.35,0.1,0.0111,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.27,0.7,0.025,0.025,0,360,0);
   ellipse->SetFillColor(1);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.73,0.7,0.025,0.025,0,360,0);
   ellipse->SetFillColor(1);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.27,0.35,0.025,0.025,0,360,0);
   ellipse->SetFillColor(1);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.73,0.35,0.025,0.025,0,360,0);
   ellipse->SetFillColor(1);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.43,0.35,0.025,0.025,0,360,0);
   ellipse->SetFillColor(1);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.57,0.35,0.025,0.025,0,360,0);
   ellipse->SetFillColor(1);
   ellipse->Draw();
   TLatex *   tex = new TLatex(0.2298387,0.7457627,"q");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.7399194,0.7436441,"#bar{q}");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.453629,0.3961864,"#bar{q}");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.7399194,0.3961864,"#bar{q}");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5241935,0.3983051,"q");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.233871,0.4004237,"q");
   tex->SetLineWidth(2);
   tex->Draw();
   cNew2->Modified();
   cNew2->cd();
   cNew2->SetSelected(cNew2);
   cNew2->ToggleToolBar();
}
