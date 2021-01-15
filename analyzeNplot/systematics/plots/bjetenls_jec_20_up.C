void bjetenls_jec_20_up()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:06 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-56.11327,7.240964,412.3306);
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
   
   TH1F *frame__1 = new TH1F("frame__1","t#bar{t}",20,3,7);
   frame__1->SetMinimum(0.1);
   frame__1->SetMaximum(407.6462);
   frame__1->SetEntries(505954);
   frame__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__1->SetMarkerColor(ci);
   frame__1->GetXaxis()->SetTitle("log(E)");
   frame__1->GetXaxis()->SetLabelFont(42);
   frame__1->GetXaxis()->SetLabelSize(0.035);
   frame__1->GetXaxis()->SetTitleSize(0.035);
   frame__1->GetXaxis()->SetTitleFont(42);
   frame__1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__1->GetYaxis()->SetNoExponent();
   frame__1->GetYaxis()->SetLabelFont(42);
   frame__1->GetYaxis()->SetTitleSize(0.045);
   frame__1->GetYaxis()->SetTitleOffset(1.3);
   frame__1->GetYaxis()->SetTitleFont(42);
   frame__1->GetZaxis()->SetLabelFont(42);
   frame__1->GetZaxis()->SetLabelSize(0.035);
   frame__1->GetZaxis()->SetTitleSize(0.035);
   frame__1->GetZaxis()->SetTitleFont(42);
   frame__1->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_1 = new TH1F("mc_stack_1","mc",20,3,7);
   mc_stack_1->SetMinimum(-4.473775e-08);
   mc_stack_1->SetMaximum(329.2527);
   mc_stack_1->SetDirectory(0);
   mc_stack_1->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_1->SetLineColor(ci);
   mc_stack_1->GetXaxis()->SetLabelFont(42);
   mc_stack_1->GetXaxis()->SetLabelSize(0.035);
   mc_stack_1->GetXaxis()->SetTitleSize(0.035);
   mc_stack_1->GetXaxis()->SetTitleFont(42);
   mc_stack_1->GetYaxis()->SetLabelFont(42);
   mc_stack_1->GetYaxis()->SetLabelSize(0.035);
   mc_stack_1->GetYaxis()->SetTitleSize(0.035);
   mc_stack_1->GetYaxis()->SetTitleOffset(0);
   mc_stack_1->GetYaxis()->SetTitleFont(42);
   mc_stack_1->GetZaxis()->SetLabelFont(42);
   mc_stack_1->GetZaxis()->SetLabelSize(0.035);
   mc_stack_1->GetZaxis()->SetTitleSize(0.035);
   mc_stack_1->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_1);
   
   
   TH1F *bjetenls_jec_20_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_20_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(3,101.2069);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(4,217.4121);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(5,278.9293);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(6,300.5302);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(7,297.7579);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(8,264.2563);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(9,214.3877);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(10,159.2803);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(11,109.5196);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(12,68.60294);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(13,40.11479);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(14,22.17332);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(15,11.42467);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(16,5.301724);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(17,2.312003);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(18,0.8836986);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(19,0.312672);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(20,0.1044704);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinContent(21,0.03811171);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(3,1.104164);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(4,1.483836);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(5,1.521614);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(6,1.430813);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(7,1.289385);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(8,1.09991);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(9,0.8974824);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(10,0.7007727);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(11,0.5260488);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(12,0.3772866);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(13,0.2609139);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(14,0.1756378);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(15,0.114155);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(16,0.07045898);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(17,0.04218757);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(18,0.02355185);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(19,0.0127287);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(20,0.006667778);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetBinError(21,0.003517174);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetEntries(499010);
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_20_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_20_up_Diboson_stack_2 = new TH1F("bjetenls_jec_20_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(3,0.1737562);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(4,0.2633819);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(5,0.2471603);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(6,0.2629234);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(7,0.2138898);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(8,0.226807);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(9,0.1360927);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(10,0.1177569);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(11,0.1086131);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(12,0.08168936);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(13,0.04702209);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(14,0.0206001);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(15,0.02592828);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(16,0.0125842);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(17,0.01084861);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(18,0.006529892);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(19,0.001952754);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(20,0.003083279);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinContent(21,0.001012201);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(3,0.04362073);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(4,0.05088293);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(5,0.0442177);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(6,0.04124574);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(7,0.03319471);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(8,0.03193433);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(9,0.02181689);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(10,0.01810338);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(11,0.01595683);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(12,0.01281249);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(13,0.008798577);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(14,0.005231029);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(15,0.005322617);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(16,0.003308741);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(17,0.002919858);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(18,0.001942294);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(19,0.0009796827);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(20,0.001099719);
   bjetenls_jec_20_up_Diboson_stack_2->SetBinError(21,0.0005754806);
   bjetenls_jec_20_up_Diboson_stack_2->SetEntries(543);
   bjetenls_jec_20_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_20_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_20_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_20_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_20_up_DY_stack_3 = new TH1F("bjetenls_jec_20_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(3,0.6419123);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(4,0.3701541);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(5,0.6748447);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(6,0.8754086);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(7,0.8677719);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(8,0.3993369);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(10,0.1300602);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(11,0.1504471);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(12,0.1733057);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(13,0.06319788);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(14,0.07638838);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(15,0.04660201);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(16,0.04332275);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(17,0.0006868229);
   bjetenls_jec_20_up_DY_stack_3->SetBinContent(18,0.03040797);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(3,0.6419124);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(4,0.3701541);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(5,0.4775);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(6,0.5063476);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(7,0.4341652);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(8,0.283028);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(10,0.1300602);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(11,0.1100692);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(12,0.1225795);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(13,0.06319788);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(14,0.07638838);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(15,0.04660201);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(16,0.04332275);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(17,0.000686823);
   bjetenls_jec_20_up_DY_stack_3->SetBinError(18,0.03040796);
   bjetenls_jec_20_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_20_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_20_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_20_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_20_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_20_up_W_stack_4 = new TH1F("bjetenls_jec_20_up_W_stack_4","W",20,3,7);
   bjetenls_jec_20_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_20_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_20_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_20_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_20_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_20_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(3,4.522947);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(4,9.122825);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(5,12.11557);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(6,11.90553);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(7,12.14912);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(8,10.98187);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(9,7.763069);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(10,6.345195);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(11,4.391878);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(12,2.916812);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(13,1.709031);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(14,0.9810125);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(15,0.6012582);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(16,0.2999837);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(17,0.1482036);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(18,0.06340039);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(19,0.03433626);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(20,0.01040464);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinContent(21,0.0107948);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(3,0.4207178);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(4,0.5449699);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(5,0.5731006);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(6,0.5131879);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(7,0.4701457);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(8,0.4052448);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(9,0.3072528);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(10,0.2526721);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(11,0.1900191);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(12,0.1409412);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(13,0.09747369);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(14,0.06592137);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(15,0.04734752);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(16,0.03002073);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(17,0.0192769);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(18,0.01113425);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(19,0.007622061);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(20,0.003628423);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetBinError(21,0.003445283);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetEntries(6377);
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_20_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_20_up_fx3001[21] = {
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
   Double_t Graph_from_bjetenls_jec_20_up_fy3001[21] = {
   0,
   0,
   92.44956,
   198.0013,
   255.6031,
   284.7168,
   282.1146,
   253.0109,
   203.1719,
   149.8271,
   101.2435,
   62.37931,
   36.59856,
   20.60655,
   10.39203,
   4.774728,
   2.07666,
   0.8374755,
   0.2832298,
   0.08629092,
   0};
   Double_t Graph_from_bjetenls_jec_20_up_felx3001[21] = {
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
   Double_t Graph_from_bjetenls_jec_20_up_fely3001[21] = {
   0,
   0,
   9.597845,
   14.0597,
   15.98759,
   16.87355,
   16.79627,
   15.90632,
   14.25384,
   12.22697,
   10.04555,
   7.876984,
   6.022018,
   4.502405,
   3.171177,
   2.10694,
   1.321017,
   0.7278654,
   0.2821921,
   0.08629092,
   0};
   Double_t Graph_from_bjetenls_jec_20_up_fehx3001[21] = {
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
   Double_t Graph_from_bjetenls_jec_20_up_fehy3001[21] = {
   1.841055,
   1.841055,
   10.64999,
   15.09532,
   15.98759,
   16.87355,
   16.79627,
   15.90632,
   14.25384,
   13.26792,
   11.09537,
   8.940473,
   7.104912,
   5.612848,
   4.326473,
   3.334839,
   2.661055,
   2.236116,
   1.991169,
   1.889222,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_20_up_fx3001,Graph_from_bjetenls_jec_20_up_fy3001,Graph_from_bjetenls_jec_20_up_felx3001,Graph_from_bjetenls_jec_20_up_fehx3001,Graph_from_bjetenls_jec_20_up_fely3001,Graph_from_bjetenls_jec_20_up_fehy3001);
   grae->SetName("Graph_from_bjetenls_jec_20_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_20_up3001 = new TH1F("Graph_Graph_from_bjetenls_jec_20_up3001","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_20_up3001->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_20_up3001->SetMaximum(331.7494);
   Graph_Graph_from_bjetenls_jec_20_up3001->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_20_up3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_20_up3001->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_up3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_20_up3001);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_20_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_20_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_20_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_20_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_20_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_20_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__2 = new TH1F("ratioframe__2","t#bar{t}",20,3,7);
   ratioframe__2->SetMinimum(0.46);
   ratioframe__2->SetMaximum(1.54);
   ratioframe__2->SetEntries(505954);

   ci = TColor::GetColor("#cc0000");
   ratioframe__2->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__2->SetMarkerColor(ci);
   ratioframe__2->GetXaxis()->SetTitle("log(E)");
   ratioframe__2->GetXaxis()->SetLabelFont(42);
   ratioframe__2->GetXaxis()->SetLabelSize(0);
   ratioframe__2->GetXaxis()->SetTitleSize(0);
   ratioframe__2->GetXaxis()->SetTitleOffset(0);
   ratioframe__2->GetXaxis()->SetTitleFont(42);
   ratioframe__2->GetYaxis()->SetTitle("Data/MC");
   ratioframe__2->GetYaxis()->SetNoExponent();
   ratioframe__2->GetYaxis()->SetNdivisions(5);
   ratioframe__2->GetYaxis()->SetLabelFont(42);
   ratioframe__2->GetYaxis()->SetLabelSize(0.18);
   ratioframe__2->GetYaxis()->SetTitleSize(0.2);
   ratioframe__2->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__2->GetYaxis()->SetTitleFont(42);
   ratioframe__2->GetZaxis()->SetLabelFont(42);
   ratioframe__2->GetZaxis()->SetLabelSize(0.035);
   ratioframe__2->GetZaxis()->SetTitleSize(0.035);
   ratioframe__2->GetZaxis()->SetTitleFont(42);
   ratioframe__2->Draw("");
   
   Double_t Graph_from_ratio_fx3002[20] = {
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
   Double_t Graph_from_ratio_fy3002[20] = {
   0,
   0,
   0.8676999,
   0.8716053,
   0.8754523,
   0.9079732,
   0.9071539,
   0.9171571,
   0.9140077,
   0.9032618,
   0.8867749,
   0.8690983,
   0.8727649,
   0.8862529,
   0.8589545,
   0.8439472,
   0.8401605,
   0.8510612,
   0.8116371,
   0.7315373};
   Double_t Graph_from_ratio_felx3002[20] = {
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
   Double_t Graph_from_ratio_fely3002[20] = {
   0,
   0,
   0.01896319,
   0.01154526,
   0.009301297,
   0.008340279,
   0.007572112,
   0.00729357,
   0.007269294,
   0.007605566,
   0.008209632,
   0.009326639,
   0.01101671,
   0.01373596,
   0.0168898,
   0.02263715,
   0.02974327,
   0.05027608,
   0.0641846,
   0.09300935};
   Double_t Graph_from_ratio_fehx3002[20] = {
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
   Double_t Graph_from_ratio_fehy3002[20] = {
   0,
   0,
   0.01896319,
   0.01154526,
   0.009301297,
   0.008340279,
   0.007572112,
   0.00729357,
   0.007269294,
   0.007605566,
   0.008209632,
   0.009326639,
   0.01101671,
   0.01373596,
   0.0168898,
   0.02263715,
   0.02974327,
   0.05027608,
   0.0641846,
   0.09300935};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3002,Graph_from_ratio_fy3002,Graph_from_ratio_felx3002,Graph_from_ratio_fehx3002,Graph_from_ratio_fely3002,Graph_from_ratio_fehy3002);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3002 = new TH1F("Graph_Graph_from_ratio3002","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3002->SetMinimum(0);
   Graph_Graph_from_ratio3002->SetMaximum(1.016896);
   Graph_Graph_from_ratio3002->SetDirectory(0);
   Graph_Graph_from_ratio3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3002->SetLineColor(ci);
   Graph_Graph_from_ratio3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3002);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
