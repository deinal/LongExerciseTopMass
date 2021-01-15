void bjetenls_jec_16_up()
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
   p1->Range(2.421687,-56.11357,7.240964,412.3329);
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
   
   TH1F *frame__99 = new TH1F("frame__99","t#bar{t}",20,3,7);
   frame__99->SetMinimum(0.1);
   frame__99->SetMaximum(407.6484);
   frame__99->SetEntries(504025);
   frame__99->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__99->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__99->SetMarkerColor(ci);
   frame__99->GetXaxis()->SetTitle("log(E)");
   frame__99->GetXaxis()->SetLabelFont(42);
   frame__99->GetXaxis()->SetLabelSize(0.035);
   frame__99->GetXaxis()->SetTitleSize(0.035);
   frame__99->GetXaxis()->SetTitleFont(42);
   frame__99->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__99->GetYaxis()->SetNoExponent();
   frame__99->GetYaxis()->SetLabelFont(42);
   frame__99->GetYaxis()->SetTitleSize(0.045);
   frame__99->GetYaxis()->SetTitleOffset(1.3);
   frame__99->GetYaxis()->SetTitleFont(42);
   frame__99->GetZaxis()->SetLabelFont(42);
   frame__99->GetZaxis()->SetLabelSize(0.035);
   frame__99->GetZaxis()->SetTitleSize(0.035);
   frame__99->GetZaxis()->SetTitleFont(42);
   frame__99->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_50 = new TH1F("mc_stack_50","mc",20,3,7);
   mc_stack_50->SetMinimum(-1.16944e-09);
   mc_stack_50->SetMaximum(329.2545);
   mc_stack_50->SetDirectory(0);
   mc_stack_50->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_50->SetLineColor(ci);
   mc_stack_50->GetXaxis()->SetLabelFont(42);
   mc_stack_50->GetXaxis()->SetLabelSize(0.035);
   mc_stack_50->GetXaxis()->SetTitleSize(0.035);
   mc_stack_50->GetXaxis()->SetTitleFont(42);
   mc_stack_50->GetYaxis()->SetLabelFont(42);
   mc_stack_50->GetYaxis()->SetLabelSize(0.035);
   mc_stack_50->GetYaxis()->SetTitleSize(0.035);
   mc_stack_50->GetYaxis()->SetTitleOffset(0);
   mc_stack_50->GetYaxis()->SetTitleFont(42);
   mc_stack_50->GetZaxis()->SetLabelFont(42);
   mc_stack_50->GetZaxis()->SetLabelSize(0.035);
   mc_stack_50->GetZaxis()->SetTitleSize(0.035);
   mc_stack_50->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_50);
   
   
   TH1F *bjetenls_jec_16_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_16_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(3,102.9082);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(4,218.2878);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(5,279.4579);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(6,300.3594);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(7,295.8036);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(8,263.0938);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(9,212.7925);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(10,158.7703);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(11,108.8197);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(12,68.19997);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(13,39.91006);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(14,22.0199);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(15,11.33604);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(16,5.2824);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(17,2.29424);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(18,0.8776525);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(19,0.3150856);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(20,0.1026338);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinContent(21,0.03887796);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(3,1.113667);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(4,1.486947);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(5,1.523147);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(6,1.430367);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(7,1.285034);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(8,1.097545);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(9,0.8941025);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(10,0.6996702);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(11,0.5243339);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(12,0.3761487);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(13,0.2602511);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(14,0.1750403);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(15,0.1137166);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(16,0.07032958);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(17,0.04203608);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(18,0.0234731);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(19,0.01278159);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(20,0.006604608);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetBinError(21,0.003560615);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetEntries(497118);
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_16_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_16_up_Diboson_stack_2 = new TH1F("bjetenls_jec_16_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(3,0.1681453);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(4,0.278303);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(5,0.228633);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(6,0.2575452);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(7,0.2149811);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(8,0.2166419);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(9,0.1365721);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(10,0.118164);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(11,0.1088714);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(12,0.08394637);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(13,0.04508365);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(14,0.02064719);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(15,0.02594917);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(16,0.01259538);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(17,0.01085521);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(18,0.006534352);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(19,0.001951792);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(20,0.00307966);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinContent(21,0.001010347);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(3,0.04248779);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(4,0.05262076);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(5,0.04224445);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(6,0.04090698);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(7,0.03336528);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(8,0.0310937);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(9,0.02189466);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(10,0.01816591);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(11,0.01599341);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(12,0.0130085);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(13,0.008578977);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(14,0.005242927);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(15,0.005326851);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(16,0.003311403);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(17,0.002921606);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(18,0.001943668);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(19,0.0009792204);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(20,0.001098413);
   bjetenls_jec_16_up_Diboson_stack_2->SetBinError(21,0.000574415);
   bjetenls_jec_16_up_Diboson_stack_2->SetEntries(539);
   bjetenls_jec_16_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_16_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_16_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_16_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_16_up_DY_stack_3 = new TH1F("bjetenls_jec_16_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(3,0.6483357);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(4,0.3730144);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(5,0.6778921);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(6,0.8792842);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(7,0.8712098);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(8,0.4007498);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(10,0.1303835);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(11,0.1505825);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(12,0.1737104);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(13,0.06343169);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(14,0.07652339);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(15,0.04668504);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(16,0.04338633);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(17,0.0006868916);
   bjetenls_jec_16_up_DY_stack_3->SetBinContent(18,0.0304688);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(3,0.6483357);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(4,0.3730143);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(5,0.4796567);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(6,0.5085968);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(7,0.4358929);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(8,0.2840641);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(10,0.1303835);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(11,0.1101682);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(12,0.1228675);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(13,0.06343169);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(14,0.07652339);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(15,0.04668503);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(16,0.04338633);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(17,0.0006868916);
   bjetenls_jec_16_up_DY_stack_3->SetBinError(18,0.0304688);
   bjetenls_jec_16_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_16_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_16_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_16_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_16_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_16_up_W_stack_4 = new TH1F("bjetenls_jec_16_up_W_stack_4","W",20,3,7);
   bjetenls_jec_16_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_16_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_16_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_16_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_16_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_16_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(3,4.483693);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(4,9.097505);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(5,11.99648);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(6,12.07946);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(7,11.99272);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(8,10.87489);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(9,7.729054);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(10,6.287727);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(11,4.371616);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(12,2.89633);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(13,1.703619);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(14,0.9849012);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(15,0.5905883);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(16,0.2976151);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(17,0.1509398);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(18,0.06158486);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(19,0.03612513);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(20,0.01039726);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinContent(21,0.0107709);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(3,0.4192121);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(4,0.5440806);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(5,0.5712058);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(6,0.5172049);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(7,0.4666097);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(8,0.4033526);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(9,0.3065377);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(10,0.2513931);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(11,0.1896282);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(12,0.1404632);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(13,0.09732677);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(14,0.06604063);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(15,0.04694465);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(16,0.02993107);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(17,0.01946937);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(18,0.01098516);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(19,0.007829439);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(20,0.003625681);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetBinError(21,0.003437768);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetEntries(6344);
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_16_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_16_up_fx3099[21] = {
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
   Double_t Graph_from_bjetenls_jec_16_up_fy3099[21] = {
   0,
   0,
   93.18225,
   197.9796,
   255.4713,
   284.1718,
   281.7829,
   251.3699,
   202.0267,
   149.4145,
   101.1978,
   61.96933,
   36.56352,
   20.60631,
   10.42204,
   4.764675,
   2.098492,
   0.8449023,
   0.2831863,
   0.08738261,
   0};
   Double_t Graph_from_bjetenls_jec_16_up_felx3099[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_16_up_fely3099[21] = {
   0,
   0,
   9.63594,
   14.05893,
   15.98347,
   16.85739,
   16.78639,
   15.85465,
   14.21361,
   12.21009,
   10.04327,
   7.850916,
   6.019108,
   4.502379,
   3.175906,
   2.104554,
   1.329216,
   0.7326417,
   0.2821496,
   0.08738261,
   0};
   Double_t Graph_from_bjetenls_jec_16_up_fehx3099[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_16_up_fehy3099[21] = {
   1.841055,
   1.841055,
   10.68788,
   15.09456,
   15.98347,
   16.85739,
   16.78639,
   15.85465,
   14.21361,
   13.2511,
   11.09311,
   8.914614,
   7.102042,
   5.612823,
   4.33098,
   3.332687,
   2.667588,
   2.239084,
   1.991147,
   1.889816,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_16_up_fx3099,Graph_from_bjetenls_jec_16_up_fy3099,Graph_from_bjetenls_jec_16_up_felx3099,Graph_from_bjetenls_jec_16_up_fehx3099,Graph_from_bjetenls_jec_16_up_fely3099,Graph_from_bjetenls_jec_16_up_fehy3099);
   grae->SetName("Graph_from_bjetenls_jec_16_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_16_up3099 = new TH1F("Graph_Graph_from_bjetenls_jec_16_up3099","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_16_up3099->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_16_up3099->SetMaximum(331.1321);
   Graph_Graph_from_bjetenls_jec_16_up3099->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_16_up3099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_16_up3099->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_up3099->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_16_up3099);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_16_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_16_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_16_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_16_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_16_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_16_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__100 = new TH1F("ratioframe__100","t#bar{t}",20,3,7);
   ratioframe__100->SetMinimum(0.46);
   ratioframe__100->SetMaximum(1.54);
   ratioframe__100->SetEntries(504025);

   ci = TColor::GetColor("#cc0000");
   ratioframe__100->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__100->SetMarkerColor(ci);
   ratioframe__100->GetXaxis()->SetTitle("log(E)");
   ratioframe__100->GetXaxis()->SetLabelFont(42);
   ratioframe__100->GetXaxis()->SetLabelSize(0);
   ratioframe__100->GetXaxis()->SetTitleSize(0);
   ratioframe__100->GetXaxis()->SetTitleOffset(0);
   ratioframe__100->GetXaxis()->SetTitleFont(42);
   ratioframe__100->GetYaxis()->SetTitle("Data/MC");
   ratioframe__100->GetYaxis()->SetNoExponent();
   ratioframe__100->GetYaxis()->SetNdivisions(5);
   ratioframe__100->GetYaxis()->SetLabelFont(42);
   ratioframe__100->GetYaxis()->SetLabelSize(0.18);
   ratioframe__100->GetYaxis()->SetTitleSize(0.2);
   ratioframe__100->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__100->GetYaxis()->SetTitleFont(42);
   ratioframe__100->GetZaxis()->SetLabelFont(42);
   ratioframe__100->GetZaxis()->SetLabelSize(0.035);
   ratioframe__100->GetZaxis()->SetTitleSize(0.035);
   ratioframe__100->GetZaxis()->SetTitleFont(42);
   ratioframe__100->Draw("");
   
   Double_t Graph_from_ratio_fx3100[20] = {
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
   Double_t Graph_from_ratio_fy3100[20] = {
   0,
   0,
   0.8611372,
   0.8681925,
   0.8738216,
   0.9062301,
   0.9122655,
   0.9154503,
   0.9155642,
   0.9038632,
   0.8919972,
   0.8684777,
   0.8763566,
   0.8919721,
   0.8685565,
   0.8454006,
   0.854184,
   0.8654653,
   0.8018582,
   0.7525799};
   Double_t Graph_from_ratio_felx3100[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3100[20] = {
   0,
   0,
   0.01871568,
   0.01149287,
   0.009284435,
   0.008332513,
   0.007626059,
   0.007301768,
   0.007304569,
   0.00762213,
   0.008266812,
   0.009350245,
   0.01107634,
   0.01384432,
   0.01708682,
   0.02271425,
   0.03017578,
   0.0511757,
   0.06337807,
   0.09548043};
   Double_t Graph_from_ratio_fehx3100[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3100[20] = {
   0,
   0,
   0.01871568,
   0.01149287,
   0.009284435,
   0.008332513,
   0.007626059,
   0.007301768,
   0.007304569,
   0.00762213,
   0.008266812,
   0.009350245,
   0.01107634,
   0.01384432,
   0.01708682,
   0.02271425,
   0.03017578,
   0.0511757,
   0.06337807,
   0.09548043};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3100,Graph_from_ratio_fy3100,Graph_from_ratio_felx3100,Graph_from_ratio_fehx3100,Graph_from_ratio_fely3100,Graph_from_ratio_fehy3100);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3100 = new TH1F("Graph_Graph_from_ratio3100","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3100->SetMinimum(0);
   Graph_Graph_from_ratio3100->SetMaximum(1.015156);
   Graph_Graph_from_ratio3100->SetDirectory(0);
   Graph_Graph_from_ratio3100->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3100->SetLineColor(ci);
   Graph_Graph_from_ratio3100->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3100->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3100->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3100->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3100->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3100->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3100->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3100->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3100->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3100->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3100->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3100->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3100->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3100);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
