void bjetenls_jec_8_up()
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
   p1->Range(2.421687,-56.12135,7.240964,412.3899);
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
   
   TH1F *frame__19 = new TH1F("frame__19","t#bar{t}",20,3,7);
   frame__19->SetMinimum(0.1);
   frame__19->SetMaximum(407.7048);
   frame__19->SetEntries(504740);
   frame__19->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__19->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__19->SetMarkerColor(ci);
   frame__19->GetXaxis()->SetTitle("log(E)");
   frame__19->GetXaxis()->SetLabelFont(42);
   frame__19->GetXaxis()->SetLabelSize(0.035);
   frame__19->GetXaxis()->SetTitleSize(0.035);
   frame__19->GetXaxis()->SetTitleFont(42);
   frame__19->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__19->GetYaxis()->SetNoExponent();
   frame__19->GetYaxis()->SetLabelFont(42);
   frame__19->GetYaxis()->SetTitleSize(0.045);
   frame__19->GetYaxis()->SetTitleOffset(1.3);
   frame__19->GetYaxis()->SetTitleFont(42);
   frame__19->GetZaxis()->SetLabelFont(42);
   frame__19->GetZaxis()->SetLabelSize(0.035);
   frame__19->GetZaxis()->SetTitleSize(0.035);
   frame__19->GetZaxis()->SetTitleFont(42);
   frame__19->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_10 = new TH1F("mc_stack_10","mc",20,3,7);
   mc_stack_10->SetMinimum(-6.350547e-09);
   mc_stack_10->SetMaximum(329.3);
   mc_stack_10->SetDirectory(0);
   mc_stack_10->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_10->SetLineColor(ci);
   mc_stack_10->GetXaxis()->SetLabelFont(42);
   mc_stack_10->GetXaxis()->SetLabelSize(0.035);
   mc_stack_10->GetXaxis()->SetTitleSize(0.035);
   mc_stack_10->GetXaxis()->SetTitleFont(42);
   mc_stack_10->GetYaxis()->SetLabelFont(42);
   mc_stack_10->GetYaxis()->SetLabelSize(0.035);
   mc_stack_10->GetYaxis()->SetTitleSize(0.035);
   mc_stack_10->GetYaxis()->SetTitleOffset(0);
   mc_stack_10->GetYaxis()->SetTitleFont(42);
   mc_stack_10->GetZaxis()->SetLabelFont(42);
   mc_stack_10->GetZaxis()->SetLabelSize(0.035);
   mc_stack_10->GetZaxis()->SetTitleSize(0.035);
   mc_stack_10->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_10);
   
   
   TH1F *bjetenls_jec_8_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_8_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(3,101.7391);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(4,217.6512);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(5,278.5925);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(6,300.4933);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(7,296.4085);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(8,263.5066);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(9,213.4968);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(10,158.8903);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(11,109.1686);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(12,68.40611);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(13,40.02861);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(14,22.12188);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(15,11.40467);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(16,5.29145);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(17,2.308459);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(18,0.8804926);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(19,0.3130738);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(20,0.103988);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinContent(21,0.03776906);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(3,1.107169);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(4,1.484756);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(5,1.52075);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(6,1.430822);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(7,1.286386);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(8,1.09835);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(9,0.8955992);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(10,0.6999304);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(11,0.5251773);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(12,0.3767355);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(13,0.2606374);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(14,0.1754293);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(15,0.1140614);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(16,0.07039776);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(17,0.042158);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(18,0.02350628);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(19,0.0127343);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(20,0.006650815);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetBinError(21,0.003500341);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetEntries(497823);
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_8_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_8_up_Diboson_stack_2 = new TH1F("bjetenls_jec_8_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(7,0.2198484);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(8,0.2162842);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(9,0.1362491);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(10,0.1178479);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(11,0.1086815);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(12,0.08173544);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(13,0.04704554);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(14,0.02061271);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(15,0.02593559);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(16,0.0125892);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(17,0.01085307);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(18,0.006533351);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(19,0.001953012);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(20,0.003084371);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinContent(21,0.001012355);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(7,0.03371711);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(8,0.03104235);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(9,0.02184197);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(10,0.01811753);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(11,0.0159673);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(12,0.01281976);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(13,0.008803054);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(14,0.005234262);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(15,0.005324079);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(16,0.003309997);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(17,0.002921063);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(18,0.001943339);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(19,0.0009798166);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(20,0.001100126);
   bjetenls_jec_8_up_Diboson_stack_2->SetBinError(21,0.000575568);
   bjetenls_jec_8_up_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_8_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_8_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_8_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_8_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_8_up_DY_stack_3 = new TH1F("bjetenls_jec_8_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(13,0.06324843);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(15,0.04661599);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(16,0.04333574);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_8_up_DY_stack_3->SetBinContent(18,0.03043228);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(13,0.06324843);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(15,0.04661599);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(16,0.04333574);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_8_up_DY_stack_3->SetBinError(18,0.03043228);
   bjetenls_jec_8_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_8_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_8_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_8_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_8_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_8_up_W_stack_4 = new TH1F("bjetenls_jec_8_up_W_stack_4","W",20,3,7);
   bjetenls_jec_8_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_8_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_8_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_8_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_8_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_8_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(6,11.98973);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(7,12.02822);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(8,10.90062);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(9,7.777771);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(10,6.298377);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(11,4.371075);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(12,2.924255);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(13,1.708521);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(14,0.9851211);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(15,0.5934442);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(16,0.3000975);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(17,0.1482711);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(18,0.06342387);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(19,0.034348);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(20,0.0104087);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinContent(21,0.01079839);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(6,0.5150717);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(7,0.4677721);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(8,0.4039495);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(9,0.3076554);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(10,0.251716);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(11,0.1896465);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(12,0.14114);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(13,0.09745122);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(14,0.06605138);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(15,0.04702264);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(16,0.03003212);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(17,0.01928579);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(18,0.01113839);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(19,0.007624674);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(20,0.003629888);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetBinError(21,0.003446444);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_8_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_8_up_fx3019[21] = {
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
   Double_t Graph_from_bjetenls_jec_8_up_fy3019[21] = {
   0,
   0,
   92.83072,
   197.9362,
   255.385,
   284.2531,
   282.1362,
   252.2735,
   202.6953,
   149.6048,
   101.1673,
   62.28292,
   36.56459,
   20.5688,
   10.41323,
   4.770238,
   2.074441,
   0.8299516,
   0.2833944,
   0.08634198,
   0};
   Double_t Graph_from_bjetenls_jec_8_up_felx3019[21] = {
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
   Double_t Graph_from_bjetenls_jec_8_up_fely3019[21] = {
   0,
   0,
   9.617681,
   14.05739,
   15.98077,
   16.85981,
   16.79691,
   15.88312,
   14.23711,
   12.21787,
   10.04175,
   7.870863,
   6.019198,
   4.498211,
   3.174519,
   2.105875,
   1.320181,
   0.7230016,
   0.2823527,
   0.08634198,
   0};
   Double_t Graph_from_bjetenls_jec_8_up_fehx3019[21] = {
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
   Double_t Graph_from_bjetenls_jec_8_up_fehy3019[21] = {
   1.841055,
   1.841055,
   10.66972,
   15.09302,
   15.98077,
   16.85981,
   16.79691,
   15.88312,
   14.23711,
   13.25886,
   11.0916,
   8.934401,
   7.10213,
   5.608756,
   4.329657,
   3.333878,
   2.660389,
   2.233102,
   1.99125,
   1.88925,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_8_up_fx3019,Graph_from_bjetenls_jec_8_up_fy3019,Graph_from_bjetenls_jec_8_up_felx3019,Graph_from_bjetenls_jec_8_up_fehx3019,Graph_from_bjetenls_jec_8_up_fely3019,Graph_from_bjetenls_jec_8_up_fehy3019);
   grae->SetName("Graph_from_bjetenls_jec_8_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_8_up3019 = new TH1F("Graph_Graph_from_bjetenls_jec_8_up3019","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_8_up3019->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_8_up3019->SetMaximum(331.2242);
   Graph_Graph_from_bjetenls_jec_8_up3019->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_8_up3019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_8_up3019->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_up3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_8_up3019);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_8_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_8_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_8_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_8_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_8_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_8_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__20 = new TH1F("ratioframe__20","t#bar{t}",20,3,7);
   ratioframe__20->SetMinimum(0.46);
   ratioframe__20->SetMaximum(1.54);
   ratioframe__20->SetEntries(504740);

   ci = TColor::GetColor("#cc0000");
   ratioframe__20->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__20->SetMarkerColor(ci);
   ratioframe__20->GetXaxis()->SetTitle("log(E)");
   ratioframe__20->GetXaxis()->SetLabelFont(42);
   ratioframe__20->GetXaxis()->SetLabelSize(0);
   ratioframe__20->GetXaxis()->SetTitleSize(0);
   ratioframe__20->GetXaxis()->SetTitleOffset(0);
   ratioframe__20->GetXaxis()->SetTitleFont(42);
   ratioframe__20->GetYaxis()->SetTitle("Data/MC");
   ratioframe__20->GetYaxis()->SetNoExponent();
   ratioframe__20->GetYaxis()->SetNdivisions(5);
   ratioframe__20->GetYaxis()->SetLabelFont(42);
   ratioframe__20->GetYaxis()->SetLabelSize(0.18);
   ratioframe__20->GetYaxis()->SetTitleSize(0.2);
   ratioframe__20->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__20->GetYaxis()->SetTitleFont(42);
   ratioframe__20->GetZaxis()->SetLabelFont(42);
   ratioframe__20->GetZaxis()->SetLabelSize(0.035);
   ratioframe__20->GetZaxis()->SetTitleSize(0.035);
   ratioframe__20->GetZaxis()->SetTitleFont(42);
   ratioframe__20->Draw("");
   
   Double_t Graph_from_ratio_fx3020[20] = {
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
   Double_t Graph_from_ratio_fy3020[20] = {
   0,
   0,
   0.8671862,
   0.8712187,
   0.8756584,
   0.9063644,
   0.911509,
   0.9172795,
   0.9154716,
   0.9043015,
   0.889,
   0.8700489,
   0.8737596,
   0.8864322,
   0.8626889,
   0.8446679,
   0.8404434,
   0.8461278,
   0.8111472,
   0.7349436};
   Double_t Graph_from_ratio_felx3020[20] = {
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
   Double_t Graph_from_ratio_fely3020[20] = {
   0,
   0,
   0.01890965,
   0.01153773,
   0.009309572,
   0.008331843,
   0.007614052,
   0.007305356,
   0.007291741,
   0.007621113,
   0.008236181,
   0.009346307,
   0.01103663,
   0.0137541,
   0.01695681,
   0.02267402,
   0.02977064,
   0.0501769,
   0.06413144,
   0.09349693};
   Double_t Graph_from_ratio_fehx3020[20] = {
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
   Double_t Graph_from_ratio_fehy3020[20] = {
   0,
   0,
   0.01890965,
   0.01153773,
   0.009309572,
   0.008331843,
   0.007614052,
   0.007305356,
   0.007291741,
   0.007621113,
   0.008236181,
   0.009346307,
   0.01103663,
   0.0137541,
   0.01695681,
   0.02267402,
   0.02977064,
   0.0501769,
   0.06413144,
   0.09349693};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3020,Graph_from_ratio_fy3020,Graph_from_ratio_felx3020,Graph_from_ratio_fehx3020,Graph_from_ratio_fely3020,Graph_from_ratio_fehy3020);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3020 = new TH1F("Graph_Graph_from_ratio3020","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3020->SetMinimum(0);
   Graph_Graph_from_ratio3020->SetMaximum(1.017043);
   Graph_Graph_from_ratio3020->SetDirectory(0);
   Graph_Graph_from_ratio3020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3020->SetLineColor(ci);
   Graph_Graph_from_ratio3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3020);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
