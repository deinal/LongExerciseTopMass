void bjetenls_jec_21_up()
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
   p1->Range(2.421687,-56.23317,7.240964,413.2099);
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
   
   TH1F *frame__55 = new TH1F("frame__55","t#bar{t}",20,3,7);
   frame__55->SetMinimum(0.1);
   frame__55->SetMaximum(408.5155);
   frame__55->SetEntries(506042);
   frame__55->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__55->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__55->SetMarkerColor(ci);
   frame__55->GetXaxis()->SetTitle("log(E)");
   frame__55->GetXaxis()->SetLabelFont(42);
   frame__55->GetXaxis()->SetLabelSize(0.035);
   frame__55->GetXaxis()->SetTitleSize(0.035);
   frame__55->GetXaxis()->SetTitleFont(42);
   frame__55->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__55->GetYaxis()->SetNoExponent();
   frame__55->GetYaxis()->SetLabelFont(42);
   frame__55->GetYaxis()->SetTitleSize(0.045);
   frame__55->GetYaxis()->SetTitleOffset(1.3);
   frame__55->GetYaxis()->SetTitleFont(42);
   frame__55->GetZaxis()->SetLabelFont(42);
   frame__55->GetZaxis()->SetLabelSize(0.035);
   frame__55->GetZaxis()->SetTitleSize(0.035);
   frame__55->GetZaxis()->SetTitleFont(42);
   frame__55->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_28 = new TH1F("mc_stack_28","mc",20,3,7);
   mc_stack_28->SetMinimum(-5.709917e-09);
   mc_stack_28->SetMaximum(329.9548);
   mc_stack_28->SetDirectory(0);
   mc_stack_28->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_28->SetLineColor(ci);
   mc_stack_28->GetXaxis()->SetLabelFont(42);
   mc_stack_28->GetXaxis()->SetLabelSize(0.035);
   mc_stack_28->GetXaxis()->SetTitleSize(0.035);
   mc_stack_28->GetXaxis()->SetTitleFont(42);
   mc_stack_28->GetYaxis()->SetLabelFont(42);
   mc_stack_28->GetYaxis()->SetLabelSize(0.035);
   mc_stack_28->GetYaxis()->SetTitleSize(0.035);
   mc_stack_28->GetYaxis()->SetTitleOffset(0);
   mc_stack_28->GetYaxis()->SetTitleFont(42);
   mc_stack_28->GetZaxis()->SetLabelFont(42);
   mc_stack_28->GetZaxis()->SetLabelSize(0.035);
   mc_stack_28->GetZaxis()->SetTitleSize(0.035);
   mc_stack_28->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_28);
   
   
   TH1F *bjetenls_jec_21_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_21_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(3,101.3762);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(4,217.948);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(5,279.2839);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(6,301.1325);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(7,298.348);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(8,264.5123);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(9,214.286);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(10,159.2871);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(11,109.351);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(12,68.49745);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(13,40.04509);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(14,22.13019);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(15,11.39612);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(16,5.29066);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(17,2.301056);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(18,0.8798987);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(19,0.3094129);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(20,0.103157);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinContent(21,0.03781168);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(3,1.105174);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(4,1.485679);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(5,1.522566);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(6,1.432333);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(7,1.290663);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(8,1.100448);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(9,0.8972605);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(10,0.7007878);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(11,0.5256054);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(12,0.3769938);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(13,0.2606991);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(14,0.1754773);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(15,0.1140226);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(16,0.07039525);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(17,0.04210393);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(18,0.02349773);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(19,0.01266525);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(20,0.006624459);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetBinError(21,0.003504387);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetEntries(499089);
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_21_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_21_up_Diboson_stack_2 = new TH1F("bjetenls_jec_21_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(3,0.1739445);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(4,0.2636597);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(5,0.2474178);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(6,0.2700275);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(7,0.219538);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(8,0.2214987);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(9,0.1355724);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(10,0.1180797);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(11,0.111332);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(12,0.08173852);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(13,0.04706303);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(14,0.02063207);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(15,0.02596749);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(16,0.01260417);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(17,0.01086719);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(18,0.006541988);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(19,0.001954654);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(20,0.003086851);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinContent(21,0.00101254);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(3,0.04366792);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(4,0.0509366);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(5,0.04426369);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(6,0.04184956);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(7,0.03366998);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(8,0.03148668);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(9,0.02180523);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(10,0.01808774);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(11,0.01618715);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(12,0.01282022);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(13,0.008806371);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(14,0.005239235);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(15,0.005330654);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(16,0.00331393);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(17,0.002924817);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(18,0.001945928);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(19,0.0009806427);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(20,0.001101122);
   bjetenls_jec_21_up_Diboson_stack_2->SetBinError(21,0.0005756746);
   bjetenls_jec_21_up_Diboson_stack_2->SetEntries(545);
   bjetenls_jec_21_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_21_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_21_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_21_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_21_up_DY_stack_3 = new TH1F("bjetenls_jec_21_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(3,0.6426123);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(4,0.3705601);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(5,0.6753153);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(6,0.8759887);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(7,0.868784);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(8,0.3999982);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(10,0.1302863);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(11,0.150773);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(12,0.1736702);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(13,0.06327172);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(14,0.07652262);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(15,0.04667705);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(16,0.04339794);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(17,0.0006878477);
   bjetenls_jec_21_up_DY_stack_3->SetBinContent(18,0.03048359);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(3,0.6426123);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(4,0.3705601);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(5,0.4778329);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(6,0.5066806);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(7,0.4346758);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(8,0.2834962);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(10,0.1302863);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(11,0.1103087);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(12,0.1228373);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(13,0.06327172);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(14,0.07652262);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(15,0.04667705);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(16,0.04339794);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(17,0.0006878478);
   bjetenls_jec_21_up_DY_stack_3->SetBinError(18,0.03048359);
   bjetenls_jec_21_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_21_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_21_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_21_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_21_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_21_up_W_stack_4 = new TH1F("bjetenls_jec_21_up_W_stack_4","W",20,3,7);
   bjetenls_jec_21_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_21_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_21_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_21_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_21_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_21_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(3,4.551965);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(4,9.060912);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(5,12.15303);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(6,11.96423);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(7,12.15161);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(8,11.02362);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(9,7.83987);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(10,6.331995);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(11,4.371757);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(12,2.925913);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(13,1.720123);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(14,0.9862645);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(15,0.5930191);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(16,0.2968839);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(17,0.1484482);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(18,0.0635047);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(19,0.0343845);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(20,0.01042057);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinContent(21,0.01080858);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(3,0.4216121);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(4,0.5431915);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(5,0.5742358);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(6,0.5144663);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(7,0.4705144);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(8,0.4060608);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(9,0.3090444);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(10,0.2523195);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(11,0.1896695);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(12,0.1412226);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(13,0.0978036);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(14,0.06612818);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(15,0.04698067);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(16,0.02985539);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(17,0.0193089);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(18,0.01115274);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(19,0.007632739);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(20,0.003634321);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetBinError(21,0.00344984);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetEntries(6384);
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_21_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_21_up_fx3055[21] = {
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
   Double_t Graph_from_bjetenls_jec_21_up_fy3055[21] = {
   0,
   0,
   92.01083,
   198.1551,
   256.0673,
   285.2213,
   282.7614,
   252.66,
   203.3923,
   149.8851,
   101.1446,
   62.32762,
   36.53062,
   20.5836,
   10.39443,
   4.752763,
   2.063832,
   0.8387956,
   0.2768118,
   0.08638794,
   0};
   Double_t Graph_from_bjetenls_jec_21_up_felx3055[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_21_up_fely3055[21] = {
   0,
   0,
   9.57496,
   14.06517,
   16.0021,
   16.88849,
   16.81551,
   15.89528,
   14.26157,
   12.22934,
   10.04062,
   7.873702,
   6.016374,
   4.499856,
   3.171556,
   2.101723,
   1.316177,
   0.7287161,
   0.2759231,
   0.08638794,
   0};
   Double_t Graph_from_bjetenls_jec_21_up_fehx3055[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_21_up_fehy3055[21] = {
   1.841055,
   1.841055,
   10.62723,
   15.10078,
   16.0021,
   16.88849,
   16.81551,
   15.89528,
   14.26157,
   13.27029,
   11.09047,
   8.937218,
   7.099345,
   5.610361,
   4.326834,
   3.330136,
   2.657204,
   2.236644,
   1.987999,
   1.889275,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_21_up_fx3055,Graph_from_bjetenls_jec_21_up_fy3055,Graph_from_bjetenls_jec_21_up_felx3055,Graph_from_bjetenls_jec_21_up_fehx3055,Graph_from_bjetenls_jec_21_up_fely3055,Graph_from_bjetenls_jec_21_up_fehy3055);
   grae->SetName("Graph_from_bjetenls_jec_21_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_21_up3055 = new TH1F("Graph_Graph_from_bjetenls_jec_21_up3055","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_21_up3055->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_21_up3055->SetMaximum(332.3207);
   Graph_Graph_from_bjetenls_jec_21_up3055->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_21_up3055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_21_up3055->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_up3055->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_21_up3055);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_21_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_21_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_21_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_21_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_21_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_21_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__56 = new TH1F("ratioframe__56","t#bar{t}",20,3,7);
   ratioframe__56->SetMinimum(0.46);
   ratioframe__56->SetMaximum(1.54);
   ratioframe__56->SetEntries(506042);

   ci = TColor::GetColor("#cc0000");
   ratioframe__56->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__56->SetMarkerColor(ci);
   ratioframe__56->GetXaxis()->SetTitle("log(E)");
   ratioframe__56->GetXaxis()->SetLabelFont(42);
   ratioframe__56->GetXaxis()->SetLabelSize(0);
   ratioframe__56->GetXaxis()->SetTitleSize(0);
   ratioframe__56->GetXaxis()->SetTitleOffset(0);
   ratioframe__56->GetXaxis()->SetTitleFont(42);
   ratioframe__56->GetYaxis()->SetTitle("Data/MC");
   ratioframe__56->GetYaxis()->SetNoExponent();
   ratioframe__56->GetYaxis()->SetNdivisions(5);
   ratioframe__56->GetYaxis()->SetLabelFont(42);
   ratioframe__56->GetYaxis()->SetLabelSize(0.18);
   ratioframe__56->GetYaxis()->SetTitleSize(0.2);
   ratioframe__56->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__56->GetYaxis()->SetTitleFont(42);
   ratioframe__56->GetZaxis()->SetLabelFont(42);
   ratioframe__56->GetZaxis()->SetLabelSize(0.035);
   ratioframe__56->GetZaxis()->SetTitleSize(0.035);
   ratioframe__56->GetZaxis()->SetTitleFont(42);
   ratioframe__56->Draw("");
   
   Double_t Graph_from_ratio_fx3056[20] = {
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
   Double_t Graph_from_ratio_fy3056[20] = {
   0,
   0,
   0.8619708,
   0.8704636,
   0.8758639,
   0.9076464,
   0.9074851,
   0.9149129,
   0.9151039,
   0.9036436,
   0.887351,
   0.8695409,
   0.8723616,
   0.8867041,
   0.8617656,
   0.842159,
   0.8385953,
   0.8555394,
   0.8006078,
   0.7404826};
   Double_t Graph_from_ratio_felx3056[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3056[20] = {
   0,
   0,
   0.01886086,
   0.01152254,
   0.009298474,
   0.008329655,
   0.007566305,
   0.007278274,
   0.007276418,
   0.007607479,
   0.008219165,
   0.009336613,
   0.01102236,
   0.01375494,
   0.01695083,
   0.0226343,
   0.02978007,
   0.05062448,
   0.06392598,
   0.0943077};
   Double_t Graph_from_ratio_fehx3056[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3056[20] = {
   0,
   0,
   0.01886086,
   0.01152254,
   0.009298474,
   0.008329655,
   0.007566305,
   0.007278274,
   0.007276418,
   0.007607479,
   0.008219165,
   0.009336613,
   0.01102236,
   0.01375494,
   0.01695083,
   0.0226343,
   0.02978007,
   0.05062448,
   0.06392598,
   0.0943077};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3056,Graph_from_ratio_fy3056,Graph_from_ratio_felx3056,Graph_from_ratio_fehx3056,Graph_from_ratio_fely3056,Graph_from_ratio_fehy3056);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3056 = new TH1F("Graph_Graph_from_ratio3056","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3056->SetMinimum(0);
   Graph_Graph_from_ratio3056->SetMaximum(1.014618);
   Graph_Graph_from_ratio3056->SetDirectory(0);
   Graph_Graph_from_ratio3056->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3056->SetLineColor(ci);
   Graph_Graph_from_ratio3056->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3056->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3056->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3056->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3056->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3056->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3056->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3056->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3056->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3056->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3056->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3056->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3056->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3056);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
