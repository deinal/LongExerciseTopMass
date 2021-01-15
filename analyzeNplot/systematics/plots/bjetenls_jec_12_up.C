void bjetenls_jec_12_up()
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
   p1->Range(2.421687,-56.19468,7.240964,412.9276);
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
   
   TH1F *frame__75 = new TH1F("frame__75","t#bar{t}",20,3,7);
   frame__75->SetMinimum(0.1);
   frame__75->SetMaximum(408.2364);
   frame__75->SetEntries(505727);
   frame__75->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__75->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__75->SetMarkerColor(ci);
   frame__75->GetXaxis()->SetTitle("log(E)");
   frame__75->GetXaxis()->SetLabelFont(42);
   frame__75->GetXaxis()->SetLabelSize(0.035);
   frame__75->GetXaxis()->SetTitleSize(0.035);
   frame__75->GetXaxis()->SetTitleFont(42);
   frame__75->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__75->GetYaxis()->SetNoExponent();
   frame__75->GetYaxis()->SetLabelFont(42);
   frame__75->GetYaxis()->SetTitleSize(0.045);
   frame__75->GetYaxis()->SetTitleOffset(1.3);
   frame__75->GetYaxis()->SetTitleFont(42);
   frame__75->GetZaxis()->SetLabelFont(42);
   frame__75->GetZaxis()->SetLabelSize(0.035);
   frame__75->GetZaxis()->SetTitleSize(0.035);
   frame__75->GetZaxis()->SetTitleFont(42);
   frame__75->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_38 = new TH1F("mc_stack_38","mc",20,3,7);
   mc_stack_38->SetMinimum(-6.350547e-09);
   mc_stack_38->SetMaximum(329.7294);
   mc_stack_38->SetDirectory(0);
   mc_stack_38->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_38->SetLineColor(ci);
   mc_stack_38->GetXaxis()->SetLabelFont(42);
   mc_stack_38->GetXaxis()->SetLabelSize(0.035);
   mc_stack_38->GetXaxis()->SetTitleSize(0.035);
   mc_stack_38->GetXaxis()->SetTitleFont(42);
   mc_stack_38->GetYaxis()->SetLabelFont(42);
   mc_stack_38->GetYaxis()->SetLabelSize(0.035);
   mc_stack_38->GetYaxis()->SetTitleSize(0.035);
   mc_stack_38->GetYaxis()->SetTitleOffset(0);
   mc_stack_38->GetYaxis()->SetTitleFont(42);
   mc_stack_38->GetZaxis()->SetLabelFont(42);
   mc_stack_38->GetZaxis()->SetLabelSize(0.035);
   mc_stack_38->GetZaxis()->SetTitleSize(0.035);
   mc_stack_38->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_38);
   
   
   TH1F *bjetenls_jec_12_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_12_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(3,101.8193);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(4,217.8566);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(5,278.8456);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(6,300.7805);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(7,296.8214);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(8,263.3216);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(9,213.4683);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(10,158.6418);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(11,109.3592);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(12,68.59663);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(13,40.36527);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(14,22.32938);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(15,11.55903);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(16,5.376883);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(17,2.357877);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(18,0.8980923);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(19,0.3182483);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(20,0.1030707);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinContent(21,0.03895196);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(3,1.1076);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(4,1.485461);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(5,1.521441);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(6,1.431474);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(7,1.287279);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(8,1.097941);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(9,0.8955373);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(10,0.6993817);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(11,0.5256585);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(12,0.3772481);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(13,0.2617467);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(14,0.1762207);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(15,0.1148475);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(16,0.07094179);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(17,0.04261248);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(18,0.02375141);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(19,0.01283683);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(20,0.006619018);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetBinError(21,0.00356668);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetEntries(498776);
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_12_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_12_up_Diboson_stack_2 = new TH1F("bjetenls_jec_12_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(6,0.2638741);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(7,0.2207734);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(8,0.2116792);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(9,0.1432402);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(10,0.1146783);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(11,0.1119745);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(12,0.07864709);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(13,0.04963076);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(14,0.02116648);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(15,0.02603029);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(16,0.01348556);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(17,0.01082078);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(18,0.00651635);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(19,0.001952029);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(20,0.003080107);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinContent(21,0.001013407);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(6,0.04139625);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(7,0.03384887);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(8,0.03069763);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(9,0.02248453);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(10,0.01783293);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(11,0.01622524);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(12,0.01257556);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(13,0.009042869);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(14,0.005384825);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(15,0.005340733);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(16,0.003429968);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(17,0.002912592);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(18,0.001938285);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(19,0.0009793023);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(20,0.00109847);
   bjetenls_jec_12_up_Diboson_stack_2->SetBinError(21,0.0005762102);
   bjetenls_jec_12_up_Diboson_stack_2->SetEntries(543);
   bjetenls_jec_12_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_12_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_12_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_12_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_12_up_DY_stack_3 = new TH1F("bjetenls_jec_12_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(13,0.06267063);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(15,0.04630312);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(16,0.04307166);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_12_up_DY_stack_3->SetBinContent(18,0.03033275);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(13,0.06267063);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(15,0.04630312);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(16,0.04307166);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_12_up_DY_stack_3->SetBinError(18,0.03033275);
   bjetenls_jec_12_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_12_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_12_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_12_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_12_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_12_up_W_stack_4 = new TH1F("bjetenls_jec_12_up_W_stack_4","W",20,3,7);
   bjetenls_jec_12_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_12_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_12_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_12_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_12_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_12_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(4,8.944118);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(5,12.15923);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(6,12.10456);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(7,12.09774);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(8,10.98497);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(9,7.765508);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(10,6.333098);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(11,4.36854);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(12,2.961603);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(13,1.692556);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(14,0.9959962);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(15,0.6049255);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(16,0.3058055);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(17,0.1478682);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(18,0.06146304);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(19,0.0361015);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(20,0.01039652);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinContent(21,0.01079643);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(4,0.5398529);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(5,0.5750473);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(6,0.5176337);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(7,0.4691624);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(8,0.4053977);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(9,0.3074278);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(10,0.2524842);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(11,0.1896412);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(12,0.1418549);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(13,0.09702038);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(14,0.06655655);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(15,0.04743742);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(16,0.03030555);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(17,0.01923285);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(18,0.01096295);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(19,0.007824379);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(20,0.003625398);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetBinError(21,0.003445961);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetEntries(6384);
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_12_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_12_up_fx3075[21] = {
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
   Double_t Graph_from_bjetenls_jec_12_up_fy3075[21] = {
   0,
   0,
   93.02422,
   198.2472,
   255.3697,
   284.8477,
   282.3118,
   251.8655,
   202.8089,
   149.6942,
   101.1888,
   62.45509,
   36.72721,
   20.72369,
   10.46793,
   4.846694,
   2.083797,
   0.8500922,
   0.2845296,
   0.0873595,
   0};
   Double_t Graph_from_bjetenls_jec_12_up_felx3075[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_12_up_fely3075[21] = {
   0,
   0,
   9.627736,
   14.06844,
   15.98029,
   16.87743,
   16.80214,
   15.87027,
   14.2411,
   12.22154,
   10.04282,
   7.881793,
   6.032692,
   4.515395,
   3.183123,
   2.123945,
   1.323703,
   0.735965,
   0.2834597,
   0.0873595,
   0};
   Double_t Graph_from_bjetenls_jec_12_up_fehx3075[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_12_up_fehy3075[21] = {
   1.841055,
   1.841055,
   10.67972,
   15.10404,
   15.98029,
   16.87743,
   16.80214,
   15.87027,
   14.2411,
   13.26251,
   11.09266,
   8.945244,
   7.11544,
   5.625527,
   4.337859,
   3.350182,
   2.663193,
   2.241154,
   1.991809,
   1.889804,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_12_up_fx3075,Graph_from_bjetenls_jec_12_up_fy3075,Graph_from_bjetenls_jec_12_up_felx3075,Graph_from_bjetenls_jec_12_up_fehx3075,Graph_from_bjetenls_jec_12_up_fely3075,Graph_from_bjetenls_jec_12_up_fehy3075);
   grae->SetName("Graph_from_bjetenls_jec_12_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_12_up3075 = new TH1F("Graph_Graph_from_bjetenls_jec_12_up3075","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_12_up3075->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_12_up3075->SetMaximum(331.8976);
   Graph_Graph_from_bjetenls_jec_12_up3075->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_12_up3075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_12_up3075->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_up3075->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_12_up3075);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_12_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_12_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_12_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_12_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_12_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_12_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__76 = new TH1F("ratioframe__76","t#bar{t}",20,3,7);
   ratioframe__76->SetMinimum(0.46);
   ratioframe__76->SetMaximum(1.54);
   ratioframe__76->SetEntries(505727);

   ci = TColor::GetColor("#cc0000");
   ratioframe__76->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__76->SetMarkerColor(ci);
   ratioframe__76->GetXaxis()->SetTitle("log(E)");
   ratioframe__76->GetXaxis()->SetLabelFont(42);
   ratioframe__76->GetXaxis()->SetLabelSize(0);
   ratioframe__76->GetXaxis()->SetTitleSize(0);
   ratioframe__76->GetXaxis()->SetTitleOffset(0);
   ratioframe__76->GetXaxis()->SetTitleFont(42);
   ratioframe__76->GetYaxis()->SetTitle("Data/MC");
   ratioframe__76->GetYaxis()->SetNoExponent();
   ratioframe__76->GetYaxis()->SetNdivisions(5);
   ratioframe__76->GetYaxis()->SetLabelFont(42);
   ratioframe__76->GetYaxis()->SetLabelSize(0.18);
   ratioframe__76->GetYaxis()->SetTitleSize(0.2);
   ratioframe__76->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__76->GetYaxis()->SetTitleFont(42);
   ratioframe__76->GetZaxis()->SetLabelFont(42);
   ratioframe__76->GetZaxis()->SetLabelSize(0.035);
   ratioframe__76->GetZaxis()->SetTitleSize(0.035);
   ratioframe__76->GetZaxis()->SetTitleFont(42);
   ratioframe__76->Draw("");
   
   Double_t Graph_from_ratio_fx3076[20] = {
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
   Double_t Graph_from_ratio_fy3076[20] = {
   0,
   0,
   0.8683431,
   0.8716582,
   0.8747656,
   0.9070772,
   0.9106544,
   0.9161466,
   0.9161246,
   0.9060305,
   0.8876969,
   0.8697231,
   0.8709295,
   0.8847592,
   0.8554824,
   0.8444827,
   0.8278059,
   0.8531597,
   0.7985634,
   0.7495627};
   Double_t Graph_from_ratio_felx3076[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3076[20] = {
   0,
   0,
   0.01891591,
   0.01153558,
   0.009299282,
   0.008331496,
   0.007603407,
   0.00730152,
   0.00729597,
   0.007636644,
   0.008221625,
   0.009329442,
   0.01096723,
   0.01366905,
   0.01674031,
   0.02246141,
   0.02918258,
   0.04991999,
   0.06291139,
   0.09504531};
   Double_t Graph_from_ratio_fehx3076[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3076[20] = {
   0,
   0,
   0.01891591,
   0.01153558,
   0.009299282,
   0.008331496,
   0.007603407,
   0.00730152,
   0.00729597,
   0.007636644,
   0.008221625,
   0.009329442,
   0.01096723,
   0.01366905,
   0.01674031,
   0.02246141,
   0.02918258,
   0.04991999,
   0.06291139,
   0.09504531};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3076,Graph_from_ratio_fy3076,Graph_from_ratio_felx3076,Graph_from_ratio_fehx3076,Graph_from_ratio_fely3076,Graph_from_ratio_fehy3076);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3076 = new TH1F("Graph_Graph_from_ratio3076","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3076->SetMinimum(0);
   Graph_Graph_from_ratio3076->SetMaximum(1.015793);
   Graph_Graph_from_ratio3076->SetDirectory(0);
   Graph_Graph_from_ratio3076->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3076->SetLineColor(ci);
   Graph_Graph_from_ratio3076->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3076->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3076->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3076->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3076->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3076->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3076->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3076->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3076->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3076->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3076->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3076->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3076->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3076);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
