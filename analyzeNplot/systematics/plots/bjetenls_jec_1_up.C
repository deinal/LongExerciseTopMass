void bjetenls_jec_1_up()
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
   p1->Range(2.421687,-56.17009,7.240964,412.7473);
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
   
   TH1F *frame__17 = new TH1F("frame__17","t#bar{t}",20,3,7);
   frame__17->SetMinimum(0.1);
   frame__17->SetMaximum(408.0582);
   frame__17->SetEntries(505213);
   frame__17->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__17->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__17->SetMarkerColor(ci);
   frame__17->GetXaxis()->SetTitle("log(E)");
   frame__17->GetXaxis()->SetLabelFont(42);
   frame__17->GetXaxis()->SetLabelSize(0.035);
   frame__17->GetXaxis()->SetTitleSize(0.035);
   frame__17->GetXaxis()->SetTitleFont(42);
   frame__17->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__17->GetYaxis()->SetNoExponent();
   frame__17->GetYaxis()->SetLabelFont(42);
   frame__17->GetYaxis()->SetTitleSize(0.045);
   frame__17->GetYaxis()->SetTitleOffset(1.3);
   frame__17->GetYaxis()->SetTitleFont(42);
   frame__17->GetZaxis()->SetLabelFont(42);
   frame__17->GetZaxis()->SetLabelSize(0.035);
   frame__17->GetZaxis()->SetTitleSize(0.035);
   frame__17->GetZaxis()->SetTitleFont(42);
   frame__17->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_9 = new TH1F("mc_stack_9","mc",20,3,7);
   mc_stack_9->SetMinimum(-2.938776e-08);
   mc_stack_9->SetMaximum(329.5854);
   mc_stack_9->SetDirectory(0);
   mc_stack_9->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_9->SetLineColor(ci);
   mc_stack_9->GetXaxis()->SetLabelFont(42);
   mc_stack_9->GetXaxis()->SetLabelSize(0.035);
   mc_stack_9->GetXaxis()->SetTitleSize(0.035);
   mc_stack_9->GetXaxis()->SetTitleFont(42);
   mc_stack_9->GetYaxis()->SetLabelFont(42);
   mc_stack_9->GetYaxis()->SetLabelSize(0.035);
   mc_stack_9->GetYaxis()->SetTitleSize(0.035);
   mc_stack_9->GetYaxis()->SetTitleOffset(0);
   mc_stack_9->GetYaxis()->SetTitleFont(42);
   mc_stack_9->GetZaxis()->SetLabelFont(42);
   mc_stack_9->GetZaxis()->SetLabelSize(0.035);
   mc_stack_9->GetZaxis()->SetTitleSize(0.035);
   mc_stack_9->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_9);
   
   
   TH1F *bjetenls_jec_1_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_1_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(3,101.2625);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(4,217.7903);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(5,278.8676);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(6,300.7987);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(7,297.1947);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(8,263.8167);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(9,213.7923);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(10,158.9658);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(11,109.2536);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(12,68.4695);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(13,40.06105);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(14,22.11459);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(15,11.40104);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(16,5.295755);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(17,2.302782);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(18,0.8818517);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(19,0.3130351);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(20,0.1039439);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinContent(21,0.03773504);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(3,1.104415);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(4,1.485317);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(5,1.521457);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(6,1.431598);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(7,1.288154);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(8,1.099007);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(9,0.8962336);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(10,0.7000689);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(11,0.525385);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(12,0.3769159);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(13,0.2607426);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(14,0.1753921);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(15,0.1140459);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(16,0.07041841);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(17,0.04210933);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(18,0.02352576);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(19,0.01273273);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(20,0.006647935);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetBinError(21,0.003497301);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetEntries(498282);
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_1_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_1_up_Diboson_stack_2 = new TH1F("bjetenls_jec_1_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(3,0.1615812);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(4,0.2641292);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(5,0.2462348);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(6,0.2567745);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(7,0.2196968);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(8,0.2161682);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(9,0.1361636);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(10,0.1178045);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(11,0.1086594);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(12,0.08172618);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(13,0.04704409);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(14,0.0206138);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(15,0.02593287);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(16,0.01258313);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(17,0.01084957);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(18,0.006531712);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(19,0.001950513);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(20,0.00308189);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinContent(21,0.001010632);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(3,0.04186721);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(4,0.05102768);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(5,0.04406566);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(6,0.04078546);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(7,0.03369366);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(8,0.03102635);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(9,0.02182841);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(10,0.01811088);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(11,0.01596428);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(12,0.01281825);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(13,0.008802838);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(14,0.005234537);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(15,0.005323578);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(16,0.003308335);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(17,0.002920041);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(18,0.001942876);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(19,0.0009785675);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(20,0.001099349);
   bjetenls_jec_1_up_Diboson_stack_2->SetBinError(21,0.0005745788);
   bjetenls_jec_1_up_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_1_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_1_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_1_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_1_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_1_up_DY_stack_3 = new TH1F("bjetenls_jec_1_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(3,0.6441355);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(4,0.371136);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(5,0.6767966);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(6,0.8776758);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(7,0.8694429);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(14,0.07636282);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(17,0.0006863359);
   bjetenls_jec_1_up_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(3,0.6441356);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(4,0.371136);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(5,0.4788814);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(6,0.5076618);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(7,0.4350005);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(14,0.07636282);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(17,0.0006863359);
   bjetenls_jec_1_up_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_jec_1_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_1_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_1_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_1_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_1_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_1_up_W_stack_4 = new TH1F("bjetenls_jec_1_up_W_stack_4","W",20,3,7);
   bjetenls_jec_1_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_1_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_1_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_1_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_1_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_1_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(3,4.534377);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(4,9.004114);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(5,12.18948);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(6,11.95773);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(7,12.08221);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(8,10.91307);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(9,7.814456);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(10,6.300913);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(11,4.377729);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(12,2.912248);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(13,1.720404);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(14,0.9809313);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(15,0.5976071);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(16,0.2973795);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(17,0.150819);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(18,0.06339715);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(19,0.03432319);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(20,0.01039943);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinContent(21,0.01078791);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(3,0.4208043);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(4,0.5412746);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(5,0.5753254);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(6,0.5141674);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(7,0.4688372);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(8,0.4041362);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(9,0.308523);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(10,0.2517005);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(11,0.1897601);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(12,0.1408837);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(13,0.09781283);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(14,0.06591793);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(15,0.0472068);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(16,0.02990749);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(17,0.01945377);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(18,0.01113393);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(19,0.007619151);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(20,0.003626871);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetBinError(21,0.003443111);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetEntries(6367);
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_1_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_1_up_fx3017[21] = {
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
   Double_t Graph_from_bjetenls_jec_1_up_fy3017[21] = {
   0,
   0,
   92.55646,
   197.9488,
   255.5307,
   284.9448,
   282.3354,
   252.2081,
   202.8091,
   149.5398,
   100.995,
   62.3029,
   36.53447,
   20.5666,
   10.39187,
   4.760683,
   2.075171,
   0.8361267,
   0.283248,
   0.08626828,
   0};
   Double_t Graph_from_bjetenls_jec_1_up_felx3017[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_1_up_fely3017[21] = {
   0,
   0,
   9.603412,
   14.05783,
   15.98533,
   16.88031,
   16.80284,
   15.88106,
   14.24111,
   12.21522,
   10.03317,
   7.872132,
   6.016694,
   4.497967,
   3.171153,
   2.103606,
   1.320457,
   0.7269953,
   0.2822099,
   0.08626828,
   0};
   Double_t Graph_from_bjetenls_jec_1_up_fehx3017[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_1_up_fehy3017[21] = {
   1.841055,
   1.841055,
   10.65553,
   15.09346,
   15.98533,
   16.88031,
   16.80284,
   15.88106,
   14.24111,
   13.25621,
   11.08306,
   8.93566,
   7.099661,
   5.608517,
   4.32645,
   3.331832,
   2.660608,
   2.235576,
   1.991178,
   1.88921,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_1_up_fx3017,Graph_from_bjetenls_jec_1_up_fy3017,Graph_from_bjetenls_jec_1_up_felx3017,Graph_from_bjetenls_jec_1_up_fehx3017,Graph_from_bjetenls_jec_1_up_fely3017,Graph_from_bjetenls_jec_1_up_fehy3017);
   grae->SetName("Graph_from_bjetenls_jec_1_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_1_up3017 = new TH1F("Graph_Graph_from_bjetenls_jec_1_up3017","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_1_up3017->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_1_up3017->SetMaximum(332.0076);
   Graph_Graph_from_bjetenls_jec_1_up3017->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_1_up3017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_1_up3017->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_up3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_1_up3017);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_1_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_1_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_1_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_1_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_1_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_1_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__18 = new TH1F("ratioframe__18","t#bar{t}",20,3,7);
   ratioframe__18->SetMinimum(0.46);
   ratioframe__18->SetMaximum(1.54);
   ratioframe__18->SetEntries(505213);

   ci = TColor::GetColor("#cc0000");
   ratioframe__18->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__18->SetMarkerColor(ci);
   ratioframe__18->GetXaxis()->SetTitle("log(E)");
   ratioframe__18->GetXaxis()->SetLabelFont(42);
   ratioframe__18->GetXaxis()->SetLabelSize(0);
   ratioframe__18->GetXaxis()->SetTitleSize(0);
   ratioframe__18->GetXaxis()->SetTitleOffset(0);
   ratioframe__18->GetXaxis()->SetTitleFont(42);
   ratioframe__18->GetYaxis()->SetTitle("Data/MC");
   ratioframe__18->GetYaxis()->SetNoExponent();
   ratioframe__18->GetYaxis()->SetNdivisions(5);
   ratioframe__18->GetYaxis()->SetLabelFont(42);
   ratioframe__18->GetYaxis()->SetLabelSize(0.18);
   ratioframe__18->GetYaxis()->SetTitleSize(0.2);
   ratioframe__18->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__18->GetYaxis()->SetTitleFont(42);
   ratioframe__18->GetZaxis()->SetLabelFont(42);
   ratioframe__18->GetZaxis()->SetLabelSize(0.035);
   ratioframe__18->GetZaxis()->SetTitleSize(0.035);
   ratioframe__18->GetZaxis()->SetTitleFont(42);
   ratioframe__18->Draw("");
   
   Double_t Graph_from_ratio_fx3018[20] = {
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
   Double_t Graph_from_ratio_fy3018[20] = {
   0,
   0,
   0.8682383,
   0.8703734,
   0.8751647,
   0.9077828,
   0.9096854,
   0.9159677,
   0.9146139,
   0.9034833,
   0.8867723,
   0.8697038,
   0.8721158,
   0.8867784,
   0.8608814,
   0.8427386,
   0.8418078,
   0.8512604,
   0.8108816,
   0.7346657};
   Double_t Graph_from_ratio_felx3018[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3018[20] = {
   0,
   0,
   0.01896538,
   0.01152624,
   0.009300783,
   0.008336047,
   0.007593492,
   0.007294088,
   0.007282209,
   0.007614601,
   0.008219684,
   0.009340325,
   0.01101804,
   0.01375954,
   0.01693414,
   0.02263244,
   0.02983429,
   0.05036219,
   0.06410865,
   0.09346039};
   Double_t Graph_from_ratio_fehx3018[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3018[20] = {
   0,
   0,
   0.01896538,
   0.01152624,
   0.009300783,
   0.008336047,
   0.007593492,
   0.007294088,
   0.007282209,
   0.007614601,
   0.008219684,
   0.009340325,
   0.01101804,
   0.01375954,
   0.01693414,
   0.02263244,
   0.02983429,
   0.05036219,
   0.06410865,
   0.09346039};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3018,Graph_from_ratio_fy3018,Graph_from_ratio_felx3018,Graph_from_ratio_fehx3018,Graph_from_ratio_fely3018,Graph_from_ratio_fehy3018);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3018 = new TH1F("Graph_Graph_from_ratio3018","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3018->SetMinimum(0);
   Graph_Graph_from_ratio3018->SetMaximum(1.015588);
   Graph_Graph_from_ratio3018->SetDirectory(0);
   Graph_Graph_from_ratio3018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3018->SetLineColor(ci);
   Graph_Graph_from_ratio3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3018);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
