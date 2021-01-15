void bjetenls_jec_4_up()
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
   p1->Range(2.421687,-56.10375,7.240964,412.2608);
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
   
   TH1F *frame__63 = new TH1F("frame__63","t#bar{t}",20,3,7);
   frame__63->SetMinimum(0.1);
   frame__63->SetMaximum(407.5772);
   frame__63->SetEntries(505565);
   frame__63->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__63->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__63->SetMarkerColor(ci);
   frame__63->GetXaxis()->SetTitle("log(E)");
   frame__63->GetXaxis()->SetLabelFont(42);
   frame__63->GetXaxis()->SetLabelSize(0.035);
   frame__63->GetXaxis()->SetTitleSize(0.035);
   frame__63->GetXaxis()->SetTitleFont(42);
   frame__63->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__63->GetYaxis()->SetNoExponent();
   frame__63->GetYaxis()->SetLabelFont(42);
   frame__63->GetYaxis()->SetTitleSize(0.045);
   frame__63->GetYaxis()->SetTitleOffset(1.3);
   frame__63->GetYaxis()->SetTitleFont(42);
   frame__63->GetZaxis()->SetLabelFont(42);
   frame__63->GetZaxis()->SetLabelSize(0.035);
   frame__63->GetZaxis()->SetTitleSize(0.035);
   frame__63->GetZaxis()->SetTitleFont(42);
   frame__63->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_32 = new TH1F("mc_stack_32","mc",20,3,7);
   mc_stack_32->SetMinimum(-2.635718e-08);
   mc_stack_32->SetMaximum(329.1969);
   mc_stack_32->SetDirectory(0);
   mc_stack_32->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_32->SetLineColor(ci);
   mc_stack_32->GetXaxis()->SetLabelFont(42);
   mc_stack_32->GetXaxis()->SetLabelSize(0.035);
   mc_stack_32->GetXaxis()->SetTitleSize(0.035);
   mc_stack_32->GetXaxis()->SetTitleFont(42);
   mc_stack_32->GetYaxis()->SetLabelFont(42);
   mc_stack_32->GetYaxis()->SetLabelSize(0.035);
   mc_stack_32->GetYaxis()->SetTitleSize(0.035);
   mc_stack_32->GetYaxis()->SetTitleOffset(0);
   mc_stack_32->GetYaxis()->SetTitleFont(42);
   mc_stack_32->GetZaxis()->SetLabelFont(42);
   mc_stack_32->GetZaxis()->SetLabelSize(0.035);
   mc_stack_32->GetZaxis()->SetTitleSize(0.035);
   mc_stack_32->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_32);
   
   
   TH1F *bjetenls_jec_4_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_4_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(3,101.1699);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(4,217.5891);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(5,278.8058);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(6,300.4692);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(7,297.3542);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(8,264.0316);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(9,214.0269);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(10,159.25);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(11,109.3709);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(12,68.59655);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(13,40.09381);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(14,22.15816);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(15,11.42615);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(16,5.295966);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(17,2.310175);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(18,0.8806276);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(19,0.3141306);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(20,0.1030491);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinContent(21,0.03778659);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(3,1.103866);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(4,1.484611);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(5,1.521339);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(6,1.430779);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(7,1.288504);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(8,1.099476);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(9,0.8967378);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(10,0.7007221);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(11,0.5256804);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(12,0.3772679);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(13,0.2608355);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(14,0.1755745);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(15,0.1141728);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(16,0.07042401);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(17,0.04217578);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(18,0.02350985);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(19,0.01275632);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(20,0.006617181);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetBinError(21,0.003501947);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetEntries(498628);
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_4_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_4_up_Diboson_stack_2 = new TH1F("bjetenls_jec_4_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(3,0.1614189);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(4,0.2638963);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(5,0.2460293);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(6,0.2633853);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(7,0.2250602);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(8,0.2159797);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(9,0.1360512);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(10,0.120233);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(11,0.1085903);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(12,0.0799298);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(13,0.04877151);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(14,0.02060762);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(15,0.02593446);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(16,0.01259077);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(17,0.01085485);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(18,0.006534913);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(19,0.001953882);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(20,0.003085576);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinContent(21,0.001012952);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(3,0.04182504);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(4,0.05098259);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(5,0.04402883);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(6,0.04131906);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(7,0.03411975);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(8,0.03099923);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(9,0.02181044);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(10,0.01827146);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(11,0.01595421);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(12,0.01269097);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(13,0.008970878);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(14,0.005232996);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(15,0.005323835);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(16,0.003310431);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(17,0.002921553);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(18,0.001943805);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(19,0.0009802546);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(20,0.001100537);
   bjetenls_jec_4_up_Diboson_stack_2->SetBinError(21,0.0005759053);
   bjetenls_jec_4_up_Diboson_stack_2->SetEntries(543);
   bjetenls_jec_4_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_4_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_4_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_4_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_4_up_DY_stack_3 = new TH1F("bjetenls_jec_4_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(3,0.6434355);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(4,0.3708345);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(5,0.6761088);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(6,0.8768639);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(7,0.8686513);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(8,0.3997246);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(10,0.1301591);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(11,0.1505373);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(12,0.1734069);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(13,0.0632095);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(14,0.07643843);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(15,0.04660687);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(16,0.04332997);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(17,0.0006871011);
   bjetenls_jec_4_up_DY_stack_3->SetBinContent(18,0.03043737);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(3,0.6434356);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(4,0.3708345);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(5,0.4783946);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(6,0.5071902);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(7,0.4346042);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(8,0.283303);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(10,0.1301591);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(11,0.1101352);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(12,0.1226511);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(13,0.0632095);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(14,0.07643843);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(15,0.04660687);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(16,0.04332997);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(17,0.0006871011);
   bjetenls_jec_4_up_DY_stack_3->SetBinError(18,0.03043737);
   bjetenls_jec_4_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_4_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_4_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_4_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_4_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_4_up_W_stack_4 = new TH1F("bjetenls_jec_4_up_W_stack_4","W",20,3,7);
   bjetenls_jec_4_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_4_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_4_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_4_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_4_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_4_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(3,4.514693);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(4,9.063006);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(5,12.15365);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(6,11.91145);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(7,12.09491);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(8,10.96203);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(9,7.780438);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(10,6.324451);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(11,4.384448);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(12,2.924339);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(13,1.709514);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(14,0.9853919);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(15,0.5972739);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(16,0.3001285);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(17,0.1482952);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(18,0.06343836);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(19,0.03436088);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(20,0.0104134);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinContent(21,0.01080402);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(3,0.4199525);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(4,0.5433071);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(5,0.5742654);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(6,0.5132963);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(7,0.469232);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(8,0.4050297);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(9,0.3077153);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(10,0.2522408);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(11,0.1898755);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(12,0.1411456);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(13,0.09750246);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(14,0.06606768);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(15,0.0471783);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(16,0.03003523);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(17,0.01928887);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(18,0.01114087);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(19,0.007627551);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(20,0.003631493);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetBinError(21,0.003448235);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetEntries(6370);
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_4_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_4_up_fx3063[21] = {
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
   Double_t Graph_from_bjetenls_jec_4_up_fy3063[21] = {
   0,
   0,
   92.3632,
   197.7844,
   255.656,
   284.4713,
   282.2008,
   252.4689,
   202.9684,
   149.8702,
   101.2869,
   62.3519,
   36.6845,
   20.5751,
   10.4251,
   4.78191,
   2.082352,
   0.839919,
   0.2792013,
   0.08628802,
   0};
   Double_t Graph_from_bjetenls_jec_4_up_felx3063[21] = {
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
   Double_t Graph_from_bjetenls_jec_4_up_fely3063[21] = {
   0,
   0,
   9.593345,
   14.05199,
   15.98925,
   16.86628,
   16.79883,
   15.88927,
   14.2467,
   12.22873,
   10.04771,
   7.875244,
   6.02915,
   4.498911,
   3.176388,
   2.108644,
   1.32316,
   0.7294395,
   0.2782591,
   0.08628802,
   0};
   Double_t Graph_from_bjetenls_jec_4_up_fehx3063[21] = {
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
   Double_t Graph_from_bjetenls_jec_4_up_fehy3063[21] = {
   1.841055,
   1.841055,
   10.64551,
   15.08763,
   15.98925,
   16.86628,
   16.79883,
   15.88927,
   14.2467,
   13.26968,
   11.09752,
   8.938747,
   7.111947,
   5.609439,
   4.331439,
   3.336374,
   2.662761,
   2.237093,
   1.98918,
   1.88922,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_4_up_fx3063,Graph_from_bjetenls_jec_4_up_fy3063,Graph_from_bjetenls_jec_4_up_felx3063,Graph_from_bjetenls_jec_4_up_fehx3063,Graph_from_bjetenls_jec_4_up_fely3063,Graph_from_bjetenls_jec_4_up_fehy3063);
   grae->SetName("Graph_from_bjetenls_jec_4_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_4_up3063 = new TH1F("Graph_Graph_from_bjetenls_jec_4_up3063","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_4_up3063->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_4_up3063->SetMaximum(331.4713);
   Graph_Graph_from_bjetenls_jec_4_up3063->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_4_up3063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_4_up3063->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_up3063->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_4_up3063);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_4_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_4_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_4_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_4_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_4_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_4_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__64 = new TH1F("ratioframe__64","t#bar{t}",20,3,7);
   ratioframe__64->SetMinimum(0.46);
   ratioframe__64->SetMaximum(1.54);
   ratioframe__64->SetEntries(505565);

   ci = TColor::GetColor("#cc0000");
   ratioframe__64->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__64->SetMarkerColor(ci);
   ratioframe__64->GetXaxis()->SetTitle("log(E)");
   ratioframe__64->GetXaxis()->SetLabelFont(42);
   ratioframe__64->GetXaxis()->SetLabelSize(0);
   ratioframe__64->GetXaxis()->SetTitleSize(0);
   ratioframe__64->GetXaxis()->SetTitleOffset(0);
   ratioframe__64->GetXaxis()->SetTitleFont(42);
   ratioframe__64->GetYaxis()->SetTitle("Data/MC");
   ratioframe__64->GetYaxis()->SetNoExponent();
   ratioframe__64->GetYaxis()->SetNdivisions(5);
   ratioframe__64->GetYaxis()->SetLabelFont(42);
   ratioframe__64->GetYaxis()->SetLabelSize(0.18);
   ratioframe__64->GetYaxis()->SetTitleSize(0.2);
   ratioframe__64->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__64->GetYaxis()->SetTitleFont(42);
   ratioframe__64->GetZaxis()->SetLabelFont(42);
   ratioframe__64->GetZaxis()->SetLabelSize(0.035);
   ratioframe__64->GetZaxis()->SetTitleSize(0.035);
   ratioframe__64->GetZaxis()->SetTitleFont(42);
   ratioframe__64->Draw("");
   
   Double_t Graph_from_ratio_fx3064[20] = {
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
   Double_t Graph_from_ratio_fy3064[20] = {
   0,
   0,
   0.8673462,
   0.8701974,
   0.8758892,
   0.907344,
   0.9087339,
   0.916039,
   0.914505,
   0.9037865,
   0.8883687,
   0.8687226,
   0.8752055,
   0.8853086,
   0.861866,
   0.8460541,
   0.8430532,
   0.8561531,
   0.7967042,
   0.7403643};
   Double_t Graph_from_ratio_felx3064[20] = {
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
   Double_t Graph_from_ratio_fely3064[20] = {
   0,
   0,
   0.01896166,
   0.0115295,
   0.009306895,
   0.008337886,
   0.007586144,
   0.007291288,
   0.007278051,
   0.007609482,
   0.008224502,
   0.009324382,
   0.01103914,
   0.01373042,
   0.01692933,
   0.02268887,
   0.02982198,
   0.05060251,
   0.06325797,
   0.09429185};
   Double_t Graph_from_ratio_fehx3064[20] = {
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
   Double_t Graph_from_ratio_fehy3064[20] = {
   0,
   0,
   0.01896166,
   0.0115295,
   0.009306895,
   0.008337886,
   0.007586144,
   0.007291288,
   0.007278051,
   0.007609482,
   0.008224502,
   0.009324382,
   0.01103914,
   0.01373042,
   0.01692933,
   0.02268887,
   0.02982198,
   0.05060251,
   0.06325797,
   0.09429185};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3064,Graph_from_ratio_fy3064,Graph_from_ratio_felx3064,Graph_from_ratio_fehx3064,Graph_from_ratio_fely3064,Graph_from_ratio_fehy3064);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3064 = new TH1F("Graph_Graph_from_ratio3064","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3064->SetMinimum(0);
   Graph_Graph_from_ratio3064->SetMaximum(1.015663);
   Graph_Graph_from_ratio3064->SetDirectory(0);
   Graph_Graph_from_ratio3064->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3064->SetLineColor(ci);
   Graph_Graph_from_ratio3064->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3064->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3064->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3064->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3064->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3064->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3064->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3064->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3064->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3064->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3064->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3064->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3064->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3064);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
