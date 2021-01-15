void bjetenls_jer_up()
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
   p1->Range(2.421687,-56.11338,7.240964,412.3315);
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
   
   TH1F *frame__113 = new TH1F("frame__113","t#bar{t}",20,3,7);
   frame__113->SetMinimum(0.1);
   frame__113->SetMaximum(407.647);
   frame__113->SetEntries(510225);
   frame__113->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__113->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__113->SetMarkerColor(ci);
   frame__113->GetXaxis()->SetTitle("log(E)");
   frame__113->GetXaxis()->SetLabelFont(42);
   frame__113->GetXaxis()->SetLabelSize(0.035);
   frame__113->GetXaxis()->SetTitleSize(0.035);
   frame__113->GetXaxis()->SetTitleFont(42);
   frame__113->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   frame__113->GetYaxis()->SetNoExponent();
   frame__113->GetYaxis()->SetLabelFont(42);
   frame__113->GetYaxis()->SetTitleSize(0.045);
   frame__113->GetYaxis()->SetTitleOffset(1.3);
   frame__113->GetYaxis()->SetTitleFont(42);
   frame__113->GetZaxis()->SetLabelFont(42);
   frame__113->GetZaxis()->SetLabelSize(0.035);
   frame__113->GetZaxis()->SetTitleSize(0.035);
   frame__113->GetZaxis()->SetTitleFont(42);
   frame__113->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_57 = new TH1F("mc_stack_57","mc",20,3,7);
   mc_stack_57->SetMinimum(-5.86725e-09);
   mc_stack_57->SetMaximum(329.2534);
   mc_stack_57->SetDirectory(0);
   mc_stack_57->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_57->SetLineColor(ci);
   mc_stack_57->GetXaxis()->SetLabelFont(42);
   mc_stack_57->GetXaxis()->SetLabelSize(0.035);
   mc_stack_57->GetXaxis()->SetTitleSize(0.035);
   mc_stack_57->GetXaxis()->SetTitleFont(42);
   mc_stack_57->GetYaxis()->SetLabelFont(42);
   mc_stack_57->GetYaxis()->SetLabelSize(0.035);
   mc_stack_57->GetYaxis()->SetTitleSize(0.035);
   mc_stack_57->GetYaxis()->SetTitleOffset(0);
   mc_stack_57->GetYaxis()->SetTitleFont(42);
   mc_stack_57->GetZaxis()->SetLabelFont(42);
   mc_stack_57->GetZaxis()->SetLabelSize(0.035);
   mc_stack_57->GetZaxis()->SetTitleSize(0.035);
   mc_stack_57->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_57);
   
   
   TH1F *bjetenls_jer_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jer_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(3,100.4384);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(4,216.0723);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(5,278.8934);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(6,300.3386);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(7,298.4244);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(8,265.4851);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(9,216.7454);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(10,161.1303);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(11,111.1947);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(12,69.65594);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(13,40.88957);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(14,22.58443);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(15,11.65964);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(16,5.408295);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(17,2.363436);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(18,0.8953107);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(19,0.3210034);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(20,0.1048013);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinContent(21,0.03876704);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(3,1.100431);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(4,1.479753);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(5,1.521554);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(6,1.43025);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(7,1.290739);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(8,1.102536);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(9,0.9023249);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(10,0.7048699);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(11,0.5300448);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(12,0.3800792);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(13,0.2634243);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(14,0.1772102);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(15,0.11533);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(16,0.07116837);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(17,0.04265255);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(18,0.02370043);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(19,0.01289663);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(20,0.006668624);
   bjetenls_jer_up_t#bar{t}_stack_1->SetBinError(21,0.003549828);
   bjetenls_jer_up_t#bar{t}_stack_1->SetEntries(503147);
   bjetenls_jer_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jer_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jer_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jer_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_up_t#bar{t}_stack_1->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jer_up_Diboson_stack_2 = new TH1F("bjetenls_jer_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(3,0.157183);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(4,0.2900375);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(5,0.2322372);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(6,0.2716288);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(7,0.2397552);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(8,0.2237923);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(9,0.147016);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(10,0.1104716);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(11,0.1187847);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(12,0.08536401);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(13,0.05055801);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(14,0.02020562);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(15,0.02839261);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(16,0.01342268);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(17,0.01079286);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(18,0.006477126);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(19,0.001941332);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(20,0.003057542);
   bjetenls_jer_up_Diboson_stack_2->SetBinContent(21,0.001010891);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(3,0.04146067);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(4,0.0526995);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(5,0.04252281);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(6,0.04210833);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(7,0.0354767);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(8,0.0315621);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(9,0.02279859);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(10,0.01751765);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(11,0.01672224);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(12,0.01305274);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(13,0.009063446);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(14,0.005310797);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(15,0.005601675);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(16,0.003413337);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(17,0.002904363);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(18,0.001932335);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(19,0.0009740804);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(20,0.001090143);
   bjetenls_jer_up_Diboson_stack_2->SetBinError(21,0.0005746878);
   bjetenls_jer_up_Diboson_stack_2->SetEntries(564);
   bjetenls_jer_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jer_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jer_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jer_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_up_Diboson_stack_2->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jer_up_DY_stack_3 = new TH1F("bjetenls_jer_up_DY_stack_3","DY",20,3,7);
   bjetenls_jer_up_DY_stack_3->SetBinContent(3,0.6330605);
   bjetenls_jer_up_DY_stack_3->SetBinContent(4,0.3694403);
   bjetenls_jer_up_DY_stack_3->SetBinContent(5,0.6678407);
   bjetenls_jer_up_DY_stack_3->SetBinContent(6,0.8666548);
   bjetenls_jer_up_DY_stack_3->SetBinContent(7,0.862772);
   bjetenls_jer_up_DY_stack_3->SetBinContent(8,0.3959675);
   bjetenls_jer_up_DY_stack_3->SetBinContent(10,0.1297648);
   bjetenls_jer_up_DY_stack_3->SetBinContent(11,0.1495234);
   bjetenls_jer_up_DY_stack_3->SetBinContent(12,0.1729393);
   bjetenls_jer_up_DY_stack_3->SetBinContent(13,0.06299351);
   bjetenls_jer_up_DY_stack_3->SetBinContent(14,0.07520621);
   bjetenls_jer_up_DY_stack_3->SetBinContent(15,0.04642783);
   bjetenls_jer_up_DY_stack_3->SetBinContent(16,0.04320646);
   bjetenls_jer_up_DY_stack_3->SetBinContent(17,0.0006824447);
   bjetenls_jer_up_DY_stack_3->SetBinContent(18,0.03039021);
   bjetenls_jer_up_DY_stack_3->SetBinError(3,0.6330604);
   bjetenls_jer_up_DY_stack_3->SetBinError(4,0.3694403);
   bjetenls_jer_up_DY_stack_3->SetBinError(5,0.4724747);
   bjetenls_jer_up_DY_stack_3->SetBinError(6,0.501351);
   bjetenls_jer_up_DY_stack_3->SetBinError(7,0.4317353);
   bjetenls_jer_up_DY_stack_3->SetBinError(8,0.2805191);
   bjetenls_jer_up_DY_stack_3->SetBinError(10,0.1297648);
   bjetenls_jer_up_DY_stack_3->SetBinError(11,0.1095345);
   bjetenls_jer_up_DY_stack_3->SetBinError(12,0.12232);
   bjetenls_jer_up_DY_stack_3->SetBinError(13,0.06299351);
   bjetenls_jer_up_DY_stack_3->SetBinError(14,0.07520621);
   bjetenls_jer_up_DY_stack_3->SetBinError(15,0.04642783);
   bjetenls_jer_up_DY_stack_3->SetBinError(16,0.04320646);
   bjetenls_jer_up_DY_stack_3->SetBinError(17,0.0006824447);
   bjetenls_jer_up_DY_stack_3->SetBinError(18,0.03039021);
   bjetenls_jer_up_DY_stack_3->SetEntries(24);
   bjetenls_jer_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jer_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jer_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jer_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_up_DY_stack_3->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jer_up_W_stack_4 = new TH1F("bjetenls_jer_up_W_stack_4","W",20,3,7);
   bjetenls_jer_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jer_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jer_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jer_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_up_W_stack_4->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jer_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jer_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(3,4.353364);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(4,9.422617);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(5,12.19855);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(6,12.09771);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(7,12.4182);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(8,11.05872);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(9,7.896178);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(10,6.407355);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(11,4.582993);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(12,2.96852);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(13,1.75555);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(14,0.9842564);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(15,0.6154593);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(16,0.302723);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(17,0.1507857);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(18,0.06133424);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(19,0.03660026);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(20,0.01186092);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinContent(21,0.01072622);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(3,0.4101873);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(4,0.5542379);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(5,0.573616);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(6,0.5182551);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(7,0.4750516);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(8,0.4067092);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(9,0.3097061);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(10,0.2540167);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(11,0.1944108);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(12,0.1421327);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(13,0.09872996);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(14,0.06621178);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(15,0.04782522);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(16,0.03015207);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(17,0.01945189);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(18,0.01094214);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(19,0.007938201);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(20,0.003910303);
   bjetenls_jer_up_SinglesPtop_stack_5->SetBinError(21,0.003422922);
   bjetenls_jer_up_SinglesPtop_stack_5->SetEntries(6490);
   bjetenls_jer_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jer_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jer_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jer_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_up_SinglesPtop_stack_5->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jer_up_fx3113[21] = {
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
   Double_t Graph_from_bjetenls_jer_up_fy3113[21] = {
   0,
   0,
   82.1859,
   176.6752,
   230.601,
   262.7726,
   271.119,
   251.9164,
   213.0944,
   164.6823,
   114.4057,
   72.57714,
   43.48025,
   24.63576,
   12.79594,
   6.129208,
   2.553122,
   1.077356,
   0.3847404,
   0.1212035,
   0};
   Double_t Graph_from_bjetenls_jer_up_felx3113[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jer_up_fely3113[21] = {
   0,
   0,
   9.047345,
   13.27961,
   15.18555,
   16.21026,
   16.46569,
   15.87187,
   14.59775,
   12.82009,
   10.68063,
   8.499719,
   6.568622,
   4.929619,
   3.529936,
   2.406959,
   1.48991,
   0.8711965,
   0.3785755,
   0.1212033,
   0};
   Double_t Graph_from_bjetenls_jer_up_fehx3113[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jer_up_fehy3113[21] = {
   1.841055,
   1.841055,
   10.10265,
   14.31733,
   15.18555,
   16.21026,
   16.46569,
   15.87187,
   14.59775,
   13.85915,
   11.7275,
   9.558576,
   7.644674,
   6.030642,
   4.669977,
   3.608578,
   2.798318,
   2.328741,
   2.040102,
   1.908055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jer_up_fx3113,Graph_from_bjetenls_jer_up_fy3113,Graph_from_bjetenls_jer_up_felx3113,Graph_from_bjetenls_jer_up_fehx3113,Graph_from_bjetenls_jer_up_fely3113,Graph_from_bjetenls_jer_up_fehy3113);
   grae->SetName("Graph_from_bjetenls_jer_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jer_up3113 = new TH1F("Graph_Graph_from_bjetenls_jer_up3113","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jer_up3113->SetMinimum(0);
   Graph_Graph_from_bjetenls_jer_up3113->SetMaximum(316.3431);
   Graph_Graph_from_bjetenls_jer_up3113->SetDirectory(0);
   Graph_Graph_from_bjetenls_jer_up3113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jer_up3113->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jer_up3113->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jer_up3113->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jer_up3113->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jer_up3113->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jer_up3113->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jer_up3113->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jer_up3113->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jer_up3113->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jer_up3113->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jer_up3113->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jer_up3113->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jer_up3113->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jer_up3113->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jer_up3113);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jer_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jer_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jer_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jer_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jer_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jer_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__114 = new TH1F("ratioframe__114","t#bar{t}",20,3,7);
   ratioframe__114->SetMinimum(0.46);
   ratioframe__114->SetMaximum(1.54);
   ratioframe__114->SetEntries(510225);

   ci = TColor::GetColor("#cc0000");
   ratioframe__114->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__114->SetMarkerColor(ci);
   ratioframe__114->GetXaxis()->SetTitle("log(E)");
   ratioframe__114->GetXaxis()->SetLabelFont(42);
   ratioframe__114->GetXaxis()->SetLabelSize(0);
   ratioframe__114->GetXaxis()->SetTitleSize(0);
   ratioframe__114->GetXaxis()->SetTitleOffset(0);
   ratioframe__114->GetXaxis()->SetTitleFont(42);
   ratioframe__114->GetYaxis()->SetTitle("Data/MC");
   ratioframe__114->GetYaxis()->SetNoExponent();
   ratioframe__114->GetYaxis()->SetNdivisions(5);
   ratioframe__114->GetYaxis()->SetLabelFont(42);
   ratioframe__114->GetYaxis()->SetLabelSize(0.18);
   ratioframe__114->GetYaxis()->SetTitleSize(0.2);
   ratioframe__114->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__114->GetYaxis()->SetTitleFont(42);
   ratioframe__114->GetZaxis()->SetLabelFont(42);
   ratioframe__114->GetZaxis()->SetLabelSize(0.035);
   ratioframe__114->GetZaxis()->SetTitleSize(0.035);
   ratioframe__114->GetZaxis()->SetTitleFont(42);
   ratioframe__114->Draw("");
   
   Double_t Graph_from_ratio_fx3114[20] = {
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
   Double_t Graph_from_ratio_fy3114[20] = {
   0,
   0,
   0.7784086,
   0.7812153,
   0.789751,
   0.8379907,
   0.8691239,
   0.9089087,
   0.9479767,
   0.9815493,
   0.9858649,
   0.9958066,
   1.016876,
   1.04106,
   1.036115,
   1.062688,
   1.010859,
   1.084391,
   1.070076,
   1.012394};
   Double_t Graph_from_ratio_felx3114[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3114[20] = {
   0,
   0,
   0.01770778,
   0.01079167,
   0.008696955,
   0.007912905,
   0.007348925,
   0.007229848,
   0.007401288,
   0.007978962,
   0.008723626,
   0.01012201,
   0.01205317,
   0.0151412,
   0.01893484,
   0.02620124,
   0.03315821,
   0.05985736,
   0.0760265,
   0.1143266};
   Double_t Graph_from_ratio_fehx3114[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3114[20] = {
   0,
   0,
   0.01770778,
   0.01079167,
   0.008696955,
   0.007912905,
   0.007348925,
   0.007229848,
   0.007401288,
   0.007978962,
   0.008723626,
   0.01012201,
   0.01205317,
   0.0151412,
   0.01893484,
   0.02620124,
   0.03315821,
   0.05985736,
   0.0760265,
   0.1143266};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3114,Graph_from_ratio_fy3114,Graph_from_ratio_felx3114,Graph_from_ratio_fehx3114,Graph_from_ratio_fely3114,Graph_from_ratio_fehy3114);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3114 = new TH1F("Graph_Graph_from_ratio3114","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3114->SetMinimum(0);
   Graph_Graph_from_ratio3114->SetMaximum(1.260713);
   Graph_Graph_from_ratio3114->SetDirectory(0);
   Graph_Graph_from_ratio3114->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3114->SetLineColor(ci);
   Graph_Graph_from_ratio3114->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3114->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3114->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3114->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3114->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3114->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3114->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3114->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3114->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3114->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3114->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3114->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3114->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3114);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
