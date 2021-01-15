void bjetenls_jec_12_down()
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
   p1->Range(2.421687,-56.04438,7.240964,411.8255);
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
   
   TH1F *frame__23 = new TH1F("frame__23","t#bar{t}",20,3,7);
   frame__23->SetMinimum(0.1);
   frame__23->SetMaximum(407.1468);
   frame__23->SetEntries(503783);
   frame__23->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__23->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__23->SetMarkerColor(ci);
   frame__23->GetXaxis()->SetTitle("log(E)");
   frame__23->GetXaxis()->SetLabelFont(42);
   frame__23->GetXaxis()->SetLabelSize(0.035);
   frame__23->GetXaxis()->SetTitleSize(0.035);
   frame__23->GetXaxis()->SetTitleFont(42);
   frame__23->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__23->GetYaxis()->SetNoExponent();
   frame__23->GetYaxis()->SetLabelFont(42);
   frame__23->GetYaxis()->SetTitleSize(0.045);
   frame__23->GetYaxis()->SetTitleOffset(1.3);
   frame__23->GetYaxis()->SetTitleFont(42);
   frame__23->GetZaxis()->SetLabelFont(42);
   frame__23->GetZaxis()->SetLabelSize(0.035);
   frame__23->GetZaxis()->SetTitleSize(0.035);
   frame__23->GetZaxis()->SetTitleFont(42);
   frame__23->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_12 = new TH1F("mc_stack_12","mc",20,3,7);
   mc_stack_12->SetMinimum(-6.350547e-09);
   mc_stack_12->SetMaximum(328.8493);
   mc_stack_12->SetDirectory(0);
   mc_stack_12->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_12->SetLineColor(ci);
   mc_stack_12->GetXaxis()->SetLabelFont(42);
   mc_stack_12->GetXaxis()->SetLabelSize(0.035);
   mc_stack_12->GetXaxis()->SetTitleSize(0.035);
   mc_stack_12->GetXaxis()->SetTitleFont(42);
   mc_stack_12->GetYaxis()->SetLabelFont(42);
   mc_stack_12->GetYaxis()->SetLabelSize(0.035);
   mc_stack_12->GetYaxis()->SetTitleSize(0.035);
   mc_stack_12->GetYaxis()->SetTitleOffset(0);
   mc_stack_12->GetYaxis()->SetTitleFont(42);
   mc_stack_12->GetZaxis()->SetLabelFont(42);
   mc_stack_12->GetZaxis()->SetLabelSize(0.035);
   mc_stack_12->GetZaxis()->SetTitleSize(0.035);
   mc_stack_12->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_12);
   
   
   TH1F *bjetenls_jec_12_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_12_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(3,101.689);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(4,217.4875);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(5,278.2991);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(6,300.0956);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(7,296.4126);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(8,263.5435);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(9,213.6192);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(10,159.0925);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(11,109.0637);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(12,68.06768);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(13,39.71593);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(14,21.9418);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(15,11.22772);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(16,5.210139);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(17,2.263295);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(18,0.8629562);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(19,0.3088565);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(20,0.1010315);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinContent(21,0.03779705);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(3,1.106884);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(4,1.484183);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(5,1.519954);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(6,1.429856);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(7,1.286366);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(8,1.098438);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(9,0.8958549);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(10,0.7003418);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(11,0.5249645);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(12,0.3757282);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(13,0.2596634);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(14,0.1747572);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(15,0.1131605);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(16,0.06987507);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(17,0.04174159);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(18,0.02326729);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(19,0.01265543);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(20,0.006555595);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetBinError(21,0.003503314);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetEntries(496885);
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_12_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_12_down_Diboson_stack_2 = new TH1F("bjetenls_jec_12_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(7,0.2097423);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(8,0.2208301);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(9,0.1330581);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(10,0.1205731);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(11,0.1070547);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(12,0.0860667);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(13,0.04461584);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(14,0.0206134);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(15,0.02556178);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(16,0.01120601);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(17,0.01088886);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(18,0.006553363);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(19,0.00195428);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(20,0.003089594);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinContent(21,0.001011425);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(7,0.03294724);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(8,0.0313725);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(9,0.02160559);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(10,0.0183331);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(11,0.01589472);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(12,0.01318094);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(13,0.008497623);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(14,0.005236464);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(15,0.005265626);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(16,0.003162606);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(17,0.002930456);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(18,0.001949293);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(19,0.0009804806);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(20,0.001102154);
   bjetenls_jec_12_down_Diboson_stack_2->SetBinError(21,0.0005749851);
   bjetenls_jec_12_down_Diboson_stack_2->SetEntries(537);
   bjetenls_jec_12_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_12_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_12_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_12_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_12_down_DY_stack_3 = new TH1F("bjetenls_jec_12_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(13,0.06386276);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(15,0.04695202);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(16,0.04362063);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_12_down_DY_stack_3->SetBinContent(18,0.03055085);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(13,0.06386275);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(15,0.04695202);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(16,0.04362064);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_12_down_DY_stack_3->SetBinError(18,0.03055085);
   bjetenls_jec_12_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_12_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_12_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_12_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_12_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_12_down_W_stack_4 = new TH1F("bjetenls_jec_12_down_W_stack_4","W",20,3,7);
   bjetenls_jec_12_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_12_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_12_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_12_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_12_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_12_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(5,12.07817);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(6,11.9581);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(7,12.04701);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(8,10.9983);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(9,7.692972);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(10,6.273084);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(11,4.448446);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(12,2.86648);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(13,1.668231);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(14,0.9739491);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(15,0.5892838);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(16,0.3009709);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(17,0.1487325);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(18,0.06359949);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(19,0.03441781);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(20,0.01042437);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinContent(21,0.01080452);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(5,0.5731404);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(6,0.5145768);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(7,0.4681592);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(8,0.4057182);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(9,0.3058139);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(10,0.2513953);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(11,0.1913883);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(12,0.1394367);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(13,0.0962264);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(14,0.06574182);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(15,0.04698885);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(16,0.03012017);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(17,0.01934654);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(18,0.01116994);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(19,0.007640214);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(20,0.003635648);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetBinError(21,0.003448259);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetEntries(6337);
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_12_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_12_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_12_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_12_down_fx3023[21] = {
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
   Double_t Graph_from_bjetenls_jec_12_down_fy3023[21] = {
   0,
   0,
   92.26978,
   197.8485,
   255.0527,
   283.9898,
   281.7537,
   252.0643,
   202.7956,
   149.0793,
   101.2152,
   61.96204,
   36.37743,
   20.44624,
   10.27506,
   4.713701,
   2.052155,
   0.8217743,
   0.275681,
   0.08642249,
   0};
   Double_t Graph_from_bjetenls_jec_12_down_felx3023[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_12_down_fely3023[21] = {
   0,
   0,
   9.588474,
   14.05427,
   15.97037,
   16.852,
   16.78552,
   15.87653,
   14.24063,
   12.19635,
   10.04414,
   7.850452,
   6.003629,
   4.484566,
   3.152679,
   2.092412,
   1.311756,
   0.7176865,
   0.2748169,
   0.08642249,
   0};
   Double_t Graph_from_bjetenls_jec_12_down_fehx3023[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_12_down_fehy3023[21] = {
   1.841055,
   1.841055,
   10.64067,
   15.0899,
   15.97037,
   16.852,
   16.78552,
   15.87653,
   14.24063,
   13.23741,
   11.09397,
   8.914154,
   7.086775,
   5.595441,
   4.30885,
   3.321748,
   2.653691,
   2.229819,
   1.98744,
   1.889294,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_12_down_fx3023,Graph_from_bjetenls_jec_12_down_fy3023,Graph_from_bjetenls_jec_12_down_felx3023,Graph_from_bjetenls_jec_12_down_fehx3023,Graph_from_bjetenls_jec_12_down_fely3023,Graph_from_bjetenls_jec_12_down_fehy3023);
   grae->SetName("Graph_from_bjetenls_jec_12_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_12_down3023 = new TH1F("Graph_Graph_from_bjetenls_jec_12_down3023","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_12_down3023->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_12_down3023->SetMaximum(330.926);
   Graph_Graph_from_bjetenls_jec_12_down3023->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_12_down3023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_12_down3023->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_12_down3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_12_down3023);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_12_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_12_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_12_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_12_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_12_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_12_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__24 = new TH1F("ratioframe__24","t#bar{t}",20,3,7);
   ratioframe__24->SetMinimum(0.46);
   ratioframe__24->SetMaximum(1.54);
   ratioframe__24->SetEntries(503783);

   ci = TColor::GetColor("#cc0000");
   ratioframe__24->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__24->SetMarkerColor(ci);
   ratioframe__24->GetXaxis()->SetTitle("log(E)");
   ratioframe__24->GetXaxis()->SetLabelFont(42);
   ratioframe__24->GetXaxis()->SetLabelSize(0);
   ratioframe__24->GetXaxis()->SetTitleSize(0);
   ratioframe__24->GetXaxis()->SetTitleOffset(0);
   ratioframe__24->GetXaxis()->SetTitleFont(42);
   ratioframe__24->GetYaxis()->SetTitle("Data/MC");
   ratioframe__24->GetYaxis()->SetNoExponent();
   ratioframe__24->GetYaxis()->SetNdivisions(5);
   ratioframe__24->GetYaxis()->SetLabelFont(42);
   ratioframe__24->GetYaxis()->SetLabelSize(0.18);
   ratioframe__24->GetYaxis()->SetTitleSize(0.2);
   ratioframe__24->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__24->GetYaxis()->SetTitleFont(42);
   ratioframe__24->GetZaxis()->SetLabelFont(42);
   ratioframe__24->GetZaxis()->SetLabelSize(0.035);
   ratioframe__24->GetZaxis()->SetTitleSize(0.035);
   ratioframe__24->GetZaxis()->SetTitleFont(42);
   ratioframe__24->Draw("");
   
   Double_t Graph_from_ratio_fx3024[20] = {
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
   Double_t Graph_from_ratio_fy3024[20] = {
   0,
   0,
   0.8623502,
   0.8714604,
   0.875562,
   0.9067658,
   0.9102356,
   0.9160552,
   0.9157821,
   0.9001475,
   0.8896499,
   0.8703308,
   0.8767198,
   0.8884733,
   0.864211,
   0.8468837,
   0.846737,
   0.8527638,
   0.7985464,
   0.7544821};
   Double_t Graph_from_ratio_felx3024[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3024[20] = {
   0,
   0,
   0.01884382,
   0.01154428,
   0.009314371,
   0.00834011,
   0.00760675,
   0.007298085,
   0.007291815,
   0.007594166,
   0.008243409,
   0.009371896,
   0.01110904,
   0.01383515,
   0.01711836,
   0.02291416,
   0.03020168,
   0.0510996,
   0.06388648,
   0.09636254};
   Double_t Graph_from_ratio_fehx3024[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3024[20] = {
   0,
   0,
   0.01884382,
   0.01154428,
   0.009314371,
   0.00834011,
   0.00760675,
   0.007298085,
   0.007291815,
   0.007594166,
   0.008243409,
   0.009371896,
   0.01110904,
   0.01383515,
   0.01711836,
   0.02291416,
   0.03020168,
   0.0510996,
   0.06388648,
   0.09636254};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3024,Graph_from_ratio_fy3024,Graph_from_ratio_felx3024,Graph_from_ratio_fehx3024,Graph_from_ratio_fely3024,Graph_from_ratio_fehy3024);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3024 = new TH1F("Graph_Graph_from_ratio3024","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3024->SetMinimum(0);
   Graph_Graph_from_ratio3024->SetMaximum(1.015689);
   Graph_Graph_from_ratio3024->SetDirectory(0);
   Graph_Graph_from_ratio3024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3024->SetLineColor(ci);
   Graph_Graph_from_ratio3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3024->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3024->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3024->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3024->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3024);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
