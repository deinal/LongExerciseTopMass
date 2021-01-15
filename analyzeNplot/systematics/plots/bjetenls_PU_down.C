void bjetenls_PU_down()
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
   p1->Range(2.421687,-55.2455,7.240964,405.967);
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
   
   TH1F *frame__21 = new TH1F("frame__21","t#bar{t}",20,3,7);
   frame__21->SetMinimum(0.1);
   frame__21->SetMaximum(401.3549);
   frame__21->SetEntries(504712);
   frame__21->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__21->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__21->SetMarkerColor(ci);
   frame__21->GetXaxis()->SetTitle("log(E)");
   frame__21->GetXaxis()->SetLabelFont(42);
   frame__21->GetXaxis()->SetLabelSize(0.035);
   frame__21->GetXaxis()->SetTitleSize(0.035);
   frame__21->GetXaxis()->SetTitleFont(42);
   frame__21->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__21->GetYaxis()->SetNoExponent();
   frame__21->GetYaxis()->SetLabelFont(42);
   frame__21->GetYaxis()->SetTitleSize(0.045);
   frame__21->GetYaxis()->SetTitleOffset(1.3);
   frame__21->GetYaxis()->SetTitleFont(42);
   frame__21->GetZaxis()->SetLabelFont(42);
   frame__21->GetZaxis()->SetLabelSize(0.035);
   frame__21->GetZaxis()->SetTitleSize(0.035);
   frame__21->GetZaxis()->SetTitleFont(42);
   frame__21->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_11 = new TH1F("mc_stack_11","mc",20,3,7);
   mc_stack_11->SetMinimum(-1.937952e-08);
   mc_stack_11->SetMaximum(324.1713);
   mc_stack_11->SetDirectory(0);
   mc_stack_11->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_11->SetLineColor(ci);
   mc_stack_11->GetXaxis()->SetLabelFont(42);
   mc_stack_11->GetXaxis()->SetLabelSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleFont(42);
   mc_stack_11->GetYaxis()->SetLabelFont(42);
   mc_stack_11->GetYaxis()->SetLabelSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleOffset(0);
   mc_stack_11->GetYaxis()->SetTitleFont(42);
   mc_stack_11->GetZaxis()->SetLabelFont(42);
   mc_stack_11->GetZaxis()->SetLabelSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_11);
   
   
   TH1F *bjetenls_PU_down_t#bar{t}_stack_1 = new TH1F("bjetenls_PU_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(3,100.4326);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(4,214.4334);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(5,274.8192);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(6,295.9728);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(7,292.1497);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(8,259.7757);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(9,210.5729);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(10,156.7491);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(11,107.6339);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(12,67.42827);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(13,39.52054);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(14,21.78321);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(15,11.24022);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(16,5.215945);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(17,2.244963);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(18,0.8631598);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(19,0.304621);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(20,0.1015764);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinContent(21,0.03538274);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(3,1.101381);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(4,1.474728);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(5,1.511715);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(6,1.420523);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(7,1.278227);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(8,1.091328);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(9,0.8904083);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(10,0.6957137);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(11,0.521903);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(12,0.3742245);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(13,0.259407);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(14,0.1741694);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(15,0.1133623);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(16,0.06996893);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(17,0.04147243);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(18,0.02326711);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(19,0.01254675);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(20,0.006555429);
   bjetenls_PU_down_t#bar{t}_stack_1->SetBinError(21,0.003345567);
   bjetenls_PU_down_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_PU_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_PU_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_PU_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_PU_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_PU_down_Diboson_stack_2 = new TH1F("bjetenls_PU_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(3,0.1597004);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(4,0.2479531);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(5,0.2492664);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(6,0.2562518);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(7,0.2118686);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(8,0.2102178);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(9,0.1374871);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(10,0.1149337);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(11,0.1060884);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(12,0.07685933);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(13,0.04481846);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(14,0.01977185);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(15,0.02588709);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(16,0.01209828);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(17,0.01060412);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(18,0.006041348);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(19,0.001989559);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(20,0.002748322);
   bjetenls_PU_down_Diboson_stack_2->SetBinContent(21,0.0009396472);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(3,0.04260581);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(4,0.04856158);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(5,0.04487616);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(6,0.04103782);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(7,0.03301425);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(8,0.030365);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(9,0.02234388);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(10,0.01795498);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(11,0.01574512);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(12,0.0122072);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(13,0.008552335);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(14,0.005088382);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(15,0.005319459);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(16,0.003246138);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(17,0.002841598);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(18,0.001847299);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(19,0.0009952356);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(20,0.001017766);
   bjetenls_PU_down_Diboson_stack_2->SetBinError(21,0.0005433051);
   bjetenls_PU_down_Diboson_stack_2->SetEntries(540);
   bjetenls_PU_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_PU_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_PU_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_PU_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_PU_down_DY_stack_3 = new TH1F("bjetenls_PU_down_DY_stack_3","DY",20,3,7);
   bjetenls_PU_down_DY_stack_3->SetBinContent(3,0.5484254);
   bjetenls_PU_down_DY_stack_3->SetBinContent(4,0.4565785);
   bjetenls_PU_down_DY_stack_3->SetBinContent(5,0.6470398);
   bjetenls_PU_down_DY_stack_3->SetBinContent(6,0.826205);
   bjetenls_PU_down_DY_stack_3->SetBinContent(7,0.7887044);
   bjetenls_PU_down_DY_stack_3->SetBinContent(8,0.4005892);
   bjetenls_PU_down_DY_stack_3->SetBinContent(10,0.1392145);
   bjetenls_PU_down_DY_stack_3->SetBinContent(11,0.1327789);
   bjetenls_PU_down_DY_stack_3->SetBinContent(12,0.1923084);
   bjetenls_PU_down_DY_stack_3->SetBinContent(13,0.06523345);
   bjetenls_PU_down_DY_stack_3->SetBinContent(14,0.06701101);
   bjetenls_PU_down_DY_stack_3->SetBinContent(15,0.04403521);
   bjetenls_PU_down_DY_stack_3->SetBinContent(16,0.0425193);
   bjetenls_PU_down_DY_stack_3->SetBinContent(17,0.0001402366);
   bjetenls_PU_down_DY_stack_3->SetBinContent(18,0.02669231);
   bjetenls_PU_down_DY_stack_3->SetBinError(3,0.5484254);
   bjetenls_PU_down_DY_stack_3->SetBinError(4,0.4565785);
   bjetenls_PU_down_DY_stack_3->SetBinError(5,0.4620041);
   bjetenls_PU_down_DY_stack_3->SetBinError(6,0.4796224);
   bjetenls_PU_down_DY_stack_3->SetBinError(7,0.397921);
   bjetenls_PU_down_DY_stack_3->SetBinError(8,0.2834877);
   bjetenls_PU_down_DY_stack_3->SetBinError(10,0.1392145);
   bjetenls_PU_down_DY_stack_3->SetBinError(11,0.1054018);
   bjetenls_PU_down_DY_stack_3->SetBinError(12,0.1360166);
   bjetenls_PU_down_DY_stack_3->SetBinError(13,0.06523346);
   bjetenls_PU_down_DY_stack_3->SetBinError(14,0.06701102);
   bjetenls_PU_down_DY_stack_3->SetBinError(15,0.04403521);
   bjetenls_PU_down_DY_stack_3->SetBinError(16,0.04251929);
   bjetenls_PU_down_DY_stack_3->SetBinError(17,0.0001402366);
   bjetenls_PU_down_DY_stack_3->SetBinError(18,0.02669231);
   bjetenls_PU_down_DY_stack_3->SetEntries(24);
   bjetenls_PU_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_PU_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_PU_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_PU_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_PU_down_W_stack_4 = new TH1F("bjetenls_PU_down_W_stack_4","W",20,3,7);
   bjetenls_PU_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_PU_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_PU_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_PU_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_down_W_stack_4,"hist");
   
   TH1F *bjetenls_PU_down_SinglesPtop_stack_5 = new TH1F("bjetenls_PU_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(3,4.377978);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(4,8.869403);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(5,11.88855);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(6,11.67925);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(7,11.88007);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(8,10.72552);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(9,7.612508);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(10,6.194367);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(11,4.292357);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(12,2.831491);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(13,1.679512);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(14,0.9819193);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(15,0.5948656);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(16,0.294149);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(17,0.1389098);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(18,0.06385803);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(19,0.03489718);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(20,0.009978222);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinContent(21,0.01008492);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(3,0.4135936);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(4,0.540449);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(5,0.5677252);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(6,0.5065064);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(7,0.4655706);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(8,0.400049);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(9,0.3044929);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(10,0.2492301);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(11,0.1877847);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(12,0.137721);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(13,0.09645516);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(14,0.06663155);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(15,0.04718871);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(16,0.02979453);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(17,0.0183706);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(18,0.01148212);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(19,0.007778215);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(20,0.003619858);
   bjetenls_PU_down_SinglesPtop_stack_5->SetBinError(21,0.00327272);
   bjetenls_PU_down_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_PU_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_PU_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_PU_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_PU_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_PU_down_fx3021[21] = {
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
   Double_t Graph_from_bjetenls_PU_down_fy3021[21] = {
   0,
   0,
   92.7945,
   197.9431,
   255.2428,
   284.5028,
   281.9935,
   252.0936,
   202.7139,
   149.4754,
   101.0653,
   62.26832,
   36.53798,
   20.55606,
   10.39831,
   4.765559,
   2.074745,
   0.8329404,
   0.2820291,
   0.08633442,
   0};
   Double_t Graph_from_bjetenls_PU_down_felx3021[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_PU_down_fely3021[21] = {
   0,
   0,
   9.615798,
   14.05763,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   12.21258,
   10.03667,
   7.869935,
   6.016987,
   4.496794,
   3.172168,
   2.104764,
   1.320296,
   0.7249367,
   0.2810206,
   0.08633442,
   0};
   Double_t Graph_from_bjetenls_PU_down_fehx3021[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_PU_down_fehy3021[21] = {
   1.841055,
   1.841055,
   10.66785,
   15.09326,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   13.25358,
   11.08654,
   8.933481,
   7.099949,
   5.607373,
   4.327417,
   3.332876,
   2.66048,
   2.234301,
   1.990576,
   1.889246,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_PU_down_fx3021,Graph_from_bjetenls_PU_down_fy3021,Graph_from_bjetenls_PU_down_felx3021,Graph_from_bjetenls_PU_down_fehx3021,Graph_from_bjetenls_PU_down_fely3021,Graph_from_bjetenls_PU_down_fehy3021);
   grae->SetName("Graph_from_bjetenls_PU_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_PU_down3021 = new TH1F("Graph_Graph_from_bjetenls_PU_down3021","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_PU_down3021->SetMinimum(0);
   Graph_Graph_from_bjetenls_PU_down3021->SetMaximum(331.507);
   Graph_Graph_from_bjetenls_PU_down3021->SetDirectory(0);
   Graph_Graph_from_bjetenls_PU_down3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_PU_down3021->SetLineColor(ci);
   Graph_Graph_from_bjetenls_PU_down3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_PU_down3021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_PU_down3021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_PU_down3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_PU_down3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_PU_down3021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_PU_down3021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_PU_down3021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_PU_down3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_PU_down3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_PU_down3021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_PU_down3021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_PU_down3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_PU_down3021);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_PU_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_PU_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_PU_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_PU_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_PU_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_PU_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__22 = new TH1F("ratioframe__22","t#bar{t}",20,3,7);
   ratioframe__22->SetMinimum(0.46);
   ratioframe__22->SetMaximum(1.54);
   ratioframe__22->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__22->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__22->SetMarkerColor(ci);
   ratioframe__22->GetXaxis()->SetTitle("log(E)");
   ratioframe__22->GetXaxis()->SetLabelFont(42);
   ratioframe__22->GetXaxis()->SetLabelSize(0);
   ratioframe__22->GetXaxis()->SetTitleSize(0);
   ratioframe__22->GetXaxis()->SetTitleOffset(0);
   ratioframe__22->GetXaxis()->SetTitleFont(42);
   ratioframe__22->GetYaxis()->SetTitle("Data/MC");
   ratioframe__22->GetYaxis()->SetNoExponent();
   ratioframe__22->GetYaxis()->SetNdivisions(5);
   ratioframe__22->GetYaxis()->SetLabelFont(42);
   ratioframe__22->GetYaxis()->SetLabelSize(0.18);
   ratioframe__22->GetYaxis()->SetTitleSize(0.2);
   ratioframe__22->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__22->GetYaxis()->SetTitleFont(42);
   ratioframe__22->GetZaxis()->SetLabelFont(42);
   ratioframe__22->GetZaxis()->SetLabelSize(0.035);
   ratioframe__22->GetZaxis()->SetTitleSize(0.035);
   ratioframe__22->GetZaxis()->SetTitleFont(42);
   ratioframe__22->Draw("");
   
   Double_t Graph_from_ratio_fx3022[20] = {
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
   Double_t Graph_from_ratio_fy3022[20] = {
   0,
   0,
   0.8794128,
   0.8836454,
   0.8874797,
   0.9215127,
   0.924477,
   0.9298503,
   0.9285054,
   0.9159165,
   0.9010399,
   0.8828763,
   0.8844805,
   0.8995336,
   0.87344,
   0.8563892,
   0.8664203,
   0.8678709,
   0.8258351,
   0.7553125};
   Double_t Graph_from_ratio_felx3022[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3022[20] = {
   0,
   0,
   0.01902968,
   0.01177907,
   0.009451219,
   0.008475368,
   0.007726756,
   0.007425024,
   0.00741202,
   0.007742941,
   0.008366496,
   0.009532584,
   0.0112054,
   0.01393307,
   0.0171913,
   0.02303729,
   0.03076358,
   0.05021861,
   0.06573006,
   0.09645594};
   Double_t Graph_from_ratio_fehx3022[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3022[20] = {
   0,
   0,
   0.01902968,
   0.01177907,
   0.009451219,
   0.008475368,
   0.007726756,
   0.007425024,
   0.00741202,
   0.007742941,
   0.008366496,
   0.009532584,
   0.0112054,
   0.01393307,
   0.0171913,
   0.02303729,
   0.03076358,
   0.05021861,
   0.06573006,
   0.09645594};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3022,Graph_from_ratio_fy3022,Graph_from_ratio_felx3022,Graph_from_ratio_fehx3022,Graph_from_ratio_fely3022,Graph_from_ratio_fehy3022);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3022 = new TH1F("Graph_Graph_from_ratio3022","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3022->SetMinimum(0);
   Graph_Graph_from_ratio3022->SetMaximum(1.031003);
   Graph_Graph_from_ratio3022->SetDirectory(0);
   Graph_Graph_from_ratio3022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3022->SetLineColor(ci);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3022);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
