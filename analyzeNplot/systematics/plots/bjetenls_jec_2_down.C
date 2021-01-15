void bjetenls_jec_2_down()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:08 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-56.21727,7.240964,413.0933);
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
   
   TH1F *frame__77 = new TH1F("frame__77","t#bar{t}",20,3,7);
   frame__77->SetMinimum(0.1);
   frame__77->SetMaximum(408.4002);
   frame__77->SetEntries(504041);
   frame__77->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__77->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__77->SetMarkerColor(ci);
   frame__77->GetXaxis()->SetTitle("log(E)");
   frame__77->GetXaxis()->SetLabelFont(42);
   frame__77->GetXaxis()->SetLabelSize(0.035);
   frame__77->GetXaxis()->SetTitleSize(0.035);
   frame__77->GetXaxis()->SetTitleFont(42);
   frame__77->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__77->GetYaxis()->SetNoExponent();
   frame__77->GetYaxis()->SetLabelFont(42);
   frame__77->GetYaxis()->SetTitleSize(0.045);
   frame__77->GetYaxis()->SetTitleOffset(1.3);
   frame__77->GetYaxis()->SetTitleFont(42);
   frame__77->GetZaxis()->SetLabelFont(42);
   frame__77->GetZaxis()->SetLabelSize(0.035);
   frame__77->GetZaxis()->SetTitleSize(0.035);
   frame__77->GetZaxis()->SetTitleFont(42);
   frame__77->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_39 = new TH1F("mc_stack_39","mc",20,3,7);
   mc_stack_39->SetMinimum(-1.069898e-08);
   mc_stack_39->SetMaximum(329.8617);
   mc_stack_39->SetDirectory(0);
   mc_stack_39->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_39->SetLineColor(ci);
   mc_stack_39->GetXaxis()->SetLabelFont(42);
   mc_stack_39->GetXaxis()->SetLabelSize(0.035);
   mc_stack_39->GetXaxis()->SetTitleSize(0.035);
   mc_stack_39->GetXaxis()->SetTitleFont(42);
   mc_stack_39->GetYaxis()->SetLabelFont(42);
   mc_stack_39->GetYaxis()->SetLabelSize(0.035);
   mc_stack_39->GetYaxis()->SetTitleSize(0.035);
   mc_stack_39->GetYaxis()->SetTitleOffset(0);
   mc_stack_39->GetYaxis()->SetTitleFont(42);
   mc_stack_39->GetZaxis()->SetLabelFont(42);
   mc_stack_39->GetZaxis()->SetLabelSize(0.035);
   mc_stack_39->GetZaxis()->SetTitleSize(0.035);
   mc_stack_39->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_39);
   
   
   TH1F *bjetenls_jec_2_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_2_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(3,102.2762);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(4,218.3797);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(5,278.7938);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(6,300.9785);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(7,296.3671);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(8,263.4571);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(9,212.9835);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(10,158.7259);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(11,108.6794);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(12,68.17578);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(13,39.84188);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(14,22.03247);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(15,11.31709);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(16,5.273793);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(17,2.282501);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(18,0.8740904);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(19,0.3097108);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(20,0.1019007);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinContent(21,0.03785517);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(3,1.11016);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(4,1.487192);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(5,1.521209);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(6,1.431996);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(7,1.286262);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(8,1.098273);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(9,0.8944737);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(10,0.6995739);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(11,0.5239927);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(12,0.3761099);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(13,0.2600312);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(14,0.1751074);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(15,0.1136169);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(16,0.07028344);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(17,0.04192876);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(18,0.02341809);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(19,0.01267467);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(20,0.006584529);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetBinError(21,0.003508335);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetEntries(497142);
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_2_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_2_down_Diboson_stack_2 = new TH1F("bjetenls_jec_2_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(3,0.1621984);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(4,0.2835803);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(5,0.2345152);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(6,0.2516032);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(7,0.2208337);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(8,0.2109524);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(9,0.1365544);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(10,0.1207077);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(11,0.1063402);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(12,0.08192628);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(13,0.04835398);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(14,0.02057676);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(15,0.02552628);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(16,0.01120134);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(17,0.0108775);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(18,0.006548539);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(19,0.001957263);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(20,0.003091326);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinContent(21,0.001014545);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(3,0.04202723);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(4,0.05285739);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(5,0.04264968);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(6,0.04047482);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(7,0.03387353);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(8,0.0305639);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(9,0.02189091);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(10,0.01834279);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(11,0.01579268);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(12,0.01284969);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(13,0.008904639);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(14,0.005227853);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(15,0.005258218);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(16,0.003161524);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(17,0.002927621);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(18,0.001947857);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(19,0.0009819525);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(20,0.00110262);
   bjetenls_jec_2_down_Diboson_stack_2->SetBinError(21,0.0005768078);
   bjetenls_jec_2_down_Diboson_stack_2->SetEntries(538);
   bjetenls_jec_2_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_2_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_2_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_2_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_2_down_DY_stack_3 = new TH1F("bjetenls_jec_2_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(3,0.6466464);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(4,0.3724163);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(5,0.6793866);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(6,0.880894);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(7,0.8717162);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(8,0.4009838);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(10,0.1305403);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(11,0.1509048);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(12,0.1738118);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(13,0.0633942);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(14,0.07658397);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(15,0.04672343);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(16,0.04343562);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(17,0.0006884059);
   bjetenls_jec_2_down_DY_stack_3->SetBinContent(18,0.03050547);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(3,0.6466464);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(4,0.3724163);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(5,0.4807141);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(6,0.5095254);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(7,0.4361341);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(8,0.2841959);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(10,0.1305403);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(11,0.110403);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(12,0.1229372);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(13,0.0633942);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(14,0.07658397);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(15,0.04672343);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(16,0.04343562);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(17,0.000688406);
   bjetenls_jec_2_down_DY_stack_3->SetBinError(18,0.03050547);
   bjetenls_jec_2_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_2_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_2_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_2_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_2_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_2_down_W_stack_4 = new TH1F("bjetenls_jec_2_down_W_stack_4","W",20,3,7);
   bjetenls_jec_2_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_2_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_2_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_2_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_2_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_2_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(3,4.469782);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(4,9.010015);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(5,12.00297);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(6,12.043);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(7,11.98311);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(8,10.85056);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(9,7.778133);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(10,6.265655);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(11,4.364106);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(12,2.892799);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(13,1.726925);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(14,0.977434);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(15,0.5937887);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(16,0.2972083);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(17,0.1486103);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(18,0.06356987);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(19,0.03442594);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(20,0.01043233);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinContent(21,0.01082317);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(3,0.4179064);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(4,0.541532);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(5,0.5711601);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(6,0.5165609);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(7,0.4665706);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(8,0.4029985);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(9,0.3076649);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(10,0.2510416);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(11,0.1896162);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(12,0.1404537);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(13,0.0980334);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(14,0.06582632);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(15,0.04704225);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(16,0.02988778);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(17,0.01932995);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(18,0.01116408);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(19,0.007641984);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(20,0.003638153);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetBinError(21,0.003454352);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetEntries(6337);
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_2_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_2_down_fx3077[21] = {
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
   Double_t Graph_from_bjetenls_jec_2_down_fy3077[21] = {
   0,
   0,
   93.22457,
   198.4578,
   255.4404,
   284.6871,
   282.3866,
   251.9968,
   202.5056,
   149.1068,
   100.9974,
   61.96322,
   36.34078,
   20.57406,
   10.35273,
   4.73159,
   2.056815,
   0.8247235,
   0.2768759,
   0.08539382,
   0};
   Double_t Graph_from_bjetenls_jec_2_down_felx3077[21] = {
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
   Double_t Graph_from_bjetenls_jec_2_down_fely3077[21] = {
   0,
   0,
   9.638136,
   14.07593,
   15.9825,
   16.87267,
   16.80436,
   15.87441,
   14.23045,
   12.19748,
   10.03329,
   7.850526,
   6.000576,
   4.498795,
   3.164975,
   2.096681,
   1.313522,
   0.7196069,
   0.2759857,
   0.08539382,
   0};
   Double_t Graph_from_bjetenls_jec_2_down_fehx3077[21] = {
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
   Double_t Graph_from_bjetenls_jec_2_down_fehy3077[21] = {
   1.841055,
   1.841055,
   10.69006,
   15.11151,
   15.9825,
   16.87267,
   16.80436,
   15.87441,
   14.23045,
   13.23853,
   11.08318,
   8.914228,
   7.083763,
   5.609326,
   4.320563,
   3.325593,
   2.655094,
   2.231004,
   1.988031,
   1.888733,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_2_down_fx3077,Graph_from_bjetenls_jec_2_down_fy3077,Graph_from_bjetenls_jec_2_down_felx3077,Graph_from_bjetenls_jec_2_down_fehx3077,Graph_from_bjetenls_jec_2_down_fely3077,Graph_from_bjetenls_jec_2_down_fehy3077);
   grae->SetName("Graph_from_bjetenls_jec_2_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_2_down3077 = new TH1F("Graph_Graph_from_bjetenls_jec_2_down3077","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_2_down3077->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_2_down3077->SetMaximum(331.7158);
   Graph_Graph_from_bjetenls_jec_2_down3077->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_2_down3077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_2_down3077->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_down3077->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_2_down3077);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_2_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_2_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_2_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_2_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_2_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_2_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__78 = new TH1F("ratioframe__78","t#bar{t}",20,3,7);
   ratioframe__78->SetMinimum(0.46);
   ratioframe__78->SetMaximum(1.54);
   ratioframe__78->SetEntries(504041);

   ci = TColor::GetColor("#cc0000");
   ratioframe__78->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__78->SetMarkerColor(ci);
   ratioframe__78->GetXaxis()->SetTitle("log(E)");
   ratioframe__78->GetXaxis()->SetLabelFont(42);
   ratioframe__78->GetXaxis()->SetLabelSize(0);
   ratioframe__78->GetXaxis()->SetTitleSize(0);
   ratioframe__78->GetXaxis()->SetTitleOffset(0);
   ratioframe__78->GetXaxis()->SetTitleFont(42);
   ratioframe__78->GetYaxis()->SetTitle("Data/MC");
   ratioframe__78->GetYaxis()->SetNoExponent();
   ratioframe__78->GetYaxis()->SetNdivisions(5);
   ratioframe__78->GetYaxis()->SetLabelFont(42);
   ratioframe__78->GetYaxis()->SetLabelSize(0.18);
   ratioframe__78->GetYaxis()->SetTitleSize(0.2);
   ratioframe__78->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__78->GetYaxis()->SetTitleFont(42);
   ratioframe__78->GetZaxis()->SetLabelFont(42);
   ratioframe__78->GetZaxis()->SetLabelSize(0.035);
   ratioframe__78->GetZaxis()->SetTitleSize(0.035);
   ratioframe__78->GetZaxis()->SetTitleFont(42);
   ratioframe__78->Draw("");
   
   Double_t Graph_from_ratio_fx3078[20] = {
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
   Double_t Graph_from_ratio_fy3078[20] = {
   0,
   0,
   0.8667635,
   0.8702547,
   0.8756635,
   0.9062024,
   0.9125649,
   0.9166203,
   0.9167371,
   0.9023498,
   0.8914103,
   0.8687531,
   0.871888,
   0.8903795,
   0.8639424,
   0.8410761,
   0.842033,
   0.8461182,
   0.8000019,
   0.7398252};
   Double_t Graph_from_ratio_felx3078[20] = {
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
   Double_t Graph_from_ratio_fely3078[20] = {
   0,
   0,
   0.01885498,
   0.01150792,
   0.009307254,
   0.008324602,
   0.007620626,
   0.007303151,
   0.007306582,
   0.00761468,
   0.008269406,
   0.009354214,
   0.01104735,
   0.01382749,
   0.01703906,
   0.02265612,
   0.02996761,
   0.05040748,
   0.06387604,
   0.09479921};
   Double_t Graph_from_ratio_fehx3078[20] = {
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
   Double_t Graph_from_ratio_fehy3078[20] = {
   0,
   0,
   0.01885498,
   0.01150792,
   0.009307254,
   0.008324602,
   0.007620626,
   0.007303151,
   0.007306582,
   0.00761468,
   0.008269406,
   0.009354214,
   0.01104735,
   0.01382749,
   0.01703906,
   0.02265612,
   0.02996761,
   0.05040748,
   0.06387604,
   0.09479921};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3078,Graph_from_ratio_fy3078,Graph_from_ratio_felx3078,Graph_from_ratio_fehx3078,Graph_from_ratio_fely3078,Graph_from_ratio_fehy3078);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3078 = new TH1F("Graph_Graph_from_ratio3078","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3078->SetMinimum(0);
   Graph_Graph_from_ratio3078->SetMaximum(1.016448);
   Graph_Graph_from_ratio3078->SetDirectory(0);
   Graph_Graph_from_ratio3078->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3078->SetLineColor(ci);
   Graph_Graph_from_ratio3078->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3078->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3078->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3078->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3078->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3078->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3078->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3078->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3078->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3078->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3078->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3078->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3078->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3078);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
