
#include "Style.h";

int iColor =1;  //color vs. grey scale plot
int iSave  = 0;  //saves as "phaseDiagram#.eps" (change iVs to version number) 
int iVs    = 3;
int plotRHIC = 1;
int plotOthers = 1;

//main
void phaseDiagram3(){

  //set-up stuff
  //gROOT->Macro("~/root/init.C");
  setStyle();  
 
  //draw stuff
  drawCanvas();
  drawTransition();   //also draws critical point
  drawAxis();
  drawLabels();       //draws labels and arrows for phases
  drawExperiments();  //draws where RCIC, LHC etc. lie on curve
  drawNormal();       //draws normal matter

  //save pic
  if(iSave){
    char version[256];
    sprintf(version, "phaseDiagram%d.gif", iVs);
    cPhase->Update();
    cPhase->SaveAs(version);
  }
}//main

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
}//drawCanvas()

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
}//drawAxis()

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
}//drawTransition()

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
  //aUniv->Draw();
  TLatex *xUniv = new TLatex(-0.0217742, 0.582203, "Early Universe");
  xUniv->SetTextSize(0.04);
  xUniv->SetTextAngle(90);
  if(iColor)xUniv->SetTextColor(2);
  xUniv->Draw();
  TEllipse *eUniv = new TEllipse(0., 0.746898, 0.0203549, 0.123402, 90., 270., 180.);
  //eUniv->SetNoEdges();
  eUniv->SetFillColor(2);
  if(!iColor)eUniv->SetFillColor(1);
  eUniv->SetLineWidth(2);
  eUniv->SetLineColor(2);
  if(!iColor)eUniv->SetLineColor(1);
  eUniv->Draw();

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
  //TLatex *xCrit1 = new TLatex(0.135484, 0.535381, "Critical");
  TLatex *xCrit1 = new TLatex(0.0699597, 0.452754, "Critical");
  //TLatex *xCrit2 = new TLatex(0.156452, 0.483051, "Point");
  TLatex *xCrit2 = new TLatex(0.0856855, 0.403178, "Point");
  xCrit1->SetTextSize(0.04);
  xCrit2->SetTextSize(0.04);
  xCrit1->Draw();
  xCrit2->Draw();
  //TArrow *aCP = new TArrow(0.211492, 0.579449, 0.26129, 0.637288, 0.025, "|>");
  TArrow *aCP = new TArrow(0.145968, 0.499576, 0.266532, 0.637288, 0.025, "|>");
  aCP->Draw();
}//drawLabels()

void drawExperiments(){
  //TEllipse *eAGS = new TEllipse(0.410685, 0.532627, 0.035, 0.13, 0., 165., 335.);
  TEllipse *eAGS = new TEllipse(0.401128, 0.451416, 0.035, 0.13, 0., 165., 335.);
  eAGS->SetNoEdges();
  eAGS->SetFillStyle(0);
  eAGS->SetLineWidth(2);
  if(plotOthers){eAGS->Draw();}
  //TArrow *aAGS = new TArrow(0.391353, 0.578867, 0.390539, 0.577451, 0.025, "|>");
  TArrow *aAGS = new TArrow(0.384837, 0.498148, 0.376692, 0.482571, 0.025, "|>");
  if(plotOthers){
    aAGS->Draw();
    //TLatex *xAGS = new TLatex(0.470968, 0.656568, "AGS");
    TLatex *xAGS = new TLatex(0.47621, 0.595975, "AGS");
    xAGS->SetTextSize(0.04);
    xAGS->Draw();
  }  
  
  //TEllipse *eSPS = new TEllipse(0.314787, 0.584532, 0.035, 0.13, 0., 165., 335.);
  TEllipse *eSPS = new TEllipse(0.305847, 0.507839, 0.035, 0.13, 0., 165., 335.);
  eSPS->SetNoEdges();
  eSPS->SetFillStyle(0);
  eSPS->SetLineWidth(2);
  if(plotOthers){eSPS->Draw();}
  //TArrow *aSPS = new TArrow(0.299311, 0.619935, 0.296867, 0.612854, 0.025, "|>");
  TArrow *aSPS = new TArrow(0.286278, 0.547712, 0.279762, 0.536383, 0.025, "|>");
  if(plotOthers){
    aSPS->Draw();
    //TLatex *xSPS = new TLatex(0.359586,0.710566 , "SPS");
    TLatex *xSPS = new TLatex(0.373992, 0.656568, "SPS");
    xSPS->SetTextSize(0.04);
    xSPS->Draw();
  }
 
  TEllipse *eRHIC = new TEllipse(0.148622, 0.642593, 0.035, 0.13, 0., 165., 335.);
  eRHIC->SetNoEdges();
  eRHIC->SetFillStyle(0);
  eRHIC->SetLineWidth(2);
  if(plotRHIC){eRHIC->Draw();}
  TArrow *aRHIC = new TArrow(0.132331, 0.685076, 0.121742, 0.663834, 0.025, "|>");
  if(plotRHIC){
    aRHIC->Draw();
    TLatex *xRHIC = new TLatex(0.169556, 0.777, "RHIC");
    xRHIC->SetTextSize(0.04);
    xRHIC->Draw();
  }
  
  TEllipse *eLHC = new TEllipse(0.0435464, 0.636928, 0.035, 0.13, 0., 165., 335.);
  eLHC->SetNoEdges();
  eLHC->SetFillStyle(0);
  eLHC->SetLineWidth(2);
  if(plotOthers){ eLHC->Draw();}
  TArrow *aLHC = new TArrow(0.0305138, 0.685076, 0.0215539, 0.65817, 0.025, "|>");
  if(plotOthers){
    aLHC->Draw();
    TLatex *xLHC = new TLatex(0.0358871, 0.775, "LHC");
    xLHC->SetTextSize(0.04);
    xLHC->Draw();
  }
}//drawExperiments()

void drawNormal(){
  TEllipse *eNorm = new TEllipse(0.45, 0.0, 0.07, 0.03, 0., 180., 0.);
  eNorm->SetFillColor(1);
  eNorm->Draw();

  TLatex *xNorm = new TLatex(0.39, 0.05, "Nuclei");
  xNorm->SetTextSize(0.04);
  xNorm->Draw();
}//drawNormal
