void bjetenls_jec_18_up()
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
   p1->Range(2.421687,-56.13888,7.240964,412.5185);
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
   
   TH1F *frame__79 = new TH1F("frame__79","t#bar{t}",20,3,7);
   frame__79->SetMinimum(0.1);
   frame__79->SetMaximum(407.8319);
   frame__79->SetEntries(505014);
   frame__79->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__79->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__79->SetMarkerColor(ci);
   frame__79->GetXaxis()->SetTitle("log(E)");
   frame__79->GetXaxis()->SetLabelFont(42);
   frame__79->GetXaxis()->SetLabelSize(0.035);
   frame__79->GetXaxis()->SetTitleSize(0.035);
   frame__79->GetXaxis()->SetTitleFont(42);
   frame__79->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__79->GetYaxis()->SetNoExponent();
   frame__79->GetYaxis()->SetLabelFont(42);
   frame__79->GetYaxis()->SetTitleSize(0.045);
   frame__79->GetYaxis()->SetTitleOffset(1.3);
   frame__79->GetYaxis()->SetTitleFont(42);
   frame__79->GetZaxis()->SetLabelFont(42);
   frame__79->GetZaxis()->SetLabelSize(0.035);
   frame__79->GetZaxis()->SetTitleSize(0.035);
   frame__79->GetZaxis()->SetTitleFont(42);
   frame__79->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_40 = new TH1F("mc_stack_40","mc",20,3,7);
   mc_stack_40->SetMinimum(-6.350547e-09);
   mc_stack_40->SetMaximum(329.4027);
   mc_stack_40->SetDirectory(0);
   mc_stack_40->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_40->SetLineColor(ci);
   mc_stack_40->GetXaxis()->SetLabelFont(42);
   mc_stack_40->GetXaxis()->SetLabelSize(0.035);
   mc_stack_40->GetXaxis()->SetTitleSize(0.035);
   mc_stack_40->GetXaxis()->SetTitleFont(42);
   mc_stack_40->GetYaxis()->SetLabelFont(42);
   mc_stack_40->GetYaxis()->SetLabelSize(0.035);
   mc_stack_40->GetYaxis()->SetTitleSize(0.035);
   mc_stack_40->GetYaxis()->SetTitleOffset(0);
   mc_stack_40->GetYaxis()->SetTitleFont(42);
   mc_stack_40->GetZaxis()->SetLabelFont(42);
   mc_stack_40->GetZaxis()->SetLabelSize(0.035);
   mc_stack_40->GetZaxis()->SetTitleSize(0.035);
   mc_stack_40->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_40);
   
   
   TH1F *bjetenls_jec_18_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_18_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(3,101.7504);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(4,217.7044);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(5,278.6719);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(6,300.5911);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(7,296.5284);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(8,263.509);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(9,213.5157);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(10,158.7906);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(11,109.251);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(12,68.47297);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(13,40.04586);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(14,22.15364);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(15,11.44747);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(16,5.308299);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(17,2.33195);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(18,0.8951257);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(19,0.3180445);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(20,0.1029692);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinContent(21,0.03923738);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(3,1.107226);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(4,1.484938);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(5,1.520977);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(6,1.431043);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(7,1.286652);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(8,1.098349);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(9,0.8956216);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(10,0.6997104);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(11,0.525375);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(12,0.376935);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(13,0.2606704);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(14,0.1755548);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(15,0.1142733);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(16,0.07049902);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(17,0.04238256);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(18,0.02371101);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(19,0.01283376);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(20,0.006612516);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetBinError(21,0.003578932);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetEntries(498088);
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_18_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_18_up_Diboson_stack_2 = new TH1F("bjetenls_jec_18_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(7,0.2197626);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(8,0.2161494);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(9,0.1355519);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(10,0.1155269);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(11,0.1112079);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(12,0.07986011);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(13,0.04874213);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(14,0.02059314);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(15,0.02496366);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(16,0.01350178);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(17,0.01082969);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(18,0.006519143);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(19,0.001949682);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(20,0.003076981);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinContent(21,0.001009732);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(7,0.03370464);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(8,0.03102406);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(9,0.0218016);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(10,0.01790662);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(11,0.01616917);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(12,0.0126799);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(13,0.008965982);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(14,0.00522952);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(15,0.005233328);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(16,0.003433908);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(17,0.002914971);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(18,0.001939093);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(19,0.0009781406);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(20,0.001097346);
   bjetenls_jec_18_up_Diboson_stack_2->SetBinError(21,0.0005740384);
   bjetenls_jec_18_up_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_18_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_18_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_18_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_18_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_18_up_DY_stack_3 = new TH1F("bjetenls_jec_18_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(13,0.06301532);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(15,0.04644881);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(16,0.04318032);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_18_up_DY_stack_3->SetBinContent(18,0.03035438);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(13,0.06301532);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(15,0.04644881);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(16,0.04318032);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_18_up_DY_stack_3->SetBinError(18,0.03035438);
   bjetenls_jec_18_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_18_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_18_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_18_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_18_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_18_up_W_stack_4 = new TH1F("bjetenls_jec_18_up_W_stack_4","W",20,3,7);
   bjetenls_jec_18_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_18_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_18_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_18_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_18_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_18_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(4,8.944118);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(6,11.98973);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(7,12.04844);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(8,10.92665);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(9,7.783348);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(10,6.292949);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(11,4.414537);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(12,2.918106);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(13,1.692838);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(14,0.9995692);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(15,0.5931121);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(16,0.3027555);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(17,0.1480107);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(18,0.06148501);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(19,0.03607988);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(20,0.01037758);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinContent(21,0.01076239);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(4,0.5398529);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(6,0.5150717);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(7,0.4682173);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(8,0.4043667);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(9,0.307889);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(10,0.251681);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(11,0.1905788);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(12,0.1408904);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(13,0.0970204);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(14,0.06658692);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(15,0.04699259);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(16,0.03014822);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(17,0.01925161);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(18,0.010967);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(19,0.007819515);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(20,0.0036186);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetBinError(21,0.003434664);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetEntries(6362);
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_18_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_18_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_18_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_18_up_fx3079[21] = {
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
   Double_t Graph_from_bjetenls_jec_18_up_fy3079[21] = {
   0,
   0,
   92.7355,
   198.0152,
   255.3093,
   284.5457,
   281.9959,
   251.9882,
   202.8124,
   149.5519,
   101.033,
   62.37757,
   36.51765,
   20.57743,
   10.43332,
   4.81117,
   2.076736,
   0.8470971,
   0.2834172,
   0.08855236,
   0};
   Double_t Graph_from_bjetenls_jec_18_up_felx3079[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_18_up_fely3079[21] = {
   0,
   0,
   9.61273,
   14.0602,
   15.9784,
   16.86848,
   16.79273,
   15.87413,
   14.24122,
   12.21571,
   10.03506,
   7.876874,
   6.015297,
   4.49917,
   3.177683,
   2.115568,
   1.321046,
   0.7340485,
   0.2823749,
   0.08855236,
   0};
   Double_t Graph_from_bjetenls_jec_18_up_fehx3079[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_18_up_fehy3079[21] = {
   1.841055,
   1.841055,
   10.66479,
   15.09582,
   15.9784,
   16.86848,
   16.79273,
   15.87413,
   14.24122,
   13.2567,
   11.08494,
   8.940364,
   7.098282,
   5.609691,
   4.332673,
   3.342621,
   2.661078,
   2.23996,
   1.991261,
   1.890453,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_18_up_fx3079,Graph_from_bjetenls_jec_18_up_fy3079,Graph_from_bjetenls_jec_18_up_felx3079,Graph_from_bjetenls_jec_18_up_fehx3079,Graph_from_bjetenls_jec_18_up_fely3079,Graph_from_bjetenls_jec_18_up_fehy3079);
   grae->SetName("Graph_from_bjetenls_jec_18_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_18_up3079 = new TH1F("Graph_Graph_from_bjetenls_jec_18_up3079","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_18_up3079->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_18_up3079->SetMaximum(331.5557);
   Graph_Graph_from_bjetenls_jec_18_up3079->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_18_up3079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_18_up3079->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_18_up3079->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_18_up3079);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_18_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_18_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_18_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_18_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_18_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_18_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__80 = new TH1F("ratioframe__80","t#bar{t}",20,3,7);
   ratioframe__80->SetMinimum(0.46);
   ratioframe__80->SetMaximum(1.54);
   ratioframe__80->SetEntries(505014);

   ci = TColor::GetColor("#cc0000");
   ratioframe__80->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__80->SetMarkerColor(ci);
   ratioframe__80->GetXaxis()->SetTitle("log(E)");
   ratioframe__80->GetXaxis()->SetLabelFont(42);
   ratioframe__80->GetXaxis()->SetLabelSize(0);
   ratioframe__80->GetXaxis()->SetTitleSize(0);
   ratioframe__80->GetXaxis()->SetTitleOffset(0);
   ratioframe__80->GetXaxis()->SetTitleFont(42);
   ratioframe__80->GetYaxis()->SetTitle("Data/MC");
   ratioframe__80->GetYaxis()->SetNoExponent();
   ratioframe__80->GetYaxis()->SetNdivisions(5);
   ratioframe__80->GetYaxis()->SetLabelFont(42);
   ratioframe__80->GetYaxis()->SetLabelSize(0.18);
   ratioframe__80->GetYaxis()->SetTitleSize(0.2);
   ratioframe__80->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__80->GetYaxis()->SetTitleFont(42);
   ratioframe__80->GetZaxis()->SetLabelFont(42);
   ratioframe__80->GetZaxis()->SetLabelSize(0.035);
   ratioframe__80->GetZaxis()->SetTitleSize(0.035);
   ratioframe__80->GetZaxis()->SetTitleFont(42);
   ratioframe__80->Draw("");
   
   Double_t Graph_from_ratio_fx3080[20] = {
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
   Double_t Graph_from_ratio_fy3080[20] = {
   0,
   0,
   0.8662054,
   0.8712213,
   0.8751606,
   0.9070145,
   0.910644,
   0.9161476,
   0.915902,
   0.9045697,
   0.8868197,
   0.8706555,
   0.8725749,
   0.8850421,
   0.8614044,
   0.8488698,
   0.8335361,
   0.8526528,
   0.7959501,
   0.7606038};
   Double_t Graph_from_ratio_felx3080[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3080[20] = {
   0,
   0,
   0.01889378,
   0.0115361,
   0.009305134,
   0.008334511,
   0.007607526,
   0.007299275,
   0.007293767,
   0.007625121,
   0.008219423,
   0.009346157,
   0.01102399,
   0.01372765,
   0.01690712,
   0.02269941,
   0.02947198,
   0.0500033,
   0.06280837,
   0.09602915};
   Double_t Graph_from_ratio_fehx3080[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3080[20] = {
   0,
   0,
   0.01889378,
   0.0115361,
   0.009305134,
   0.008334511,
   0.007607526,
   0.007299275,
   0.007293767,
   0.007625121,
   0.008219423,
   0.009346157,
   0.01102399,
   0.01372765,
   0.01690712,
   0.02269941,
   0.02947198,
   0.0500033,
   0.06280837,
   0.09602915};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3080,Graph_from_ratio_fy3080,Graph_from_ratio_felx3080,Graph_from_ratio_fehx3080,Graph_from_ratio_fely3080,Graph_from_ratio_fehy3080);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3080 = new TH1F("Graph_Graph_from_ratio3080","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3080->SetMinimum(0);
   Graph_Graph_from_ratio3080->SetMaximum(1.015792);
   Graph_Graph_from_ratio3080->SetDirectory(0);
   Graph_Graph_from_ratio3080->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3080->SetLineColor(ci);
   Graph_Graph_from_ratio3080->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3080->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3080->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3080->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3080->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3080->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3080->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3080->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3080->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3080->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3080->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3080->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3080->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3080);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
