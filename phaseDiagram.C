
#include "Style.h";

int iColor = 1;  //color vs. grey scale plot
int iSave  = 0;  //saves as "phaseDiagram#.eps" (change "#" to version number) 

void phaseDiagram(){

  //set-up stuff
  gROOT->Macro("init.C");
  setStyle();  
 
  //draw stuff
  drawCanvas();
  drawTransition();   //also draws critical point
  drawAxis();
  drawLabels();       //draws labels and arrows for phases
  drawExperiments();  //draws where RCIC, LHC etc. lie on curve
  drawNormal();       //draws normal matter

  //save stuff
  if(iSave){
    cPhase->Update();
    cPhase->SaveAs("phaseDiagram5.eps");
  }
}

void drawCanvas()
{
  cPhase = new TCanvas("cPhase","cPhase",0,0,500,500);
  cPhase->SetLeftMargin(0.2);
  cPhase->SetBottomMargin(0.2);
  
  cPhase->Range(-0.2,-0.2,1.1,1.1);
  TLatex *latex = new TLatex(1.0,-0.1,"#mu_{B}");
  latex->SetTextAlign(31);
  latex->Draw();
  latex = new TLatex(-0.1,1.0,"T");
  latex->SetTextAlign(31);
  latex->SetTextAngle(90);
  latex->Draw();
}

void drawAxis()
{
  TArrow *arr = new TArrow(0,0,1,0,0.03,"|>");
  arr->SetFillColor(1);
  arr->SetLineWidth(2);
  arr->Draw();
  
  arr = new TArrow(0,0,0,1,0.03,"|>");
  arr->SetFillColor(1);
  arr->SetLineWidth(2);
  arr->Draw();
}
void drawTransition(){
  TBox *bTrans = new TBox(0., 0., 0.97, 0.97);
  if(iColor)bTrans->SetFillColor(kYellow-9);
  if (! iColor)bTrans->SetFillStyle(4017);
  bTrans->Draw();

  TEllipse *eTrans1 = new TEllipse(0., 0., 0.9, 0.7, 70., 90., 0.);
  eTrans1->SetNoEdges();
  eTrans1->SetFillColor(17);
  eTrans1->SetLineWidth(2);
  eTrans1->SetLineStyle(7);
  eTrans1->Draw();

  TEllipse *eTrans2 = new TEllipse(0., 0., 0.9, 0.7, 0., 70., 0.);
  eTrans2->SetNoEdges();
  eTrans2->SetFillColor(17);
  eTrans2->SetLineWidth(2);
  eTrans2->Draw();

  TMarker *mCrit = new TMarker(0.29, 0.6625, 20);
  mCrit->SetMarkerSize(1.4);
  mCrit->Draw();
}

void drawLabels(){

  // "Hadron Gas"
  TLatex *xHad1 = new TLatex(0.11, 0.13, "Hadron");
  TLatex *xHad2 = new TLatex(0.15, 0.085, "Gas");
  xHad1->SetTextSize(0.04);
  xHad2->SetTextSize(0.04);
  if(iColor)xHad1->SetTextColor(4);
  if(iColor)xHad2->SetTextColor(4);
  xHad1->Draw();
  xHad2->Draw();

  //"Quark Gloun Plasma"
  TLatex *xQGP1 = new TLatex(0.55, 0.8, "Quark Gluon");
  TLatex *xQGP2 = new TLatex(0.62, 0.755, "Plasma");
  xQGP1->SetTextSize(0.04);
  xQGP2->SetTextSize(0.04);
  if(iColor)xQGP1->SetTextColor(4);
  if(iColor)xQGP2->SetTextColor(4);
  xQGP1->Draw();
  xQGP2->Draw();

  //"Early Universe"
  TArrow *aUniv = new TArrow(.025, 0.95,.025, 0.45,0.03,"|>");
  aUniv->SetLineWidth(2);
  if(iColor)aUniv->SetLineColor(2);
  if(iColor)aUniv->SetFillColor(2);
  aUniv->Draw();
  TLatex *xUniv = new TLatex(0.075, 0.58, "Early Universe");
  xUniv->SetTextSize(0.04);
  xUniv->SetTextAngle(90);
  if(iColor)xUniv->SetTextColor(2);
  xUniv->Draw();
  
  //"Neutron Stars"
  TArrow *aNeut = new TArrow(.65, .05 ,.99, 0.075,0.03,"|>");
  aNeut->SetLineWidth(2);
  if(iColor)aNeut->SetLineColor(8);
  if(iColor)aNeut->SetFillColor(8);
  aNeut->Draw();
  TLatex *xNeut = new TLatex(0.735, 0.08, "Neutron Stars");
  xNeut->SetTextSize(0.04);
  xNeut->SetTextAngle(5);
  if(iColor)xNeut->SetTextColor(8);
  xNeut->Draw();

  //"Critical Point"
  TLatex *xCrit1 = new TLatex(0.2, 0.585, "Critical");
  TLatex *xCrit2 = new TLatex(0.225, 0.54, "Point");
  xCrit1->SetTextSize(0.04);
  xCrit2->SetTextSize(0.04);
  xCrit1->Draw();
  xCrit2->Draw();
}

void drawExperiments(){
  TEllipse *eRHIC = new TEllipse(0.4, 0.55, 0.035, 0.13, 0., 165., 335.);
  //  eRHIC->SetFillColor(0);
  eRHIC->SetNoEdges();
  eRHIC->SetFillStyle(0);
  eRHIC->SetLineWidth(2);
  eRHIC->Draw();
  TLine *lGarbage = new TLine(0.383507,0.595395,0.401148,0.546523);
  lGarbage->SetLineColor(17);
  lGarbage->SetLineWidth(3);
  lGarbage->Draw();
  TArrow *aRHIC = new TArrow(0.385543,0.600282,0.382829,0.595395, 0.025, "|>");
  aRHIC->Draw();
  TLatex *xRHIC = new TLatex(0.417432, 0.679342, "RHIC");
  xRHIC->SetTextSize(0.04);
  xRHIC->Draw();
}

void drawNormal(){
  TEllipse *eNorm = new TEllipse(0.45, 0.0, 0.07, 0.03, 0., 180., 0.);
  eNorm->SetFillColor(1);
  eNorm->Draw();

  TLatex *xNorm = new TLatex(0.39, 0.05, "Nuclei");
  xNorm->SetTextSize(0.04);
  xNorm->Draw();











}
