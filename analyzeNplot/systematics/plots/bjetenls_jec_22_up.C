void bjetenls_jec_22_up()
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
   p1->Range(2.421687,-56.17014,7.240964,412.7477);
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
   
   TH1F *frame__13 = new TH1F("frame__13","t#bar{t}",20,3,7);
   frame__13->SetMinimum(0.1);
   frame__13->SetMaximum(408.0585);
   frame__13->SetEntries(505593);
   frame__13->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__13->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__13->SetMarkerColor(ci);
   frame__13->GetXaxis()->SetTitle("log(E)");
   frame__13->GetXaxis()->SetLabelFont(42);
   frame__13->GetXaxis()->SetLabelSize(0.035);
   frame__13->GetXaxis()->SetTitleSize(0.035);
   frame__13->GetXaxis()->SetTitleFont(42);
   frame__13->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__13->GetYaxis()->SetNoExponent();
   frame__13->GetYaxis()->SetLabelFont(42);
   frame__13->GetYaxis()->SetTitleSize(0.045);
   frame__13->GetYaxis()->SetTitleOffset(1.3);
   frame__13->GetYaxis()->SetTitleFont(42);
   frame__13->GetZaxis()->SetLabelFont(42);
   frame__13->GetZaxis()->SetLabelSize(0.035);
   frame__13->GetZaxis()->SetTitleSize(0.035);
   frame__13->GetZaxis()->SetTitleFont(42);
   frame__13->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_7 = new TH1F("mc_stack_7","mc",20,3,7);
   mc_stack_7->SetMinimum(-1.996616e-08);
   mc_stack_7->SetMaximum(329.5857);
   mc_stack_7->SetDirectory(0);
   mc_stack_7->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_7->SetLineColor(ci);
   mc_stack_7->GetXaxis()->SetLabelFont(42);
   mc_stack_7->GetXaxis()->SetLabelSize(0.035);
   mc_stack_7->GetXaxis()->SetTitleSize(0.035);
   mc_stack_7->GetXaxis()->SetTitleFont(42);
   mc_stack_7->GetYaxis()->SetLabelFont(42);
   mc_stack_7->GetYaxis()->SetLabelSize(0.035);
   mc_stack_7->GetYaxis()->SetTitleSize(0.035);
   mc_stack_7->GetYaxis()->SetTitleOffset(0);
   mc_stack_7->GetYaxis()->SetTitleFont(42);
   mc_stack_7->GetZaxis()->SetLabelFont(42);
   mc_stack_7->GetZaxis()->SetLabelSize(0.035);
   mc_stack_7->GetZaxis()->SetTitleSize(0.035);
   mc_stack_7->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_7);
   
   
   TH1F *bjetenls_jec_22_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_22_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(3,101.4977);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(4,218.0896);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(5,279.3058);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(6,300.8676);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(7,297.5741);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(8,264.4426);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(9,213.986);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(10,159.2395);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(11,109.2691);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(12,68.4144);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(13,39.98266);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(14,22.08413);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(15,11.38931);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(16,5.288759);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(17,2.301683);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(18,0.8796626);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(19,0.3131572);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(20,0.1040108);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinContent(21,0.03777461);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(3,1.105735);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(4,1.486288);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(5,1.522662);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(6,1.431664);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(7,1.288961);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(8,1.100337);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(9,0.8966397);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(10,0.7007099);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(11,0.5254092);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(12,0.3767616);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(13,0.2604825);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(14,0.1752861);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(15,0.1139878);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(16,0.07037548);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(17,0.04209709);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(18,0.02350006);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(19,0.01273769);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(20,0.006652264);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetBinError(21,0.003500862);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetEntries(498660);
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_22_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_22_up_Diboson_stack_2 = new TH1F("bjetenls_jec_22_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(3,0.174099);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(4,0.2638773);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(5,0.2475208);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(6,0.2569667);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(7,0.2202767);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(8,0.2215984);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(9,0.1361991);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(10,0.1178832);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(11,0.1087443);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(12,0.08179765);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(13,0.04708211);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(14,0.02063066);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(15,0.02595551);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(16,0.01259856);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(17,0.01085748);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(18,0.00653504);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(19,0.001953658);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(20,0.003084164);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinContent(21,0.001012181);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(3,0.04370735);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(4,0.05097928);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(5,0.04428255);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(6,0.04081453);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(7,0.03379461);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(8,0.03149993);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(9,0.02183464);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(10,0.01812289);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(11,0.0159764);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(12,0.01282962);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(13,0.008809877);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(14,0.00523892);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(15,0.005328135);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(16,0.003312526);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(17,0.002922336);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(18,0.001943832);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(19,0.0009801359);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(20,0.001100089);
   bjetenls_jec_22_up_Diboson_stack_2->SetBinError(21,0.0005754733);
   bjetenls_jec_22_up_Diboson_stack_2->SetEntries(542);
   bjetenls_jec_22_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_22_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_22_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_22_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_22_up_DY_stack_3 = new TH1F("bjetenls_jec_22_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(3,0.6433779);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(4,0.3708559);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(5,0.6742009);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(6,0.8745826);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(7,0.8682066);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(8,0.4001579);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(10,0.1302783);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(11,0.150773);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(12,0.1736613);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(14,0.07650385);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(17,0.0006881923);
   bjetenls_jec_22_up_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(3,0.6433779);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(4,0.3708559);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(5,0.4770443);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(6,0.5058547);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(7,0.4343939);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(8,0.2836091);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(10,0.1302783);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(11,0.1103087);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(12,0.1228309);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(14,0.07650385);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(17,0.0006881923);
   bjetenls_jec_22_up_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_jec_22_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_22_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_22_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_22_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_22_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_22_up_W_stack_4 = new TH1F("bjetenls_jec_22_up_W_stack_4","W",20,3,7);
   bjetenls_jec_22_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_22_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_22_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_22_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_22_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_22_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(3,4.513494);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(4,9.032337);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(5,12.20913);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(6,11.89206);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(7,12.11017);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(8,10.94268);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(9,7.816295);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(10,6.319727);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(11,4.362596);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(12,2.919185);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(13,1.714288);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(14,0.9861458);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(15,0.5927624);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(16,0.2967456);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(17,0.1483465);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(18,0.06345626);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(19,0.03435584);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(20,0.01040983);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinContent(21,0.01079938);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(3,0.4198387);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(4,0.5424374);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(5,0.5756197);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(6,0.5127915);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(7,0.4696113);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(8,0.4046799);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(9,0.3085974);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(10,0.2520356);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(11,0.1894548);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(12,0.1410589);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(13,0.09762884);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(14,0.06612058);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(15,0.04696102);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(16,0.02984175);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(17,0.01929552);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(18,0.01114417);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(19,0.007626266);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(20,0.003630388);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetBinError(21,0.003446845);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetEntries(6367);
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_22_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_22_up_fx3013[21] = {
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
   Double_t Graph_from_bjetenls_jec_22_up_fy3013[21] = {
   0,
   0,
   92.0827,
   198.2885,
   255.6805,
   285.5181,
   282.6871,
   252.9611,
   203.0305,
   149.7423,
   101.2655,
   62.24112,
   36.50422,
   20.57332,
   10.42706,
   4.742693,
   2.072754,
   0.8341479,
   0.2795702,
   0.08746018,
   0};
   Double_t Graph_from_bjetenls_jec_22_up_felx3013[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_22_up_fely3013[21] = {
   0,
   0,
   9.578713,
   14.06991,
   15.99001,
   16.89728,
   16.8133,
   15.90475,
   14.24888,
   12.2235,
   10.04664,
   7.868207,
   6.01418,
   4.498713,
   3.176696,
   2.099327,
   1.319546,
   0.7257174,
   0.2786195,
   0.08746017,
   0};
   Double_t Graph_from_bjetenls_jec_22_up_fehx3013[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_22_up_fehy3013[21] = {
   1.841055,
   1.841055,
   10.63096,
   15.10551,
   15.99001,
   16.89728,
   16.8133,
   15.90475,
   14.24888,
   13.26447,
   11.09646,
   8.931766,
   7.097181,
   5.609246,
   4.331733,
   3.327976,
   2.659883,
   2.234784,
   1.989363,
   1.889859,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_22_up_fx3013,Graph_from_bjetenls_jec_22_up_fy3013,Graph_from_bjetenls_jec_22_up_felx3013,Graph_from_bjetenls_jec_22_up_fehx3013,Graph_from_bjetenls_jec_22_up_fely3013,Graph_from_bjetenls_jec_22_up_fehy3013);
   grae->SetName("Graph_from_bjetenls_jec_22_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_22_up3013 = new TH1F("Graph_Graph_from_bjetenls_jec_22_up3013","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_22_up3013->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_22_up3013->SetMaximum(332.657);
   Graph_Graph_from_bjetenls_jec_22_up3013->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_22_up3013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_22_up3013->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_up3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_22_up3013);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_22_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_22_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_22_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_22_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_22_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_22_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__14 = new TH1F("ratioframe__14","t#bar{t}",20,3,7);
   ratioframe__14->SetMinimum(0.46);
   ratioframe__14->SetMaximum(1.54);
   ratioframe__14->SetEntries(505593);

   ci = TColor::GetColor("#cc0000");
   ratioframe__14->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__14->SetMarkerColor(ci);
   ratioframe__14->GetXaxis()->SetTitle("log(E)");
   ratioframe__14->GetXaxis()->SetLabelFont(42);
   ratioframe__14->GetXaxis()->SetLabelSize(0);
   ratioframe__14->GetXaxis()->SetTitleSize(0);
   ratioframe__14->GetXaxis()->SetTitleOffset(0);
   ratioframe__14->GetXaxis()->SetTitleFont(42);
   ratioframe__14->GetYaxis()->SetTitle("Data/MC");
   ratioframe__14->GetYaxis()->SetNoExponent();
   ratioframe__14->GetYaxis()->SetNdivisions(5);
   ratioframe__14->GetYaxis()->SetLabelFont(42);
   ratioframe__14->GetYaxis()->SetLabelSize(0.18);
   ratioframe__14->GetYaxis()->SetTitleSize(0.2);
   ratioframe__14->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__14->GetYaxis()->SetTitleFont(42);
   ratioframe__14->GetZaxis()->SetLabelFont(42);
   ratioframe__14->GetZaxis()->SetLabelSize(0.035);
   ratioframe__14->GetZaxis()->SetTitleSize(0.035);
   ratioframe__14->GetZaxis()->SetTitleFont(42);
   ratioframe__14->Draw("");
   
   Double_t Graph_from_ratio_fx3014[20] = {
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
   Double_t Graph_from_ratio_fy3014[20] = {
   0,
   0,
   0.8619666,
   0.8706152,
   0.8743107,
   0.9096087,
   0.9096267,
   0.9165024,
   0.9148055,
   0.9031099,
   0.8891425,
   0.8694225,
   0.8731542,
   0.8880283,
   0.8649824,
   0.8406873,
   0.8420437,
   0.8510886,
   0.7999911,
   0.7443114};
   Double_t Graph_from_ratio_felx3014[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3014[20] = {
   0,
   0,
   0.01885117,
   0.01152056,
   0.009287172,
   0.008345453,
   0.00758794,
   0.00728814,
   0.007279979,
   0.007606246,
   0.008233487,
   0.009341564,
   0.01103777,
   0.01378348,
   0.01699639,
   0.02260774,
   0.02985052,
   0.05042094,
   0.06354893,
   0.09427857};
   Double_t Graph_from_ratio_fehx3014[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3014[20] = {
   0,
   0,
   0.01885117,
   0.01152056,
   0.009287172,
   0.008345453,
   0.00758794,
   0.00728814,
   0.007279979,
   0.007606246,
   0.008233487,
   0.009341564,
   0.01103777,
   0.01378348,
   0.01699639,
   0.02260774,
   0.02985052,
   0.05042094,
   0.06354893,
   0.09427857};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3014,Graph_from_ratio_fy3014,Graph_from_ratio_felx3014,Graph_from_ratio_fehx3014,Graph_from_ratio_fely3014,Graph_from_ratio_fehy3014);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3014 = new TH1F("Graph_Graph_from_ratio3014","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3014->SetMinimum(0);
   Graph_Graph_from_ratio3014->SetMaximum(1.01617);
   Graph_Graph_from_ratio3014->SetDirectory(0);
   Graph_Graph_from_ratio3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3014->SetLineColor(ci);
   Graph_Graph_from_ratio3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3014);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
