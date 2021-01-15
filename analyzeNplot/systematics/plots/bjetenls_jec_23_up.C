void bjetenls_jec_23_up()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:09 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-56.23949,7.240964,413.2563);
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
   
   TH1F *frame__95 = new TH1F("frame__95","t#bar{t}",20,3,7);
   frame__95->SetMinimum(0.1);
   frame__95->SetMaximum(408.5613);
   frame__95->SetEntries(506204);
   frame__95->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__95->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__95->SetMarkerColor(ci);
   frame__95->GetXaxis()->SetTitle("log(E)");
   frame__95->GetXaxis()->SetLabelFont(42);
   frame__95->GetXaxis()->SetLabelSize(0.035);
   frame__95->GetXaxis()->SetTitleSize(0.035);
   frame__95->GetXaxis()->SetTitleFont(42);
   frame__95->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__95->GetYaxis()->SetNoExponent();
   frame__95->GetYaxis()->SetLabelFont(42);
   frame__95->GetYaxis()->SetTitleSize(0.045);
   frame__95->GetYaxis()->SetTitleOffset(1.3);
   frame__95->GetYaxis()->SetTitleFont(42);
   frame__95->GetZaxis()->SetLabelFont(42);
   frame__95->GetZaxis()->SetLabelSize(0.035);
   frame__95->GetZaxis()->SetTitleSize(0.035);
   frame__95->GetZaxis()->SetTitleFont(42);
   frame__95->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_48 = new TH1F("mc_stack_48","mc",20,3,7);
   mc_stack_48->SetMinimum(-6.350547e-09);
   mc_stack_48->SetMaximum(329.9919);
   mc_stack_48->SetDirectory(0);
   mc_stack_48->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_48->SetLineColor(ci);
   mc_stack_48->GetXaxis()->SetLabelFont(42);
   mc_stack_48->GetXaxis()->SetLabelSize(0.035);
   mc_stack_48->GetXaxis()->SetTitleSize(0.035);
   mc_stack_48->GetXaxis()->SetTitleFont(42);
   mc_stack_48->GetYaxis()->SetLabelFont(42);
   mc_stack_48->GetYaxis()->SetLabelSize(0.035);
   mc_stack_48->GetYaxis()->SetTitleSize(0.035);
   mc_stack_48->GetYaxis()->SetTitleOffset(0);
   mc_stack_48->GetYaxis()->SetTitleFont(42);
   mc_stack_48->GetZaxis()->SetLabelFont(42);
   mc_stack_48->GetZaxis()->SetLabelSize(0.035);
   mc_stack_48->GetZaxis()->SetTitleSize(0.035);
   mc_stack_48->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_48);
   
   
   TH1F *bjetenls_jec_23_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_23_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(3,101.875);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(4,217.9827);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(5,279.0351);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(6,301.0037);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(7,296.9981);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(8,263.7643);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(9,213.7471);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(10,159.1426);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(11,109.5616);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(12,68.8482);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(13,40.39783);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(14,22.32364);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(15,11.50846);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(16,5.31996);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(17,2.317431);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(18,0.8767507);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(19,0.3105727);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(20,0.1006833);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinContent(21,0.03787185);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(3,1.107946);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(4,1.48589);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(5,1.521958);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(6,1.432004);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(7,1.287672);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(8,1.098848);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(9,0.8961008);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(10,0.7004908);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(11,0.5261077);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(12,0.3779589);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(13,0.2618268);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(14,0.1762463);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(15,0.1145767);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(16,0.07059349);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(17,0.04225054);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(18,0.02345914);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(19,0.01269097);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(20,0.006552235);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetBinError(21,0.003510183);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetEntries(499248);
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_23_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_23_up_Diboson_stack_2 = new TH1F("bjetenls_jec_23_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(6,0.2638741);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(7,0.2208992);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(8,0.2154883);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(9,0.1393697);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(10,0.1176173);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(11,0.1119142);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(12,0.08073509);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(13,0.04754985);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(14,0.02120029);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(15,0.02704836);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(16,0.01259429);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(17,0.01087024);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(18,0.006548043);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(19,0.001955726);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(20,0.003091321);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinContent(21,0.001013437);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(6,0.04139625);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(7,0.03386654);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(8,0.03093398);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(9,0.02215142);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(10,0.01807788);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(11,0.0162172);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(12,0.01274786);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(13,0.008798367);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(14,0.005392687);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(15,0.005439247);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(16,0.003311281);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(17,0.002925476);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(18,0.001947793);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(19,0.0009812021);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(20,0.001102758);
   bjetenls_jec_23_up_Diboson_stack_2->SetBinError(21,0.0005761699);
   bjetenls_jec_23_up_Diboson_stack_2->SetEntries(544);
   bjetenls_jec_23_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_23_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_23_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_23_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_23_up_DY_stack_3 = new TH1F("bjetenls_jec_23_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(13,0.06300636);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(15,0.04664572);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(16,0.04338783);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_23_up_DY_stack_3->SetBinContent(18,0.03052286);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(13,0.06300635);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(15,0.04664572);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(16,0.04338783);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_23_up_DY_stack_3->SetBinError(18,0.03052286);
   bjetenls_jec_23_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_23_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_23_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_23_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_23_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_23_up_W_stack_4 = new TH1F("bjetenls_jec_23_up_W_stack_4","W",20,3,7);
   bjetenls_jec_23_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_23_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_23_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_23_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_23_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_23_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(4,8.944118);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(5,12.21734);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(6,12.13132);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(7,12.09866);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(8,10.96386);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(9,7.767339);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(10,6.337979);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(11,4.376163);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(12,2.98152);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(13,1.699523);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(14,0.9995595);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(15,0.6007743);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(16,0.3001774);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(17,0.1484193);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(18,0.06352562);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(19,0.03442502);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(20,0.01044003);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinContent(21,0.01082599);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(4,0.5398529);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(5,0.5765191);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(6,0.5183248);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(7,0.4692187);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(8,0.4050872);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(9,0.3073897);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(10,0.2526598);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(11,0.1899036);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(12,0.1423791);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(13,0.09724765);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(14,0.06657561);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(15,0.04730549);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(16,0.03004012);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(17,0.01930537);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(18,0.01115627);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(19,0.007641976);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(20,0.003641325);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetBinError(21,0.003455409);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetEntries(6388);
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_23_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_23_up_fx3095[21] = {
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
   Double_t Graph_from_bjetenls_jec_23_up_fy3095[21] = {
   0,
   0,
   93.134,
   197.8481,
   255.5161,
   284.8918,
   282.515,
   251.9858,
   203.2408,
   149.7841,
   101.3393,
   62.51312,
   36.70123,
   20.71527,
   10.44834,
   4.79487,
   2.071831,
   0.8249953,
   0.279426,
   0.08428384,
   0};
   Double_t Graph_from_bjetenls_jec_23_up_felx3095[21] = {
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
   Double_t Graph_from_bjetenls_jec_23_up_fely3095[21] = {
   0,
   0,
   9.633436,
   14.05425,
   15.98487,
   16.87874,
   16.80818,
   15.87406,
   14.25625,
   12.22521,
   10.05031,
   7.885474,
   6.030538,
   4.514463,
   3.180044,
   2.111713,
   1.319198,
   0.7197837,
   0.2784786,
   0.08428384,
   0};
   Double_t Graph_from_bjetenls_jec_23_up_fehx3095[21] = {
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
   Double_t Graph_from_bjetenls_jec_23_up_fehy3095[21] = {
   1.841055,
   1.841055,
   10.68539,
   15.08989,
   15.98487,
   16.87874,
   16.80818,
   15.87406,
   14.25625,
   13.26617,
   11.10012,
   8.948895,
   7.113316,
   5.624617,
   4.334924,
   3.339143,
   2.659606,
   2.231113,
   1.989291,
   1.888128,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_23_up_fx3095,Graph_from_bjetenls_jec_23_up_fy3095,Graph_from_bjetenls_jec_23_up_felx3095,Graph_from_bjetenls_jec_23_up_fehx3095,Graph_from_bjetenls_jec_23_up_fely3095,Graph_from_bjetenls_jec_23_up_fehy3095);
   grae->SetName("Graph_from_bjetenls_jec_23_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_23_up3095 = new TH1F("Graph_Graph_from_bjetenls_jec_23_up3095","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_23_up3095->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_23_up3095->SetMaximum(331.9476);
   Graph_Graph_from_bjetenls_jec_23_up3095->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_23_up3095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_23_up3095->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_up3095->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_23_up3095);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_23_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_23_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_23_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_23_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_23_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_23_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__96 = new TH1F("ratioframe__96","t#bar{t}",20,3,7);
   ratioframe__96->SetMinimum(0.46);
   ratioframe__96->SetMaximum(1.54);
   ratioframe__96->SetEntries(506204);

   ci = TColor::GetColor("#cc0000");
   ratioframe__96->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__96->SetMarkerColor(ci);
   ratioframe__96->GetXaxis()->SetTitle("log(E)");
   ratioframe__96->GetXaxis()->SetLabelFont(42);
   ratioframe__96->GetXaxis()->SetLabelSize(0);
   ratioframe__96->GetXaxis()->SetTitleSize(0);
   ratioframe__96->GetXaxis()->SetTitleOffset(0);
   ratioframe__96->GetXaxis()->SetTitleFont(42);
   ratioframe__96->GetYaxis()->SetTitle("Data/MC");
   ratioframe__96->GetYaxis()->SetNoExponent();
   ratioframe__96->GetYaxis()->SetNdivisions(5);
   ratioframe__96->GetYaxis()->SetLabelFont(42);
   ratioframe__96->GetYaxis()->SetLabelSize(0.18);
   ratioframe__96->GetYaxis()->SetTitleSize(0.2);
   ratioframe__96->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__96->GetYaxis()->SetTitleFont(42);
   ratioframe__96->GetZaxis()->SetLabelFont(42);
   ratioframe__96->GetZaxis()->SetLabelSize(0.035);
   ratioframe__96->GetZaxis()->SetTitleSize(0.035);
   ratioframe__96->GetZaxis()->SetTitleFont(42);
   ratioframe__96->Draw("");
   
   Double_t Graph_from_ratio_fx3096[20] = {
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
   Double_t Graph_from_ratio_fy3096[20] = {
   0,
   0,
   0.8689167,
   0.8694212,
   0.8745255,
   0.9064962,
   0.9107875,
   0.9151677,
   0.9169291,
   0.9037924,
   0.8873818,
   0.8672273,
   0.8695344,
   0.8844808,
   0.8576211,
   0.8447444,
   0.83629,
   0.8441169,
   0.8053705,
   0.7379428};
   Double_t Graph_from_ratio_felx3096[20] = {
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
   Double_t Graph_from_ratio_fely3096[20] = {
   0,
   0,
   0.01892046,
   0.01151299,
   0.00929415,
   0.008324892,
   0.007601891,
   0.007290394,
   0.007295179,
   0.007612251,
   0.008211823,
   0.009294332,
   0.01095219,
   0.01366953,
   0.016811,
   0.02261436,
   0.02961895,
   0.05024431,
   0.06407155,
   0.09515615};
   Double_t Graph_from_ratio_fehx3096[20] = {
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
   Double_t Graph_from_ratio_fehy3096[20] = {
   0,
   0,
   0.01892046,
   0.01151299,
   0.00929415,
   0.008324892,
   0.007601891,
   0.007290394,
   0.007295179,
   0.007612251,
   0.008211823,
   0.009294332,
   0.01095219,
   0.01366953,
   0.016811,
   0.02261436,
   0.02961895,
   0.05024431,
   0.06407155,
   0.09515615};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3096,Graph_from_ratio_fy3096,Graph_from_ratio_felx3096,Graph_from_ratio_fehx3096,Graph_from_ratio_fely3096,Graph_from_ratio_fehy3096);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3096 = new TH1F("Graph_Graph_from_ratio3096","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3096->SetMinimum(0);
   Graph_Graph_from_ratio3096->SetMaximum(1.016647);
   Graph_Graph_from_ratio3096->SetDirectory(0);
   Graph_Graph_from_ratio3096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3096->SetLineColor(ci);
   Graph_Graph_from_ratio3096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3096->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3096->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3096->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3096->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3096->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3096->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3096->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3096->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3096);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
