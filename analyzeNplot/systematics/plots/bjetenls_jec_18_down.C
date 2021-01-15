void bjetenls_jec_18_down()
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
   p1->Range(2.421687,-56.08852,7.240964,412.1492);
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
   
   TH1F *frame__115 = new TH1F("frame__115","t#bar{t}",20,3,7);
   frame__115->SetMinimum(0.1);
   frame__115->SetMaximum(407.4668);
   frame__115->SetEntries(504426);
   frame__115->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__115->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__115->SetMarkerColor(ci);
   frame__115->GetXaxis()->SetTitle("log(E)");
   frame__115->GetXaxis()->SetLabelFont(42);
   frame__115->GetXaxis()->SetLabelSize(0.035);
   frame__115->GetXaxis()->SetTitleSize(0.035);
   frame__115->GetXaxis()->SetTitleFont(42);
   frame__115->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__115->GetYaxis()->SetNoExponent();
   frame__115->GetYaxis()->SetLabelFont(42);
   frame__115->GetYaxis()->SetTitleSize(0.045);
   frame__115->GetYaxis()->SetTitleOffset(1.3);
   frame__115->GetYaxis()->SetTitleFont(42);
   frame__115->GetZaxis()->SetLabelFont(42);
   frame__115->GetZaxis()->SetLabelSize(0.035);
   frame__115->GetZaxis()->SetTitleSize(0.035);
   frame__115->GetZaxis()->SetTitleFont(42);
   frame__115->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_58 = new TH1F("mc_stack_58","mc",20,3,7);
   mc_stack_58->SetMinimum(-6.350547e-09);
   mc_stack_58->SetMaximum(329.1078);
   mc_stack_58->SetDirectory(0);
   mc_stack_58->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_58->SetLineColor(ci);
   mc_stack_58->GetXaxis()->SetLabelFont(42);
   mc_stack_58->GetXaxis()->SetLabelSize(0.035);
   mc_stack_58->GetXaxis()->SetTitleSize(0.035);
   mc_stack_58->GetXaxis()->SetTitleFont(42);
   mc_stack_58->GetYaxis()->SetLabelFont(42);
   mc_stack_58->GetYaxis()->SetLabelSize(0.035);
   mc_stack_58->GetYaxis()->SetTitleSize(0.035);
   mc_stack_58->GetYaxis()->SetTitleOffset(0);
   mc_stack_58->GetYaxis()->SetTitleFont(42);
   mc_stack_58->GetZaxis()->SetLabelFont(42);
   mc_stack_58->GetZaxis()->SetLabelSize(0.035);
   mc_stack_58->GetZaxis()->SetTitleSize(0.035);
   mc_stack_58->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_58);
   
   
   TH1F *bjetenls_jec_18_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_18_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(3,101.726);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(4,217.5782);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(5,278.523);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(6,300.3282);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(7,296.3225);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(8,263.5078);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(9,213.509);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(10,159.0117);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(11,109.0862);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(12,68.32925);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(13,39.96986);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(14,22.10565);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(15,11.32053);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(16,5.277506);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(17,2.279785);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(18,0.8683776);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(19,0.310573);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(20,0.1003528);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinContent(21,0.03790397);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(3,1.107091);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(4,1.484526);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(5,1.520569);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(6,1.430426);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(7,1.286177);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(8,1.098349);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(9,0.8956271);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(10,0.7001663);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(11,0.5249944);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(12,0.3764899);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(13,0.260472);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(14,0.175378);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(15,0.113631);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(16,0.07031917);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(17,0.04189511);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(18,0.02334301);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(19,0.01269137);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(20,0.006544364);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetBinError(21,0.003512788);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetEntries(497514);
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_18_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_18_down_Diboson_stack_2 = new TH1F("bjetenls_jec_18_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(7,0.2146798);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(8,0.2164489);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(9,0.1365089);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(10,0.1201413);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(11,0.1067449);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(12,0.08190449);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(13,0.04711639);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(14,0.02175746);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(15,0.02551613);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(16,0.01119463);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(17,0.0108798);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(18,0.006550529);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(19,0.001956649);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(20,0.003092742);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinContent(21,0.001015118);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(7,0.03331756);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(8,0.03106472);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(9,0.02188347);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(10,0.01826746);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(11,0.01585157);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(12,0.01284622);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(13,0.008815768);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(14,0.005358728);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(15,0.005256184);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(16,0.003159537);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(17,0.002928029);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(18,0.001948472);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(19,0.0009816563);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(20,0.001103285);
   bjetenls_jec_18_down_Diboson_stack_2->SetBinError(21,0.0005771684);
   bjetenls_jec_18_down_Diboson_stack_2->SetEntries(538);
   bjetenls_jec_18_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_18_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_18_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_18_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_18_down_DY_stack_3 = new TH1F("bjetenls_jec_18_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(13,0.06350876);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(15,0.04680317);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(16,0.04350975);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_18_down_DY_stack_3->SetBinContent(18,0.03052894);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(13,0.06350876);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(15,0.04680317);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(16,0.04350975);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_18_down_DY_stack_3->SetBinError(18,0.03052894);
   bjetenls_jec_18_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_18_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_18_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_18_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_18_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_18_down_W_stack_4 = new TH1F("bjetenls_jec_18_down_W_stack_4","W",20,3,7);
   bjetenls_jec_18_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_18_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_18_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_18_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_18_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_18_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(6,11.97173);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(7,12.04538);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(8,10.94275);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(9,7.745151);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(10,6.281849);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(11,4.400712);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(12,2.890388);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(13,1.715198);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(14,0.976918);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(15,0.5948943);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(16,0.3006071);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(17,0.1485877);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(18,0.06357978);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(19,0.03443693);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(20,0.01044351);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinContent(21,0.01083879);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(6,0.5147572);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(7,0.4680898);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(8,0.4046991);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(9,0.30684);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(10,0.2514488);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(11,0.1902146);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(12,0.1403328);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(13,0.09767662);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(14,0.06579202);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(15,0.04713641);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(16,0.03008424);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(17,0.01932739);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(18,0.01116628);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(19,0.007644625);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(20,0.003642524);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetBinError(21,0.003459632);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetEntries(6350);
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_18_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_18_down_fx3115[21] = {
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
   Double_t Graph_from_bjetenls_jec_18_down_fy3115[21] = {
   0,
   0,
   92.90407,
   197.9249,
   255.0758,
   284.4375,
   281.9196,
   252.0847,
   202.6389,
   149.4019,
   101.1623,
   62.24561,
   36.43571,
   20.57077,
   10.35487,
   4.730676,
   2.066651,
   0.8228352,
   0.275435,
   0.08431223,
   0};
   Double_t Graph_from_bjetenls_jec_18_down_felx3115[21] = {
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
   Double_t Graph_from_bjetenls_jec_18_down_fely3115[21] = {
   0,
   0,
   9.621494,
   14.05699,
   15.97109,
   16.86527,
   16.79046,
   15.87718,
   14.23513,
   12.20957,
   10.0415,
   7.868492,
   6.008482,
   4.498429,
   3.165313,
   2.096463,
   1.317242,
   0.7183778,
   0.2745761,
   0.08431223,
   0};
   Double_t Graph_from_bjetenls_jec_18_down_fehx3115[21] = {
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
   Double_t Graph_from_bjetenls_jec_18_down_fehy3115[21] = {
   1.841055,
   1.841055,
   10.67351,
   15.09261,
   15.97109,
   16.86527,
   16.79046,
   15.87718,
   14.23513,
   13.25058,
   11.09135,
   8.93205,
   7.091561,
   5.608969,
   4.320885,
   3.325397,
   2.658051,
   2.230245,
   1.987318,
   1.888144,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_18_down_fx3115,Graph_from_bjetenls_jec_18_down_fy3115,Graph_from_bjetenls_jec_18_down_felx3115,Graph_from_bjetenls_jec_18_down_fehx3115,Graph_from_bjetenls_jec_18_down_fely3115,Graph_from_bjetenls_jec_18_down_fehy3115);
   grae->SetName("Graph_from_bjetenls_jec_18_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_18_down3115 = new TH1F("Graph_Graph_from_bjetenls_jec_18_down3115","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_18_down3115->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_18_down3115->SetMaximum(331.433);
   Graph_Graph_from_bjetenls_jec_18_down3115->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_18_down3115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_18_down3115->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_down3115->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_18_down3115);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_18_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_18_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_18_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_18_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_18_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_18_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__116 = new TH1F("ratioframe__116","t#bar{t}",20,3,7);
   ratioframe__116->SetMinimum(0.46);
   ratioframe__116->SetMaximum(1.54);
   ratioframe__116->SetEntries(504426);

   ci = TColor::GetColor("#cc0000");
   ratioframe__116->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__116->SetMarkerColor(ci);
   ratioframe__116->GetXaxis()->SetTitle("log(E)");
   ratioframe__116->GetXaxis()->SetLabelFont(42);
   ratioframe__116->GetXaxis()->SetLabelSize(0);
   ratioframe__116->GetXaxis()->SetTitleSize(0);
   ratioframe__116->GetXaxis()->SetTitleOffset(0);
   ratioframe__116->GetXaxis()->SetTitleFont(42);
   ratioframe__116->GetYaxis()->SetTitle("Data/MC");
   ratioframe__116->GetYaxis()->SetNoExponent();
   ratioframe__116->GetYaxis()->SetNdivisions(5);
   ratioframe__116->GetYaxis()->SetLabelFont(42);
   ratioframe__116->GetYaxis()->SetLabelSize(0.18);
   ratioframe__116->GetYaxis()->SetTitleSize(0.2);
   ratioframe__116->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__116->GetYaxis()->SetTitleFont(42);
   ratioframe__116->GetZaxis()->SetLabelFont(42);
   ratioframe__116->GetZaxis()->SetLabelSize(0.035);
   ratioframe__116->GetZaxis()->SetTitleSize(0.035);
   ratioframe__116->GetZaxis()->SetTitleFont(42);
   ratioframe__116->Draw("");
   
   Double_t Graph_from_ratio_fx3116[20] = {
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
   Double_t Graph_from_ratio_fy3116[20] = {
   0,
   0,
   0.8679776,
   0.8714489,
   0.8748067,
   0.9074818,
   0.9110273,
   0.9164479,
   0.9153003,
   0.9024909,
   0.8893844,
   0.8708726,
   0.8717579,
   0.8874073,
   0.8637879,
   0.8398417,
   0.8470092,
   0.8491268,
   0.7938372,
   0.7403011};
   Double_t Graph_from_ratio_felx3116[20] = {
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
   Double_t Graph_from_ratio_fely3116[20] = {
   0,
   0,
   0.01892141,
   0.01154141,
   0.009305019,
   0.008341076,
   0.007612207,
   0.007300743,
   0.007290742,
   0.007608698,
   0.008241338,
   0.009357835,
   0.01102875,
   0.01377017,
   0.01703535,
   0.02262806,
   0.03010011,
   0.05073754,
   0.0634595,
   0.09551165};
   Double_t Graph_from_ratio_fehx3116[20] = {
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
   Double_t Graph_from_ratio_fehy3116[20] = {
   0,
   0,
   0.01892141,
   0.01154141,
   0.009305019,
   0.008341076,
   0.007612207,
   0.007300743,
   0.007290742,
   0.007608698,
   0.008241338,
   0.009357835,
   0.01102875,
   0.01377017,
   0.01703535,
   0.02262806,
   0.03010011,
   0.05073754,
   0.0634595,
   0.09551165};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3116,Graph_from_ratio_fy3116,Graph_from_ratio_felx3116,Graph_from_ratio_fehx3116,Graph_from_ratio_fely3116,Graph_from_ratio_fehy3116);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3116 = new TH1F("Graph_Graph_from_ratio3116","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3116->SetMinimum(0);
   Graph_Graph_from_ratio3116->SetMaximum(1.016123);
   Graph_Graph_from_ratio3116->SetDirectory(0);
   Graph_Graph_from_ratio3116->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3116->SetLineColor(ci);
   Graph_Graph_from_ratio3116->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3116->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3116->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3116->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3116->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3116->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3116->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3116->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3116->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3116->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3116->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3116->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3116->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3116);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
