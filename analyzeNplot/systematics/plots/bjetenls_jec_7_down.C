void bjetenls_jec_7_down()
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
   p1->Range(2.421687,-56.10938,7.240964,412.3021);
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
   
   TH1F *frame__3 = new TH1F("frame__3","t#bar{t}",20,3,7);
   frame__3->SetMinimum(0.1);
   frame__3->SetMaximum(407.618);
   frame__3->SetEntries(504859);
   frame__3->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__3->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__3->SetMarkerColor(ci);
   frame__3->GetXaxis()->SetTitle("log(E)");
   frame__3->GetXaxis()->SetLabelFont(42);
   frame__3->GetXaxis()->SetLabelSize(0.035);
   frame__3->GetXaxis()->SetTitleSize(0.035);
   frame__3->GetXaxis()->SetTitleFont(42);
   frame__3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__3->GetYaxis()->SetNoExponent();
   frame__3->GetYaxis()->SetLabelFont(42);
   frame__3->GetYaxis()->SetTitleSize(0.045);
   frame__3->GetYaxis()->SetTitleOffset(1.3);
   frame__3->GetYaxis()->SetTitleFont(42);
   frame__3->GetZaxis()->SetLabelFont(42);
   frame__3->GetZaxis()->SetLabelSize(0.035);
   frame__3->GetZaxis()->SetTitleSize(0.035);
   frame__3->GetZaxis()->SetTitleFont(42);
   frame__3->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_2 = new TH1F("mc_stack_2","mc",20,3,7);
   mc_stack_2->SetMinimum(-6.909948e-09);
   mc_stack_2->SetMaximum(329.2299);
   mc_stack_2->SetDirectory(0);
   mc_stack_2->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_2->SetLineColor(ci);
   mc_stack_2->GetXaxis()->SetLabelFont(42);
   mc_stack_2->GetXaxis()->SetLabelSize(0.035);
   mc_stack_2->GetXaxis()->SetTitleSize(0.035);
   mc_stack_2->GetXaxis()->SetTitleFont(42);
   mc_stack_2->GetYaxis()->SetLabelFont(42);
   mc_stack_2->GetYaxis()->SetLabelSize(0.035);
   mc_stack_2->GetYaxis()->SetTitleSize(0.035);
   mc_stack_2->GetYaxis()->SetTitleOffset(0);
   mc_stack_2->GetYaxis()->SetTitleFont(42);
   mc_stack_2->GetZaxis()->SetLabelFont(42);
   mc_stack_2->GetZaxis()->SetLabelSize(0.035);
   mc_stack_2->GetZaxis()->SetTitleSize(0.035);
   mc_stack_2->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_2);
   
   
   TH1F *bjetenls_jec_7_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_7_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(3,101.4787);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(4,217.659);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(5,278.7599);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(6,300.4538);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(7,296.5566);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(8,263.7278);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(9,213.491);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(10,158.8178);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(11,109.1458);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(12,68.40002);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(13,40.04495);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(14,22.13104);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(15,11.44312);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(16,5.305621);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(17,2.321469);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(18,0.8816989);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(19,0.3148251);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(20,0.1040127);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinContent(21,0.03851187);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(3,1.105678);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(4,1.484931);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(5,1.521121);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(6,1.430658);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(7,1.286728);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(8,1.098869);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(9,0.8955756);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(10,0.6997696);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(11,0.5251275);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(12,0.3767323);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(13,0.2606918);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(14,0.1754753);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(15,0.1142575);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(16,0.07048677);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(17,0.04227994);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(18,0.02352253);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(19,0.0127742);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(20,0.006652119);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetBinError(21,0.00354015);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetEntries(497940);
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_7_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_7_down_Diboson_stack_2 = new TH1F("bjetenls_jec_7_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(3,0.1617632);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(4,0.2643968);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(5,0.2464911);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(6,0.2571152);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(7,0.2198618);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(8,0.2162779);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(9,0.1356722);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(10,0.1181741);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(11,0.1086933);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(12,0.07991023);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(13,0.04877381);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(14,0.02060424);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(15,0.02592076);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(16,0.01258289);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(17,0.01084448);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(18,0.006528818);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(19,0.001952303);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(20,0.003082435);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinContent(21,0.001011794);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(3,0.04191369);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(4,0.0510794);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(5,0.04411145);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(6,0.04084117);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(7,0.03372006);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(8,0.03104121);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(9,0.02182066);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(10,0.01810178);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(11,0.01597147);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(12,0.01268758);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(13,0.008971694);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(14,0.005232277);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(15,0.005320945);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(16,0.003308434);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(17,0.00291883);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(18,0.001941995);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(19,0.0009794555);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(20,0.001099375);
   bjetenls_jec_7_down_Diboson_stack_2->SetBinError(21,0.0005752458);
   bjetenls_jec_7_down_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_7_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_7_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_7_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_7_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_7_down_DY_stack_3 = new TH1F("bjetenls_jec_7_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(3,0.6447726);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(4,0.3714856);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(5,0.6791548);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(6,0.8801603);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(7,0.8705195);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(8,0.400044);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(10,0.1303053);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(11,0.1505729);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(12,0.1734637);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(13,0.06309967);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(14,0.07643843);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(15,0.04652335);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(16,0.04325502);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(17,0.0006871631);
   bjetenls_jec_7_down_DY_stack_3->SetBinContent(18,0.03040493);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(3,0.6447727);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(4,0.3714856);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(5,0.4805502);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(6,0.5090978);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(7,0.4355278);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(8,0.283529);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(10,0.1303053);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(11,0.1101601);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(12,0.1226906);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(13,0.06309967);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(14,0.07643843);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(15,0.04652335);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(16,0.04325502);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(17,0.0006871631);
   bjetenls_jec_7_down_DY_stack_3->SetBinError(18,0.03040493);
   bjetenls_jec_7_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_7_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_7_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_7_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_7_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_7_down_W_stack_4 = new TH1F("bjetenls_jec_7_down_W_stack_4","W",20,3,7);
   bjetenls_jec_7_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_7_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_7_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_7_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_7_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_7_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(3,4.499246);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(4,8.887829);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(5,12.11711);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(6,11.96123);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(7,12.05818);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(8,10.90694);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(9,7.789485);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(10,6.316635);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(11,4.372815);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(12,2.91712);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(13,1.694015);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(14,1.000338);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(15,0.5937362);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(16,0.3030541);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(17,0.1481804);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(18,0.06338437);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(19,0.03432682);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(20,0.01039997);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinContent(21,0.01079158);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(3,0.4193368);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(4,0.5381161);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(5,0.5738263);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(6,0.5143202);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(7,0.4685312);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(8,0.4041593);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(9,0.307958);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(10,0.2521123);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(11,0.1896787);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(12,0.140961);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(13,0.09708767);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(14,0.06663736);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(15,0.04704177);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(16,0.03017768);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(17,0.01927383);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(18,0.01113125);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(19,0.007619954);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(20,0.003626689);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetBinError(21,0.003444178);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetEntries(6355);
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_7_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_7_down_fx3003[21] = {
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
   Double_t Graph_from_bjetenls_jec_7_down_fy3003[21] = {
   0,
   0,
   93.20581,
   197.2603,
   255.3084,
   284.3933,
   282.2469,
   251.9935,
   202.7193,
   149.3627,
   100.8878,
   62.2663,
   36.48634,
   20.58696,
   10.41765,
   4.780983,
   2.076053,
   0.8359161,
   0.2831958,
   0.08628748,
   0};
   Double_t Graph_from_bjetenls_jec_7_down_felx3003[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_7_down_fely3003[21] = {
   0,
   0,
   9.637163,
   14.03332,
   15.97837,
   16.86397,
   16.8002,
   15.8743,
   14.23795,
   12.20796,
   10.02783,
   7.869807,
   6.012693,
   4.500229,
   3.175215,
   2.108424,
   1.320789,
   0.7268594,
   0.2821589,
   0.08628748,
   0};
   Double_t Graph_from_bjetenls_jec_7_down_fehx3003[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_7_down_fehy3003[21] = {
   1.841055,
   1.841055,
   10.6891,
   15.06901,
   15.97837,
   16.86397,
   16.8002,
   15.8743,
   14.23795,
   13.24898,
   11.07774,
   8.933354,
   7.095714,
   5.610725,
   4.330321,
   3.336176,
   2.660873,
   2.235492,
   1.991152,
   1.88922,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_7_down_fx3003,Graph_from_bjetenls_jec_7_down_fy3003,Graph_from_bjetenls_jec_7_down_felx3003,Graph_from_bjetenls_jec_7_down_fehx3003,Graph_from_bjetenls_jec_7_down_fely3003,Graph_from_bjetenls_jec_7_down_fehy3003);
   grae->SetName("Graph_from_bjetenls_jec_7_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_7_down3003 = new TH1F("Graph_Graph_from_bjetenls_jec_7_down3003","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_7_down3003->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_7_down3003->SetMaximum(331.383);
   Graph_Graph_from_bjetenls_jec_7_down3003->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_7_down3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_7_down3003->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_down3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_7_down3003);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_7_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_7_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_7_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_7_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_7_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_7_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__4 = new TH1F("ratioframe__4","t#bar{t}",20,3,7);
   ratioframe__4->SetMinimum(0.46);
   ratioframe__4->SetMaximum(1.54);
   ratioframe__4->SetEntries(504859);

   ci = TColor::GetColor("#cc0000");
   ratioframe__4->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__4->SetMarkerColor(ci);
   ratioframe__4->GetXaxis()->SetTitle("log(E)");
   ratioframe__4->GetXaxis()->SetLabelFont(42);
   ratioframe__4->GetXaxis()->SetLabelSize(0);
   ratioframe__4->GetXaxis()->SetTitleSize(0);
   ratioframe__4->GetXaxis()->SetTitleOffset(0);
   ratioframe__4->GetXaxis()->SetTitleFont(42);
   ratioframe__4->GetYaxis()->SetTitle("Data/MC");
   ratioframe__4->GetYaxis()->SetNoExponent();
   ratioframe__4->GetYaxis()->SetNdivisions(5);
   ratioframe__4->GetYaxis()->SetLabelFont(42);
   ratioframe__4->GetYaxis()->SetLabelSize(0.18);
   ratioframe__4->GetYaxis()->SetTitleSize(0.2);
   ratioframe__4->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__4->GetYaxis()->SetTitleFont(42);
   ratioframe__4->GetZaxis()->SetLabelFont(42);
   ratioframe__4->GetZaxis()->SetLabelSize(0.035);
   ratioframe__4->GetZaxis()->SetTitleSize(0.035);
   ratioframe__4->GetZaxis()->SetTitleFont(42);
   ratioframe__4->Draw("");
   
   Double_t Graph_from_ratio_fx3004[20] = {
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
   Double_t Graph_from_ratio_fy3004[20] = {
   0,
   0,
   0.8728408,
   0.8682889,
   0.8749353,
   0.9070045,
   0.9113406,
   0.915504,
   0.9155579,
   0.9031323,
   0.8867088,
   0.8699993,
   0.8718185,
   0.8862831,
   0.8603018,
   0.8440237,
   0.8367196,
   0.8512236,
   0.806586,
   0.7343922};
   Double_t Graph_from_ratio_felx3004[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3004[20] = {
   0,
   0,
   0.01901339,
   0.01151265,
   0.009302312,
   0.008336832,
   0.007611215,
   0.007292938,
   0.007291973,
   0.007615993,
   0.008223173,
   0.009346748,
   0.01101903,
   0.0137485,
   0.01689577,
   0.02262294,
   0.02960445,
   0.0503467,
   0.06371907,
   0.09342206};
   Double_t Graph_from_ratio_fehx3004[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3004[20] = {
   0,
   0,
   0.01901339,
   0.01151265,
   0.009302312,
   0.008336832,
   0.007611215,
   0.007292938,
   0.007291973,
   0.007615993,
   0.008223173,
   0.009346748,
   0.01101903,
   0.0137485,
   0.01689577,
   0.02262294,
   0.02960445,
   0.0503467,
   0.06371907,
   0.09342206};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3004,Graph_from_ratio_fy3004,Graph_from_ratio_felx3004,Graph_from_ratio_fehx3004,Graph_from_ratio_fely3004,Graph_from_ratio_fehy3004);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3004 = new TH1F("Graph_Graph_from_ratio3004","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3004->SetMinimum(0);
   Graph_Graph_from_ratio3004->SetMaximum(1.015135);
   Graph_Graph_from_ratio3004->SetDirectory(0);
   Graph_Graph_from_ratio3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3004->SetLineColor(ci);
   Graph_Graph_from_ratio3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3004);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
