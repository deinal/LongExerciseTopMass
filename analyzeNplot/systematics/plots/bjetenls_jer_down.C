void bjetenls_jer_down()
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
   p1->Range(2.421687,-55.89439,7.240964,410.7256);
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
   
   TH1F *frame__11 = new TH1F("frame__11","t#bar{t}",20,3,7);
   frame__11->SetMinimum(0.1);
   frame__11->SetMaximum(406.0594);
   frame__11->SetEntries(499295);
   frame__11->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__11->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__11->SetMarkerColor(ci);
   frame__11->GetXaxis()->SetTitle("log(E)");
   frame__11->GetXaxis()->SetLabelFont(42);
   frame__11->GetXaxis()->SetLabelSize(0.035);
   frame__11->GetXaxis()->SetTitleSize(0.035);
   frame__11->GetXaxis()->SetTitleFont(42);
   frame__11->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   frame__11->GetYaxis()->SetNoExponent();
   frame__11->GetYaxis()->SetLabelFont(42);
   frame__11->GetYaxis()->SetTitleSize(0.045);
   frame__11->GetYaxis()->SetTitleOffset(1.3);
   frame__11->GetYaxis()->SetTitleFont(42);
   frame__11->GetZaxis()->SetLabelFont(42);
   frame__11->GetZaxis()->SetLabelSize(0.035);
   frame__11->GetZaxis()->SetTitleSize(0.035);
   frame__11->GetZaxis()->SetTitleFont(42);
   frame__11->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_6 = new TH1F("mc_stack_6","mc",20,3,7);
   mc_stack_6->SetMinimum(-1.790531e-08);
   mc_stack_6->SetMaximum(327.971);
   mc_stack_6->SetDirectory(0);
   mc_stack_6->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_6->SetLineColor(ci);
   mc_stack_6->GetXaxis()->SetLabelFont(42);
   mc_stack_6->GetXaxis()->SetLabelSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleFont(42);
   mc_stack_6->GetYaxis()->SetLabelFont(42);
   mc_stack_6->GetYaxis()->SetLabelSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleOffset(0);
   mc_stack_6->GetYaxis()->SetTitleFont(42);
   mc_stack_6->GetZaxis()->SetLabelFont(42);
   mc_stack_6->GetZaxis()->SetLabelSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_6);
   
   
   TH1F *bjetenls_jer_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jer_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(3,104.1491);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(4,218.1671);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(5,279.564);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(6,299.742);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(7,294.888);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(8,261.0517);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(9,210.3215);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(10,156.5581);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(11,107.2454);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(12,67.0021);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(13,39.20085);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(14,21.7122);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(15,11.11849);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(16,5.168803);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(17,2.2535);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(18,0.8605852);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(19,0.310523);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(20,0.09741345);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinContent(21,0.03767025);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(3,1.119804);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(4,1.486662);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(5,1.523204);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(6,1.42901);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(7,1.282875);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(8,1.093253);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(9,0.8888765);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(10,0.6948133);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(11,0.5205498);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(12,0.3728048);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(13,0.2579388);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(14,0.1738245);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(15,0.1125983);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(16,0.06959298);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(17,0.04165541);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(18,0.02325019);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(19,0.01268182);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(20,0.006442941);
   bjetenls_jer_down_t#bar{t}_stack_1->SetBinError(21,0.003504768);
   bjetenls_jer_down_t#bar{t}_stack_1->SetEntries(492524);
   bjetenls_jer_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jer_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jer_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jer_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_down_t#bar{t}_stack_1->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jer_down_Diboson_stack_2 = new TH1F("bjetenls_jer_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(3,0.1476899);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(4,0.2835448);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(5,0.2289698);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(6,0.2231132);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(7,0.2258176);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(8,0.2136954);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(9,0.1250923);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(10,0.1156634);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(11,0.1015384);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(12,0.08162571);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(13,0.04086114);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(14,0.02057018);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(15,0.02576984);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(16,0.01301424);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(17,0.009492466);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(18,0.00573962);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(19,0.002027749);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(20,0.003050331);
   bjetenls_jer_down_Diboson_stack_2->SetBinContent(21,0.001013943);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(3,0.04029329);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(4,0.05287192);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(5,0.04193009);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(6,0.0382758);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(7,0.03444013);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(8,0.03060661);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(9,0.02092451);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(10,0.01799329);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(11,0.01539359);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(12,0.01278578);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(13,0.008059599);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(14,0.005231476);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(15,0.005307574);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(16,0.003412751);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(17,0.002683779);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(18,0.00185385);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(19,0.0009878304);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(20,0.001109021);
   bjetenls_jer_down_Diboson_stack_2->SetBinError(21,0.0005765088);
   bjetenls_jer_down_Diboson_stack_2->SetEntries(518);
   bjetenls_jer_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jer_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jer_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jer_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_down_Diboson_stack_2->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jer_down_DY_stack_3 = new TH1F("bjetenls_jer_down_DY_stack_3","DY",20,3,7);
   bjetenls_jer_down_DY_stack_3->SetBinContent(3,0.6579982);
   bjetenls_jer_down_DY_stack_3->SetBinContent(4,0.3738542);
   bjetenls_jer_down_DY_stack_3->SetBinContent(5,0.6884177);
   bjetenls_jer_down_DY_stack_3->SetBinContent(6,0.5751764);
   bjetenls_jer_down_DY_stack_3->SetBinContent(7,1.094585);
   bjetenls_jer_down_DY_stack_3->SetBinContent(8,0.1870573);
   bjetenls_jer_down_DY_stack_3->SetBinContent(10,0.1307715);
   bjetenls_jer_down_DY_stack_3->SetBinContent(11,0.1516767);
   bjetenls_jer_down_DY_stack_3->SetBinContent(12,0.1739573);
   bjetenls_jer_down_DY_stack_3->SetBinContent(13,0.141211);
   bjetenls_jer_down_DY_stack_3->SetBinContent(15,0.04682449);
   bjetenls_jer_down_DY_stack_3->SetBinContent(16,0.04348324);
   bjetenls_jer_down_DY_stack_3->SetBinContent(17,0.0006915361);
   bjetenls_jer_down_DY_stack_3->SetBinContent(18,0.03049279);
   bjetenls_jer_down_DY_stack_3->SetBinError(3,0.6579982);
   bjetenls_jer_down_DY_stack_3->SetBinError(4,0.3738542);
   bjetenls_jer_down_DY_stack_3->SetBinError(5,0.487188);
   bjetenls_jer_down_DY_stack_3->SetBinError(6,0.4071503);
   bjetenls_jer_down_DY_stack_3->SetBinError(7,0.4897127);
   bjetenls_jer_down_DY_stack_3->SetBinError(8,0.1870573);
   bjetenls_jer_down_DY_stack_3->SetBinError(10,0.1307715);
   bjetenls_jer_down_DY_stack_3->SetBinError(11,0.1108233);
   bjetenls_jer_down_DY_stack_3->SetBinError(12,0.1230401);
   bjetenls_jer_down_DY_stack_3->SetBinError(13,0.1003513);
   bjetenls_jer_down_DY_stack_3->SetBinError(15,0.04682449);
   bjetenls_jer_down_DY_stack_3->SetBinError(16,0.04348324);
   bjetenls_jer_down_DY_stack_3->SetBinError(17,0.0006915361);
   bjetenls_jer_down_DY_stack_3->SetBinError(18,0.03049279);
   bjetenls_jer_down_DY_stack_3->SetEntries(23);
   bjetenls_jer_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jer_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jer_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jer_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_down_DY_stack_3->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jer_down_W_stack_4 = new TH1F("bjetenls_jer_down_W_stack_4","W",20,3,7);
   bjetenls_jer_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jer_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jer_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jer_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_down_W_stack_4->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jer_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jer_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(3,4.517405);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(4,9.044206);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(5,11.837);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(6,11.81308);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(7,12.0477);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(8,10.60215);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(9,7.587491);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(10,6.023146);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(11,4.348482);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(12,2.838545);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(13,1.656307);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(14,0.9859706);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(15,0.5801066);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(16,0.2837132);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(17,0.1494147);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(18,0.06377506);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(19,0.03457857);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(20,0.01043283);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinContent(21,0.01087625);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(3,0.4196601);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(4,0.5433097);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(5,0.5672886);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(6,0.5122144);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(7,0.4678865);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(8,0.3983056);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(9,0.3039547);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(10,0.2461723);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(11,0.189369);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(12,0.1390047);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(13,0.09595156);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(14,0.06616012);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(15,0.04652244);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(16,0.02909187);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(17,0.01939479);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(18,0.01120195);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(19,0.007675215);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(20,0.003638737);
   bjetenls_jer_down_SinglesPtop_stack_5->SetBinError(21,0.003471883);
   bjetenls_jer_down_SinglesPtop_stack_5->SetEntries(6230);
   bjetenls_jer_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jer_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jer_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jer_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jer_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jer_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jer_down_SinglesPtop_stack_5->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_jer_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jer_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jer_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jer_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jer_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jer_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jer_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jer_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jer_down_fx3011[21] = {
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
   Double_t Graph_from_bjetenls_jer_down_fy3011[21] = {
   0,
   0,
   106.995,
   223.5886,
   280.2821,
   301.3917,
   284.4866,
   242.9409,
   186.8333,
   131.2496,
   85.16029,
   52.76473,
   30.28244,
   16.87887,
   8.37616,
   3.733359,
   1.621759,
   0.6186877,
   0.2115514,
   0.06890055,
   0};
   Double_t Graph_from_bjetenls_jer_down_felx3011[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jer_down_fely3011[21] = {
   0,
   0,
   10.32786,
   14.95288,
   16.74163,
   17.36064,
   16.86673,
   15.58656,
   13.65674,
   11.44205,
   9.210266,
   7.24098,
   5.472495,
   4.067394,
   2.835558,
   1.843459,
   1.137283,
   0.5748264,
   0.2114422,
   0.06890055,
   0};
   Double_t Graph_from_bjetenls_jer_down_fehx3011[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jer_down_fehy3011[21] = {
   1.841055,
   1.841055,
   11.37633,
   14.95288,
   16.74163,
   17.36064,
   16.86673,
   15.58656,
   14.69342,
   12.48581,
   10.2646,
   8.310015,
   6.563622,
   5.189395,
   4.008373,
   3.10037,
   2.518645,
   2.145384,
   1.95522,
   1.879705,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jer_down_fx3011,Graph_from_bjetenls_jer_down_fy3011,Graph_from_bjetenls_jer_down_felx3011,Graph_from_bjetenls_jer_down_fehx3011,Graph_from_bjetenls_jer_down_fely3011,Graph_from_bjetenls_jer_down_fehy3011);
   grae->SetName("Graph_from_bjetenls_jer_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jer_down3011 = new TH1F("Graph_Graph_from_bjetenls_jer_down3011","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jer_down3011->SetMinimum(0);
   Graph_Graph_from_bjetenls_jer_down3011->SetMaximum(350.6276);
   Graph_Graph_from_bjetenls_jer_down3011->SetDirectory(0);
   Graph_Graph_from_bjetenls_jer_down3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jer_down3011->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jer_down3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jer_down3011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jer_down3011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jer_down3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jer_down3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jer_down3011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jer_down3011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jer_down3011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jer_down3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jer_down3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jer_down3011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jer_down3011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jer_down3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jer_down3011);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jer_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jer_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jer_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jer_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jer_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jer_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__12 = new TH1F("ratioframe__12","t#bar{t}",20,3,7);
   ratioframe__12->SetMinimum(0.46);
   ratioframe__12->SetMaximum(1.54);
   ratioframe__12->SetEntries(499295);

   ci = TColor::GetColor("#cc0000");
   ratioframe__12->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__12->SetMarkerColor(ci);
   ratioframe__12->GetXaxis()->SetTitle("log(E)");
   ratioframe__12->GetXaxis()->SetLabelFont(42);
   ratioframe__12->GetXaxis()->SetLabelSize(0);
   ratioframe__12->GetXaxis()->SetTitleSize(0);
   ratioframe__12->GetXaxis()->SetTitleOffset(0);
   ratioframe__12->GetXaxis()->SetTitleFont(42);
   ratioframe__12->GetYaxis()->SetTitle("Data/MC");
   ratioframe__12->GetYaxis()->SetNoExponent();
   ratioframe__12->GetYaxis()->SetNdivisions(5);
   ratioframe__12->GetYaxis()->SetLabelFont(42);
   ratioframe__12->GetYaxis()->SetLabelSize(0.18);
   ratioframe__12->GetYaxis()->SetTitleSize(0.2);
   ratioframe__12->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__12->GetYaxis()->SetTitleFont(42);
   ratioframe__12->GetZaxis()->SetLabelFont(42);
   ratioframe__12->GetZaxis()->SetLabelSize(0.035);
   ratioframe__12->GetZaxis()->SetTitleSize(0.035);
   ratioframe__12->GetZaxis()->SetTitleFont(42);
   ratioframe__12->Draw("");
   
   Double_t Graph_from_ratio_fx3012[20] = {
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
   Double_t Graph_from_ratio_fy3012[20] = {
   0,
   0,
   0.9773711,
   0.981217,
   0.9588245,
   0.9649063,
   0.9228904,
   0.8929857,
   0.8568991,
   0.8060645,
   0.7613991,
   0.7527471,
   0.7378901,
   0.742949,
   0.7115816,
   0.677682,
   0.6720647,
   0.6440688,
   0.6094312,
   0.6213044};
   Double_t Graph_from_ratio_felx3012[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3012[20] = {
   0,
   0,
   0.02027687,
   0.01245357,
   0.009866086,
   0.00865188,
   0.007723764,
   0.007185249,
   0.007043353,
   0.007133322,
   0.00753008,
   0.008612779,
   0.01010239,
   0.01216143,
   0.01517485,
   0.01987345,
   0.02616521,
   0.04181897,
   0.05383033,
   0.08682981};
   Double_t Graph_from_ratio_fehx3012[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3012[20] = {
   0,
   0,
   0.02027687,
   0.01245357,
   0.009866086,
   0.00865188,
   0.007723764,
   0.007185249,
   0.007043353,
   0.007133322,
   0.00753008,
   0.008612779,
   0.01010239,
   0.01216143,
   0.01517485,
   0.01987345,
   0.02616521,
   0.04181897,
   0.05383033,
   0.08682981};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3012,Graph_from_ratio_fy3012,Graph_from_ratio_felx3012,Graph_from_ratio_fehx3012,Graph_from_ratio_fely3012,Graph_from_ratio_fehy3012);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3012 = new TH1F("Graph_Graph_from_ratio3012","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3012->SetMinimum(0);
   Graph_Graph_from_ratio3012->SetMaximum(1.097413);
   Graph_Graph_from_ratio3012->SetDirectory(0);
   Graph_Graph_from_ratio3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3012->SetLineColor(ci);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3012);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
