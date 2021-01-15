void bjetenls_jec_17_up()
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
   p1->Range(2.421687,-56.08162,7.240964,412.0986);
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
   
   TH1F *frame__25 = new TH1F("frame__25","t#bar{t}",20,3,7);
   frame__25->SetMinimum(0.1);
   frame__25->SetMaximum(407.4168);
   frame__25->SetEntries(504792);
   frame__25->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__25->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__25->SetMarkerColor(ci);
   frame__25->GetXaxis()->SetTitle("log(E)");
   frame__25->GetXaxis()->SetLabelFont(42);
   frame__25->GetXaxis()->SetLabelSize(0.035);
   frame__25->GetXaxis()->SetTitleSize(0.035);
   frame__25->GetXaxis()->SetTitleFont(42);
   frame__25->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__25->GetYaxis()->SetNoExponent();
   frame__25->GetYaxis()->SetLabelFont(42);
   frame__25->GetYaxis()->SetTitleSize(0.045);
   frame__25->GetYaxis()->SetTitleOffset(1.3);
   frame__25->GetYaxis()->SetTitleFont(42);
   frame__25->GetZaxis()->SetLabelFont(42);
   frame__25->GetZaxis()->SetLabelSize(0.035);
   frame__25->GetZaxis()->SetTitleSize(0.035);
   frame__25->GetZaxis()->SetTitleFont(42);
   frame__25->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_13 = new TH1F("mc_stack_13","mc",20,3,7);
   mc_stack_13->SetMinimum(-1.854014e-08);
   mc_stack_13->SetMaximum(329.0674);
   mc_stack_13->SetDirectory(0);
   mc_stack_13->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_13->SetLineColor(ci);
   mc_stack_13->GetXaxis()->SetLabelFont(42);
   mc_stack_13->GetXaxis()->SetLabelSize(0.035);
   mc_stack_13->GetXaxis()->SetTitleSize(0.035);
   mc_stack_13->GetXaxis()->SetTitleFont(42);
   mc_stack_13->GetYaxis()->SetLabelFont(42);
   mc_stack_13->GetYaxis()->SetLabelSize(0.035);
   mc_stack_13->GetYaxis()->SetTitleSize(0.035);
   mc_stack_13->GetYaxis()->SetTitleOffset(0);
   mc_stack_13->GetYaxis()->SetTitleFont(42);
   mc_stack_13->GetZaxis()->SetLabelFont(42);
   mc_stack_13->GetZaxis()->SetLabelSize(0.035);
   mc_stack_13->GetZaxis()->SetTitleSize(0.035);
   mc_stack_13->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_13);
   
   
   TH1F *bjetenls_jec_17_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_17_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(3,101.6845);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(4,217.6602);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(5,278.5957);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(6,300.2743);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(7,296.4673);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(8,263.5153);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(9,213.5369);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(10,158.9521);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(11,109.1963);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(12,68.43638);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(13,40.03291);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(14,22.12815);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(15,11.40884);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(16,5.294806);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(17,2.307617);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(18,0.8817725);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(19,0.3136478);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(20,0.1036037);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinContent(21,0.03811602);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(3,1.106886);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(4,1.48483);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(5,1.520712);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(6,1.43031);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(7,1.286518);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(8,1.098391);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(9,0.8956872);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(10,0.7000663);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(11,0.5252493);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(12,0.376822);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(13,0.2606457);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(14,0.1754581);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(15,0.1140815);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(16,0.07041869);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(17,0.04214907);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(18,0.02352472);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(19,0.01274775);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(20,0.006639496);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetBinError(21,0.003517606);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetEntries(497873);
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_17_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_17_up_Diboson_stack_2 = new TH1F("bjetenls_jec_17_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(3,0.1618254);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(4,0.2644689);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(5,0.2464844);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(6,0.2569755);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(7,0.219813);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(8,0.2162505);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(9,0.1362317);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(10,0.1178361);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(11,0.1086686);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(12,0.0817267);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(13,0.04704074);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(14,0.02060971);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(15,0.02593175);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(16,0.01258698);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(17,0.01085122);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(18,0.006532045);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(19,0.001952666);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(20,0.003083521);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinContent(21,0.001012134);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(3,0.04193059);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(4,0.05109356);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(5,0.04411058);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(6,0.04081787);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(7,0.03371162);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(8,0.03103744);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(9,0.02183919);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(10,0.01811572);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(11,0.01596532);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(12,0.01281839);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(13,0.008802159);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(14,0.005233495);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(15,0.005323296);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(16,0.003309414);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(17,0.00292056);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(18,0.00194295);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(19,0.0009796462);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(20,0.001099818);
   bjetenls_jec_17_up_Diboson_stack_2->SetBinError(21,0.0005754397);
   bjetenls_jec_17_up_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_17_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_17_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_17_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_17_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_17_up_DY_stack_3 = new TH1F("bjetenls_jec_17_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(3,0.6451594);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(4,0.3715599);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(5,0.6778243);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(6,0.8788683);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(7,0.8697117);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(8,0.4000617);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(10,0.1302401);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(11,0.1505578);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(12,0.1734121);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(13,0.06323578);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(14,0.07640786);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(15,0.04661133);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(16,0.04333141);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(17,0.0006868229);
   bjetenls_jec_17_up_DY_stack_3->SetBinContent(18,0.0304262);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(3,0.6451594);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(4,0.3715599);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(5,0.4796087);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(6,0.5083537);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(7,0.4351312);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(8,0.2835424);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(10,0.1302401);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(11,0.1101491);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(12,0.1226545);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(13,0.06323578);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(14,0.07640786);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(15,0.04661133);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(16,0.04333141);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(17,0.000686823);
   bjetenls_jec_17_up_DY_stack_3->SetBinError(18,0.0304262);
   bjetenls_jec_17_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_17_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_17_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_17_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_17_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_17_up_W_stack_4 = new TH1F("bjetenls_jec_17_up_W_stack_4","W",20,3,7);
   bjetenls_jec_17_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_17_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_17_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_17_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_17_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_17_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(3,4.501032);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(4,8.945309);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(5,12.14477);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(6,11.98733);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(7,12.02592);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(8,10.87941);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(9,7.780093);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(10,6.303784);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(11,4.379731);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(12,2.918101);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(13,1.714094);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(14,0.9769093);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(15,0.6014379);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(16,0.30005);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(17,0.1482452);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(18,0.06341136);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(19,0.03434109);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(20,0.01040668);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinContent(21,0.01079603);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(3,0.4195026);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(4,0.5396822);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(5,0.5744951);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(6,0.5149687);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(7,0.4676827);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(8,0.4036163);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(9,0.3076878);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(10,0.2518225);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(11,0.1898461);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(12,0.1410037);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(13,0.09761074);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(14,0.06579466);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(15,0.04736192);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(16,0.03002735);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(17,0.01928243);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(18,0.0111362);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(19,0.007623149);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(20,0.003629179);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetBinError(21,0.003445696);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetEntries(6355);
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_17_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_17_up_fx3025[21] = {
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
   Double_t Graph_from_bjetenls_jec_17_up_fy3025[21] = {
   0,
   0,
   92.8763,
   197.8675,
   255.4406,
   284.4215,
   282.1198,
   252.0385,
   202.6896,
   149.444,
   101.1139,
   62.24323,
   36.5523,
   20.59154,
   10.39421,
   4.767024,
   2.069068,
   0.836148,
   0.2832317,
   0.08627311,
   0};
   Double_t Graph_from_bjetenls_jec_17_up_felx3025[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_17_up_fely3025[21] = {
   0,
   0,
   9.620051,
   14.05494,
   15.98251,
   16.8648,
   16.79642,
   15.87572,
   14.23691,
   12.21129,
   10.03909,
   7.868341,
   6.018177,
   4.500738,
   3.171522,
   2.105112,
   1.318155,
   0.727009,
   0.2821939,
   0.08627311,
   0};
   Double_t Graph_from_bjetenls_jec_17_up_fehx3025[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_17_up_fehy3025[21] = {
   1.841055,
   1.841055,
   10.67208,
   15.09058,
   15.98251,
   16.8648,
   16.79642,
   15.87572,
   14.23691,
   13.2523,
   11.08895,
   8.931899,
   7.101123,
   5.611222,
   4.326802,
   3.33319,
   2.658777,
   2.235585,
   1.99117,
   1.889212,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_17_up_fx3025,Graph_from_bjetenls_jec_17_up_fy3025,Graph_from_bjetenls_jec_17_up_felx3025,Graph_from_bjetenls_jec_17_up_fehx3025,Graph_from_bjetenls_jec_17_up_fely3025,Graph_from_bjetenls_jec_17_up_fehy3025);
   grae->SetName("Graph_from_bjetenls_jec_17_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_17_up3025 = new TH1F("Graph_Graph_from_bjetenls_jec_17_up3025","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_17_up3025->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_17_up3025->SetMaximum(331.4149);
   Graph_Graph_from_bjetenls_jec_17_up3025->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_17_up3025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_17_up3025->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_up3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_17_up3025);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_17_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_17_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_17_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_17_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_17_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_17_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__26 = new TH1F("ratioframe__26","t#bar{t}",20,3,7);
   ratioframe__26->SetMinimum(0.46);
   ratioframe__26->SetMaximum(1.54);
   ratioframe__26->SetEntries(504792);

   ci = TColor::GetColor("#cc0000");
   ratioframe__26->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__26->SetMarkerColor(ci);
   ratioframe__26->GetXaxis()->SetTitle("log(E)");
   ratioframe__26->GetXaxis()->SetLabelFont(42);
   ratioframe__26->GetXaxis()->SetLabelSize(0);
   ratioframe__26->GetXaxis()->SetTitleSize(0);
   ratioframe__26->GetXaxis()->SetTitleOffset(0);
   ratioframe__26->GetXaxis()->SetTitleFont(42);
   ratioframe__26->GetYaxis()->SetTitle("Data/MC");
   ratioframe__26->GetYaxis()->SetNoExponent();
   ratioframe__26->GetYaxis()->SetNdivisions(5);
   ratioframe__26->GetYaxis()->SetLabelFont(42);
   ratioframe__26->GetYaxis()->SetLabelSize(0.18);
   ratioframe__26->GetYaxis()->SetTitleSize(0.2);
   ratioframe__26->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__26->GetYaxis()->SetTitleFont(42);
   ratioframe__26->GetZaxis()->SetLabelFont(42);
   ratioframe__26->GetZaxis()->SetLabelSize(0.035);
   ratioframe__26->GetZaxis()->SetTitleSize(0.035);
   ratioframe__26->GetZaxis()->SetTitleFont(42);
   ratioframe__26->Draw("");
   
   Double_t Graph_from_ratio_fx3026[20] = {
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
   Double_t Graph_from_ratio_fy3026[20] = {
   0,
   0,
   0.8680636,
   0.8707365,
   0.8758019,
   0.9075423,
   0.9112903,
   0.9164669,
   0.9152707,
   0.902963,
   0.8882475,
   0.8692021,
   0.8732603,
   0.8874868,
   0.8602475,
   0.8436053,
   0.838562,
   0.8513513,
   0.8093684,
   0.7367854};
   Double_t Graph_from_ratio_felx3026[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3026[20] = {
   0,
   0,
   0.01892655,
   0.01153301,
   0.009310377,
   0.008341991,
   0.007611907,
   0.007301176,
   0.00729007,
   0.007612341,
   0.008230754,
   0.009338804,
   0.01103199,
   0.01376409,
   0.0169183,
   0.02264574,
   0.02973374,
   0.05036246,
   0.0639743,
   0.09377988};
   Double_t Graph_from_ratio_fehx3026[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3026[20] = {
   0,
   0,
   0.01892655,
   0.01153301,
   0.009310377,
   0.008341991,
   0.007611907,
   0.007301176,
   0.00729007,
   0.007612341,
   0.008230754,
   0.009338804,
   0.01103199,
   0.01376409,
   0.0169183,
   0.02264574,
   0.02973374,
   0.05036246,
   0.0639743,
   0.09377988};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3026,Graph_from_ratio_fy3026,Graph_from_ratio_felx3026,Graph_from_ratio_fehx3026,Graph_from_ratio_fely3026,Graph_from_ratio_fehy3026);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3026 = new TH1F("Graph_Graph_from_ratio3026","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3026->SetMinimum(0);
   Graph_Graph_from_ratio3026->SetMaximum(1.016145);
   Graph_Graph_from_ratio3026->SetDirectory(0);
   Graph_Graph_from_ratio3026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3026->SetLineColor(ci);
   Graph_Graph_from_ratio3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3026);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
