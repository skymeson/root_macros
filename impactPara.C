{
//=========Macro generated from canvas: cNew/cNew
//=========  (Wed Nov  9 15:15:26 2011) by ROOT version5.18/00b
   TCanvas *cNew = new TCanvas("cNew", "cNew",485,322,500,560);
   cNew->Range(0,0,1,1);
   cNew->SetFillColor(0);
   cNew->SetBorderMode(0);
   cNew->SetBorderSize(2);
   cNew->SetFrameBorderMode(0);
   TLine *line = new TLine(0.2,0.6,0.8,0.6);
   line->SetLineStyle(2);
   line->Draw();
   
   TEllipse *ellipse = new TEllipse(0.4,0.6,0.01,0.25,0,360,0);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.4,0.6,0.02,0.25,0,360,0);
   ellipse->Draw();
   line = new TLine(0.2,0.6,0.8,0.6);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.2,0.4,0.8,0.4);
   line->SetLineStyle(2);
   line->Draw();
   
   ellipse = new TEllipse(0.6,0.4,0.02,0.25,0,360,0);
   ellipse->Draw();
   line = new TLine(0.2,0.4,0.8,0.4);
   line->SetLineStyle(2);
   line->Draw();
   TArrow *arrow = new TArrow(0.5,0.4,0.5,0.6,0.03,"<|>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->Draw();
   arrow = new TArrow(0.7,0.55,0.775,0.55,0.03,"|>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->Draw();
   TMarker *marker = new TMarker(0.4,0.6,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.3);
   marker->Draw();
   marker = new TMarker(0.6,0.4,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.3);
   marker->Draw();
   TLatex *   tex = new TLatex(0.5153934,0.4745763,"b");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.7103763,0.5021186,"z");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1733871,0.7733051,"Projectile");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2540323,0.720339,"A");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6294185,0.2838983,"Projectile");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6761688,0.2245763,"B");
   tex->SetLineWidth(2);
   tex->Draw();
   cNew->Modified();
   cNew->cd();
   cNew->SetSelected(cNew);
   cNew->ToggleToolBar();
}
