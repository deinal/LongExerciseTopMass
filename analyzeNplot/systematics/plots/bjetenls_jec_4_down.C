void bjetenls_jec_4_down()
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
   p1->Range(2.421687,-56.03728,7.240964,411.7734);
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
   
   TH1F *frame__81 = new TH1F("frame__81","t#bar{t}",20,3,7);
   frame__81->SetMinimum(0.1);
   frame__81->SetMaximum(407.0953);
   frame__81->SetEntries(503830);
   frame__81->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__81->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__81->SetMarkerColor(ci);
   frame__81->GetXaxis()->SetTitle("log(E)");
   frame__81->GetXaxis()->SetLabelFont(42);
   frame__81->GetXaxis()->SetLabelSize(0.035);
   frame__81->GetXaxis()->SetTitleSize(0.035);
   frame__81->GetXaxis()->SetTitleFont(42);
   frame__81->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__81->GetYaxis()->SetNoExponent();
   frame__81->GetYaxis()->SetLabelFont(42);
   frame__81->GetYaxis()->SetTitleSize(0.045);
   frame__81->GetYaxis()->SetTitleOffset(1.3);
   frame__81->GetYaxis()->SetTitleFont(42);
   frame__81->GetZaxis()->SetLabelFont(42);
   frame__81->GetZaxis()->SetLabelSize(0.035);
   frame__81->GetZaxis()->SetTitleSize(0.035);
   frame__81->GetZaxis()->SetTitleFont(42);
   frame__81->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_41 = new TH1F("mc_stack_41","mc",20,3,7);
   mc_stack_41->SetMinimum(-1.962731e-08);
   mc_stack_41->SetMaximum(328.8077);
   mc_stack_41->SetDirectory(0);
   mc_stack_41->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_41->SetLineColor(ci);
   mc_stack_41->GetXaxis()->SetLabelFont(42);
   mc_stack_41->GetXaxis()->SetLabelSize(0.035);
   mc_stack_41->GetXaxis()->SetTitleSize(0.035);
   mc_stack_41->GetXaxis()->SetTitleFont(42);
   mc_stack_41->GetYaxis()->SetLabelFont(42);
   mc_stack_41->GetYaxis()->SetLabelSize(0.035);
   mc_stack_41->GetYaxis()->SetTitleSize(0.035);
   mc_stack_41->GetYaxis()->SetTitleOffset(0);
   mc_stack_41->GetYaxis()->SetTitleFont(42);
   mc_stack_41->GetZaxis()->SetLabelFont(42);
   mc_stack_41->GetZaxis()->SetLabelSize(0.035);
   mc_stack_41->GetZaxis()->SetTitleSize(0.035);
   mc_stack_41->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_41);
   
   
   TH1F *bjetenls_jec_4_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_4_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(3,102.2503);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(4,217.827);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(5,278.1642);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(6,300.0314);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(7,295.9026);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(8,263.0617);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(9,212.9103);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(10,158.6628);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(11,108.8278);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(12,68.297);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(13,39.91241);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(14,22.08355);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(15,11.36875);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(16,5.283855);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(17,2.299422);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(18,0.879194);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(19,0.3123614);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(20,0.1035409);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinContent(21,0.03776477);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(3,1.110022);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(4,1.485305);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(5,1.519475);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(6,1.429753);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(7,1.285304);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(8,1.097483);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(9,0.8943665);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(10,0.6994186);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(11,0.5243615);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(12,0.3764262);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(13,0.260259);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(14,0.1752813);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(15,0.1138803);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(16,0.07034161);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(17,0.04207738);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(18,0.02349174);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(19,0.01272306);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(20,0.006635713);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetBinError(21,0.003499988);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetEntries(496935);
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_4_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_4_down_Diboson_stack_2 = new TH1F("bjetenls_jec_4_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(3,0.1679078);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(4,0.2780399);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(5,0.2345053);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(6,0.2515382);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(7,0.2154411);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(8,0.2108212);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(9,0.136485);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(10,0.1201357);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(11,0.1067009);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(12,0.08182859);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(13,0.04709194);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(14,0.02062501);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(15,0.02594417);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(16,0.01182438);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(17,0.01085447);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(18,0.006534661);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(19,0.001952424);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(20,0.003084094);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinContent(21,0.001011877);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(3,0.04242591);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(4,0.05257222);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(5,0.04264833);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(6,0.04046487);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(7,0.03344198);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(8,0.03054421);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(9,0.02187959);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(10,0.01826713);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(11,0.01584575);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(12,0.01283435);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(13,0.008811743);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(14,0.005237324);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(15,0.005325858);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(16,0.003220419);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(17,0.002921394);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(18,0.001943728);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(19,0.0009795265);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(20,0.001100072);
   bjetenls_jec_4_down_Diboson_stack_2->SetBinError(21,0.0005752881);
   bjetenls_jec_4_down_Diboson_stack_2->SetEntries(537);
   bjetenls_jec_4_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_4_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_4_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_4_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_4_down_DY_stack_3 = new TH1F("bjetenls_jec_4_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(3,0.6471521);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(4,0.3724373);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(5,0.6798211);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(6,0.8812354);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(7,0.8711237);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(8,0.4005597);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(10,0.1303735);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(11,0.1506385);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(12,0.1734868);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(13,0.06331273);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(14,0.07640786);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(15,0.04664378);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(16,0.04335886);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(17,0.0006868195);
   bjetenls_jec_4_down_DY_stack_3->SetBinContent(18,0.03044546);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(3,0.6471521);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(4,0.3724373);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(5,0.4810218);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(6,0.5097271);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(7,0.4358343);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(8,0.2838958);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(10,0.1303735);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(11,0.1102071);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(12,0.1227069);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(13,0.06331273);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(14,0.07640786);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(15,0.04664378);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(16,0.04335886);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(17,0.0006868196);
   bjetenls_jec_4_down_DY_stack_3->SetBinError(18,0.03044546);
   bjetenls_jec_4_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_4_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_4_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_4_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_4_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_4_down_W_stack_4 = new TH1F("bjetenls_jec_4_down_W_stack_4","W",20,3,7);
   bjetenls_jec_4_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_4_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_4_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_4_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_4_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_4_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(3,4.434974);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(4,9.003969);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(5,11.94355);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(6,11.98604);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(7,12.00295);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(8,10.85402);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(9,7.740093);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(10,6.284129);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(11,4.389379);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(12,2.890208);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(13,1.709773);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(14,0.9815298);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(15,0.59795);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(16,0.3001569);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(17,0.1483013);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(18,0.0634344);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(19,0.03434642);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(20,0.01040743);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinContent(21,0.01079687);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(3,0.4164753);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(4,0.5411638);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(5,0.5698354);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(6,0.5153429);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(7,0.4670172);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(8,0.4031505);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(9,0.3068995);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(10,0.2515633);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(11,0.1900367);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(12,0.1403225);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(13,0.09752279);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(14,0.06595814);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(15,0.04723402);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(16,0.0300379);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(17,0.01928984);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(18,0.0111404);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(19,0.007624324);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(20,0.003629534);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetBinError(21,0.003445962);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetEntries(6334);
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_4_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_4_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_4_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_4_down_fx3081[21] = {
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
   Double_t Graph_from_bjetenls_jec_4_down_fy3081[21] = {
   0,
   0,
   93.04238,
   197.9867,
   254.6616,
   284.2243,
   281.9514,
   251.7765,
   202.2928,
   149.0705,
   100.8949,
   62.05321,
   36.45245,
   20.53939,
   10.39851,
   4.73504,
   2.069523,
   0.8303822,
   0.2834966,
   0.08638117,
   0};
   Double_t Graph_from_bjetenls_jec_4_down_felx3081[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_4_down_fely3081[21] = {
   0,
   0,
   9.628679,
   14.05918,
   15.95812,
   16.85895,
   16.79141,
   15.86747,
   14.22297,
   12.19599,
   10.02818,
   7.856256,
   6.009874,
   4.494941,
   3.172199,
   2.097504,
   1.318327,
   0.7232806,
   0.2824524,
   0.08638117,
   0};
   Double_t Graph_from_bjetenls_jec_4_down_fehx3081[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_4_down_fehy3081[21] = {
   1.841055,
   1.841055,
   10.68066,
   15.09481,
   15.95812,
   16.85895,
   16.79141,
   15.86747,
   14.22297,
   13.23705,
   11.07809,
   8.919912,
   7.092934,
   5.605564,
   4.327447,
   3.326334,
   2.658913,
   2.233275,
   1.9913,
   1.889271,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_4_down_fx3081,Graph_from_bjetenls_jec_4_down_fy3081,Graph_from_bjetenls_jec_4_down_felx3081,Graph_from_bjetenls_jec_4_down_fehx3081,Graph_from_bjetenls_jec_4_down_fely3081,Graph_from_bjetenls_jec_4_down_fehy3081);
   grae->SetName("Graph_from_bjetenls_jec_4_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_4_down3081 = new TH1F("Graph_Graph_from_bjetenls_jec_4_down3081","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_4_down3081->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_4_down3081->SetMaximum(331.1915);
   Graph_Graph_from_bjetenls_jec_4_down3081->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_4_down3081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_4_down3081->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_4_down3081->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_4_down3081);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_4_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_4_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_4_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_4_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_4_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_4_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__82 = new TH1F("ratioframe__82","t#bar{t}",20,3,7);
   ratioframe__82->SetMinimum(0.46);
   ratioframe__82->SetMaximum(1.54);
   ratioframe__82->SetEntries(503830);

   ci = TColor::GetColor("#cc0000");
   ratioframe__82->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__82->SetMarkerColor(ci);
   ratioframe__82->GetXaxis()->SetTitle("log(E)");
   ratioframe__82->GetXaxis()->SetLabelFont(42);
   ratioframe__82->GetXaxis()->SetLabelSize(0);
   ratioframe__82->GetXaxis()->SetTitleSize(0);
   ratioframe__82->GetXaxis()->SetTitleOffset(0);
   ratioframe__82->GetXaxis()->SetTitleFont(42);
   ratioframe__82->GetYaxis()->SetTitle("Data/MC");
   ratioframe__82->GetYaxis()->SetNoExponent();
   ratioframe__82->GetYaxis()->SetNdivisions(5);
   ratioframe__82->GetYaxis()->SetLabelFont(42);
   ratioframe__82->GetYaxis()->SetLabelSize(0.18);
   ratioframe__82->GetYaxis()->SetTitleSize(0.2);
   ratioframe__82->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__82->GetYaxis()->SetTitleFont(42);
   ratioframe__82->GetZaxis()->SetLabelFont(42);
   ratioframe__82->GetZaxis()->SetLabelSize(0.035);
   ratioframe__82->GetZaxis()->SetTitleSize(0.035);
   ratioframe__82->GetZaxis()->SetTitleFont(42);
   ratioframe__82->Draw("");
   
   Double_t Graph_from_ratio_fx3082[20] = {
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
   Double_t Graph_from_ratio_fy3082[20] = {
   0,
   0,
   0.8655078,
   0.8703422,
   0.8750593,
   0.9076292,
   0.9124873,
   0.9171282,
   0.9162356,
   0.9023774,
   0.8891411,
   0.8685753,
   0.8734769,
   0.8867669,
   0.863714,
   0.8396658,
   0.8415209,
   0.8476675,
   0.813103,
   0.7380958};
   Double_t Graph_from_ratio_felx3082[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3082[20] = {
   0,
   0,
   0.01884134,
   0.01152313,
   0.009314312,
   0.008347092,
   0.007626129,
   0.007311028,
   0.007305315,
   0.007615933,
   0.008249532,
   0.009344583,
   0.01105124,
   0.01377138,
   0.01699571,
   0.02260137,
   0.02985539,
   0.05030055,
   0.06431194,
   0.09394986};
   Double_t Graph_from_ratio_fehx3082[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3082[20] = {
   0,
   0,
   0.01884134,
   0.01152313,
   0.009314312,
   0.008347092,
   0.007626129,
   0.007311028,
   0.007305315,
   0.007615933,
   0.008249532,
   0.009344583,
   0.01105124,
   0.01377138,
   0.01699571,
   0.02260137,
   0.02985539,
   0.05030055,
   0.06431194,
   0.09394986};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3082,Graph_from_ratio_fy3082,Graph_from_ratio_felx3082,Graph_from_ratio_fehx3082,Graph_from_ratio_fely3082,Graph_from_ratio_fehy3082);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3082 = new TH1F("Graph_Graph_from_ratio3082","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3082->SetMinimum(0);
   Graph_Graph_from_ratio3082->SetMaximum(1.016883);
   Graph_Graph_from_ratio3082->SetDirectory(0);
   Graph_Graph_from_ratio3082->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3082->SetLineColor(ci);
   Graph_Graph_from_ratio3082->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3082->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3082->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3082->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3082->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3082->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3082->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3082->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3082->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3082->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3082->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3082->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3082->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3082);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
