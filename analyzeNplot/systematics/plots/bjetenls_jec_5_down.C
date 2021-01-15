void bjetenls_jec_5_down()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:07 2021) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,500,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0);
   c->SetRightMargin(0);
   c->SetTopMargin(0);
   c->SetBottomMargin(0);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,0.85);
   p1->Draw();
   p1->cd();
   p1->Range(2.421687,-56.10721,7.240964,412.2862);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetGridx();
   p1->SetLeftMargin(0.12);
   p1->SetRightMargin(0.05);
   p1->SetTopMargin(0.01);
   p1->SetBottomMargin(0.12);
   p1->SetFrameBorderMode(0);
   p1->SetFrameBorderMode(0);
   
   TH1F *frame__41 = new TH1F("frame__41","t#bar{t}",20,3,7);
   frame__41->SetMinimum(0.1);
   frame__41->SetMaximum(407.6023);
   frame__41->SetEntries(505683);
   frame__41->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__41->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__41->SetMarkerColor(ci);
   frame__41->GetXaxis()->SetTitle("log(E)");
   frame__41->GetXaxis()->SetLabelFont(42);
   frame__41->GetXaxis()->SetLabelSize(0.035);
   frame__41->GetXaxis()->SetTitleSize(0.035);
   frame__41->GetXaxis()->SetTitleFont(42);
   frame__41->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__41->GetYaxis()->SetNoExponent();
   frame__41->GetYaxis()->SetLabelFont(42);
   frame__41->GetYaxis()->SetTitleSize(0.045);
   frame__41->GetYaxis()->SetTitleOffset(1.3);
   frame__41->GetYaxis()->SetTitleFont(42);
   frame__41->GetZaxis()->SetLabelFont(42);
   frame__41->GetZaxis()->SetLabelSize(0.035);
   frame__41->GetZaxis()->SetTitleSize(0.035);
   frame__41->GetZaxis()->SetTitleFont(42);
   frame__41->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_21 = new TH1F("mc_stack_21","mc",20,3,7);
   mc_stack_21->SetMinimum(-2.228506e-08);
   mc_stack_21->SetMaximum(329.2172);
   mc_stack_21->SetDirectory(0);
   mc_stack_21->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_21->SetLineColor(ci);
   mc_stack_21->GetXaxis()->SetLabelFont(42);
   mc_stack_21->GetXaxis()->SetLabelSize(0.035);
   mc_stack_21->GetXaxis()->SetTitleSize(0.035);
   mc_stack_21->GetXaxis()->SetTitleFont(42);
   mc_stack_21->GetYaxis()->SetLabelFont(42);
   mc_stack_21->GetYaxis()->SetLabelSize(0.035);
   mc_stack_21->GetYaxis()->SetTitleSize(0.035);
   mc_stack_21->GetYaxis()->SetTitleOffset(0);
   mc_stack_21->GetYaxis()->SetTitleFont(42);
   mc_stack_21->GetZaxis()->SetLabelFont(42);
   mc_stack_21->GetZaxis()->SetLabelSize(0.035);
   mc_stack_21->GetZaxis()->SetTitleSize(0.035);
   mc_stack_21->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_21);
   
   
   TH1F *bjetenls_jec_5_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_5_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(3,101.2463);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(4,217.5109);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(5,278.7653);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(6,300.5238);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(7,297.3942);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(8,264.0937);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(9,214.039);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(10,159.3301);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(11,109.3825);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(12,68.60779);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(13,40.13141);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(14,22.17596);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(15,11.43088);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(16,5.294135);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(17,2.312834);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(18,0.8811695);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(19,0.3141241);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(20,0.103049);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinContent(21,0.03778692);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(3,1.104311);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(4,1.48434);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(5,1.521218);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(6,1.430879);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(7,1.288592);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(8,1.099591);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(9,0.8967653);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(10,0.7008905);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(11,0.5256936);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(12,0.3773173);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(13,0.2609688);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(14,0.1756471);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(15,0.114193);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(16,0.07041219);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(17,0.04220302);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(18,0.02351599);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(19,0.01275606);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(20,0.006617174);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetBinError(21,0.003501975);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetEntries(498744);
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_5_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_5_down_Diboson_stack_2 = new TH1F("bjetenls_jec_5_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(3,0.1613697);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(4,0.2638173);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(5,0.2392075);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(6,0.2700586);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(7,0.2250041);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(8,0.2159268);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(9,0.1355395);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(10,0.118015);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(11,0.1112403);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(12,0.07991661);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(13,0.04876402);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(14,0.02060537);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(15,0.02593271);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(16,0.01259032);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(17,0.01085468);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(18,0.006534776);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(19,0.001953915);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(20,0.00308558);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinContent(21,0.001012981);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(3,0.0418123);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(4,0.05096733);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(5,0.04349529);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(6,0.04185488);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(7,0.03411121);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(8,0.0309917);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(9,0.02179973);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(10,0.01807771);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(11,0.01617324);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(12,0.01268888);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(13,0.008969489);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(14,0.005232431);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(15,0.005323473);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(16,0.003310319);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(17,0.002921508);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(18,0.001943757);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(19,0.0009802719);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(20,0.001100533);
   bjetenls_jec_5_down_Diboson_stack_2->SetBinError(21,0.0005759205);
   bjetenls_jec_5_down_Diboson_stack_2->SetEntries(543);
   bjetenls_jec_5_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_5_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_5_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_5_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_5_down_DY_stack_3 = new TH1F("bjetenls_jec_5_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(3,0.6432432);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(4,0.3707235);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(5,0.6759067);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(6,0.8765952);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(7,0.8684353);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(8,0.3996447);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(10,0.1301331);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(11,0.1505319);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(12,0.1734012);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(13,0.06319688);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(14,0.07643843);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(15,0.0466024);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(16,0.04332853);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(17,0.0006871011);
   bjetenls_jec_5_down_DY_stack_3->SetBinContent(18,0.03043483);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(3,0.6432431);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(4,0.3707236);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(5,0.4782516);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(6,0.5070345);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(7,0.4344965);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(8,0.2832464);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(10,0.1301331);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(11,0.1101323);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(12,0.1226472);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(13,0.06319688);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(14,0.07643843);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(15,0.0466024);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(16,0.04332853);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(17,0.0006871011);
   bjetenls_jec_5_down_DY_stack_3->SetBinError(18,0.03043483);
   bjetenls_jec_5_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_5_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_5_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_5_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_5_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_5_down_W_stack_4 = new TH1F("bjetenls_jec_5_down_W_stack_4","W",20,3,7);
   bjetenls_jec_5_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_5_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_5_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_5_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_5_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_5_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(3,4.513326);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(4,9.060288);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(5,12.15001);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(6,11.86978);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(7,12.13043);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(8,10.97313);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(9,7.756046);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(10,6.349175);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(11,4.385731);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(12,2.929973);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(13,1.709299);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(14,0.9852936);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(15,0.597212);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(16,0.300113);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(17,0.1482889);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(18,0.06343656);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(19,0.03436079);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(20,0.01041346);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinContent(21,0.01080405);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(3,0.4198252);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(4,0.5431442);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(5,0.5740935);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(6,0.5124361);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(7,0.4699058);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(8,0.4051656);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(9,0.3072284);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(10,0.252827);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(11,0.1899189);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(12,0.141255);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(13,0.09749021);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(14,0.0660611);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(15,0.04717331);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(16,0.0300337);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(17,0.01928806);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(18,0.01114053);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(19,0.007627538);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(20,0.003631505);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetBinError(21,0.003448242);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetEntries(6372);
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_5_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_5_down_fx3041[21] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   0};
   Double_t Graph_from_bjetenls_jec_5_down_fy3041[21] = {
   0,
   0,
   92.1516,
   198.0308,
   255.8996,
   284.4695,
   282.2269,
   252.5987,
   202.9851,
   149.7142,
   101.229,
   62.35009,
   36.58208,
   20.59502,
   10.39393,
   4.784098,
   2.072661,
   0.837125,
   0.2793507,
   0.08634941,
   0};
   Double_t Graph_from_bjetenls_jec_5_down_felx3041[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjetenls_jec_5_down_fely3041[21] = {
   0,
   0,
   9.582309,
   14.06075,
   15.99686,
   16.86622,
   16.79961,
   15.89335,
   14.24728,
   12.22236,
   10.04483,
   7.875129,
   6.02065,
   4.501125,
   3.171477,
   2.109162,
   1.31951,
   0.7276393,
   0.278405,
   0.08634941,
   0};
   Double_t Graph_from_bjetenls_jec_5_down_fehx3041[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjetenls_jec_5_down_fehy3041[21] = {
   1.841055,
   1.841055,
   10.63454,
   15.09637,
   15.99686,
   16.86622,
   16.79961,
   15.89335,
   14.24728,
   13.26332,
   11.09466,
   8.938633,
   7.103562,
   5.611599,
   4.326758,
   3.336842,
   2.659855,
   2.235976,
   1.989254,
   1.889254,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_5_down_fx3041,Graph_from_bjetenls_jec_5_down_fy3041,Graph_from_bjetenls_jec_5_down_felx3041,Graph_from_bjetenls_jec_5_down_fehx3041,Graph_from_bjetenls_jec_5_down_fely3041,Graph_from_bjetenls_jec_5_down_fehy3041);
   grae->SetName("Graph_from_bjetenls_jec_5_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_5_down3041 = new TH1F("Graph_Graph_from_bjetenls_jec_5_down3041","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_5_down3041->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_5_down3041->SetMaximum(331.4693);
   Graph_Graph_from_bjetenls_jec_5_down3041->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_5_down3041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_5_down3041->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_down3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_5_down3041);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.45,0.815,0.98,0.925,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_5_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_5_down_t#bar{t}","t#bar{t}","f");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_5_down_Diboson","Diboson","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_5_down_DY","DY","f");

   ci = TColor::GetColor("#33ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_5_down_W","W","f");

   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_5_down_Single top","Single top","f");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.95,"#bf{CMS} #it{Preliminary} 35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(43);
   tex->SetTextSize(16);
   tex->SetLineWidth(2);
   tex->Draw();
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0,0.85,1,1);
   p2->Draw();
   p2->cd();
   p2->Range(2.421687,0.4485106,7.240964,1.597447);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetGridx();
   p2->SetGridy();
   p2->SetLeftMargin(0.12);
   p2->SetRightMargin(0.05);
   p2->SetTopMargin(0.05);
   p2->SetBottomMargin(0.01);
   p2->SetFrameBorderMode(0);
   p2->SetFrameBorderMode(0);
   
   TH1F *ratioframe__42 = new TH1F("ratioframe__42","t#bar{t}",20,3,7);
   ratioframe__42->SetMinimum(0.46);
   ratioframe__42->SetMaximum(1.54);
   ratioframe__42->SetEntries(505683);

   ci = TColor::GetColor("#cc0000");
   ratioframe__42->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__42->SetMarkerColor(ci);
   ratioframe__42->GetXaxis()->SetTitle("log(E)");
   ratioframe__42->GetXaxis()->SetLabelFont(42);
   ratioframe__42->GetXaxis()->SetLabelSize(0);
   ratioframe__42->GetXaxis()->SetTitleSize(0);
   ratioframe__42->GetXaxis()->SetTitleOffset(0);
   ratioframe__42->GetXaxis()->SetTitleFont(42);
   ratioframe__42->GetYaxis()->SetTitle("Data/MC");
   ratioframe__42->GetYaxis()->SetNoExponent();
   ratioframe__42->GetYaxis()->SetNdivisions(5);
   ratioframe__42->GetYaxis()->SetLabelFont(42);
   ratioframe__42->GetYaxis()->SetLabelSize(0.18);
   ratioframe__42->GetYaxis()->SetTitleSize(0.2);
   ratioframe__42->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__42->GetYaxis()->SetTitleFont(42);
   ratioframe__42->GetZaxis()->SetLabelFont(42);
   ratioframe__42->GetZaxis()->SetLabelSize(0.035);
   ratioframe__42->GetZaxis()->SetTitleSize(0.035);
   ratioframe__42->GetZaxis()->SetTitleFont(42);
   ratioframe__42->Draw("");
   
   Double_t Graph_from_ratio_fx3042[20] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9};
   Double_t Graph_from_ratio_fy3042[20] = {
   0,
   0,
   0.8647515,
   0.8715924,
   0.8768777,
   0.9072825,
   0.908598,
   0.9162669,
   0.914633,
   0.9022874,
   0.8877406,
   0.8684936,
   0.8719845,
   0.8854912,
   0.8589574,
   0.846718,
   0.8382295,
   0.852838,
   0.7971453,
   0.7408914};
   Double_t Graph_from_ratio_felx3042[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fely3042[20] = {
   0,
   0,
   0.0189176,
   0.01154396,
   0.00931419,
   0.008336623,
   0.007584614,
   0.00729143,
   0.007278552,
   0.007599293,
   0.008220442,
   0.009321807,
   0.01100786,
   0.01372746,
   0.01688774,
   0.02270478,
   0.02969432,
   0.05044228,
   0.06329289,
   0.09435909};
   Double_t Graph_from_ratio_fehx3042[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fehy3042[20] = {
   0,
   0,
   0.0189176,
   0.01154396,
   0.00931419,
   0.008336623,
   0.007584614,
   0.00729143,
   0.007278552,
   0.007599293,
   0.008220442,
   0.009321807,
   0.01100786,
   0.01372746,
   0.01688774,
   0.02270478,
   0.02969432,
   0.05044228,
   0.06329289,
   0.09435909};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3042,Graph_from_ratio_fy3042,Graph_from_ratio_felx3042,Graph_from_ratio_fehx3042,Graph_from_ratio_fely3042,Graph_from_ratio_fehy3042);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3042 = new TH1F("Graph_Graph_from_ratio3042","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3042->SetMinimum(0);
   Graph_Graph_from_ratio3042->SetMaximum(1.015914);
   Graph_Graph_from_ratio3042->SetDirectory(0);
   Graph_Graph_from_ratio3042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3042->SetLineColor(ci);
   Graph_Graph_from_ratio3042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3042);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
