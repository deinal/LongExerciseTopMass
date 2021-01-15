void bjetenls_lep_down()
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
   p1->Range(2.421687,-56.88677,7.240964,418.003);
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
   
   TH1F *frame__109 = new TH1F("frame__109","t#bar{t}",20,3,7);
   frame__109->SetMinimum(0.1);
   frame__109->SetMaximum(413.2541);
   frame__109->SetEntries(504712);
   frame__109->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__109->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__109->SetMarkerColor(ci);
   frame__109->GetXaxis()->SetTitle("log(E)");
   frame__109->GetXaxis()->SetLabelFont(42);
   frame__109->GetXaxis()->SetLabelSize(0.035);
   frame__109->GetXaxis()->SetTitleSize(0.035);
   frame__109->GetXaxis()->SetTitleFont(42);
   frame__109->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__109->GetYaxis()->SetNoExponent();
   frame__109->GetYaxis()->SetLabelFont(42);
   frame__109->GetYaxis()->SetTitleSize(0.045);
   frame__109->GetYaxis()->SetTitleOffset(1.3);
   frame__109->GetYaxis()->SetTitleFont(42);
   frame__109->GetZaxis()->SetLabelFont(42);
   frame__109->GetZaxis()->SetLabelSize(0.035);
   frame__109->GetZaxis()->SetTitleSize(0.035);
   frame__109->GetZaxis()->SetTitleFont(42);
   frame__109->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_55 = new TH1F("mc_stack_55","mc",20,3,7);
   mc_stack_55->SetMinimum(-1.84203e-09);
   mc_stack_55->SetMaximum(333.7822);
   mc_stack_55->SetDirectory(0);
   mc_stack_55->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_55->SetLineColor(ci);
   mc_stack_55->GetXaxis()->SetLabelFont(42);
   mc_stack_55->GetXaxis()->SetLabelSize(0.035);
   mc_stack_55->GetXaxis()->SetTitleSize(0.035);
   mc_stack_55->GetXaxis()->SetTitleFont(42);
   mc_stack_55->GetYaxis()->SetLabelFont(42);
   mc_stack_55->GetYaxis()->SetLabelSize(0.035);
   mc_stack_55->GetYaxis()->SetTitleSize(0.035);
   mc_stack_55->GetYaxis()->SetTitleOffset(0);
   mc_stack_55->GetYaxis()->SetTitleFont(42);
   mc_stack_55->GetZaxis()->SetLabelFont(42);
   mc_stack_55->GetZaxis()->SetLabelSize(0.035);
   mc_stack_55->GetZaxis()->SetTitleSize(0.035);
   mc_stack_55->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_55);
   
   
   TH1F *bjetenls_lep_down_t#bar{t}_stack_1 = new TH1F("bjetenls_lep_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(3,103.0948);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(4,220.5835);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(5,282.3559);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(6,304.5697);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(7,300.4695);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(8,267.1867);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(9,216.409);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(10,161.1219);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(11,110.683);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(12,69.36693);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(13,40.55994);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(14,22.40958);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(15,11.55176);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(16,5.36493);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(17,2.335322);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(18,0.8924892);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(19,0.3176046);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(20,0.1054102);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinContent(21,0.03831549);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(3,1.122021);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(4,1.504851);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(5,1.541379);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(6,1.450341);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(7,1.304109);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(8,1.113685);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(9,0.9078956);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(10,0.7097131);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(11,0.5324949);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(12,0.3820059);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(13,0.2641563);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(14,0.1777774);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(15,0.1156069);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(16,0.07136708);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(17,0.04270004);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(18,0.02383816);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(19,0.01291973);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(20,0.006742716);
   bjetenls_lep_down_t#bar{t}_stack_1->SetBinError(21,0.00355149);
   bjetenls_lep_down_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_lep_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_lep_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_lep_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_lep_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_lep_down_Diboson_stack_2 = new TH1F("bjetenls_lep_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(3,0.1638117);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(4,0.2684227);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(5,0.2504959);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(6,0.2602848);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(7,0.2230275);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(8,0.2192354);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(9,0.1379112);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(10,0.1192892);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(11,0.1101429);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(12,0.08283196);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(13,0.04782436);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(14,0.02091094);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(15,0.02620644);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(16,0.01280742);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(17,0.01105066);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(18,0.006631623);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(19,0.001973785);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(20,0.003118298);
   bjetenls_lep_down_Diboson_stack_2->SetBinContent(21,0.001028305);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(3,0.04243753);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(4,0.0518565);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(5,0.04486592);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(6,0.04136646);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(7,0.03422497);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(8,0.0314691);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(9,0.02211103);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(10,0.01834162);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(11,0.01618182);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(12,0.01298991);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(13,0.008945878);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(14,0.005311565);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(15,0.00538038);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(16,0.003371301);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(17,0.00297786);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(18,0.001973378);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(19,0.0009904226);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(20,0.001112062);
   bjetenls_lep_down_Diboson_stack_2->SetBinError(21,0.0005845626);
   bjetenls_lep_down_Diboson_stack_2->SetEntries(540);
   bjetenls_lep_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_lep_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_lep_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_lep_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_lep_down_DY_stack_3 = new TH1F("bjetenls_lep_down_DY_stack_3","DY",20,3,7);
   bjetenls_lep_down_DY_stack_3->SetBinContent(3,0.6516615);
   bjetenls_lep_down_DY_stack_3->SetBinContent(4,0.3766243);
   bjetenls_lep_down_DY_stack_3->SetBinContent(5,0.6850982);
   bjetenls_lep_down_DY_stack_3->SetBinContent(6,0.9035223);
   bjetenls_lep_down_DY_stack_3->SetBinContent(7,0.8918395);
   bjetenls_lep_down_DY_stack_3->SetBinContent(8,0.4034269);
   bjetenls_lep_down_DY_stack_3->SetBinContent(10,0.1320651);
   bjetenls_lep_down_DY_stack_3->SetBinContent(11,0.1557506);
   bjetenls_lep_down_DY_stack_3->SetBinContent(12,0.180573);
   bjetenls_lep_down_DY_stack_3->SetBinContent(13,0.06404395);
   bjetenls_lep_down_DY_stack_3->SetBinContent(14,0.07741133);
   bjetenls_lep_down_DY_stack_3->SetBinContent(15,0.0468428);
   bjetenls_lep_down_DY_stack_3->SetBinContent(16,0.04388618);
   bjetenls_lep_down_DY_stack_3->SetBinContent(17,0.0007011488);
   bjetenls_lep_down_DY_stack_3->SetBinContent(18,0.03083504);
   bjetenls_lep_down_DY_stack_3->SetBinError(3,0.6516615);
   bjetenls_lep_down_DY_stack_3->SetBinError(4,0.3766243);
   bjetenls_lep_down_DY_stack_3->SetBinError(5,0.4847254);
   bjetenls_lep_down_DY_stack_3->SetBinError(6,0.5229125);
   bjetenls_lep_down_DY_stack_3->SetBinError(7,0.4465604);
   bjetenls_lep_down_DY_stack_3->SetBinError(8,0.2858549);
   bjetenls_lep_down_DY_stack_3->SetBinError(10,0.1320651);
   bjetenls_lep_down_DY_stack_3->SetBinError(11,0.1144149);
   bjetenls_lep_down_DY_stack_3->SetBinError(12,0.1277796);
   bjetenls_lep_down_DY_stack_3->SetBinError(13,0.06404396);
   bjetenls_lep_down_DY_stack_3->SetBinError(14,0.07741133);
   bjetenls_lep_down_DY_stack_3->SetBinError(15,0.0468428);
   bjetenls_lep_down_DY_stack_3->SetBinError(16,0.04388618);
   bjetenls_lep_down_DY_stack_3->SetBinError(17,0.0007011489);
   bjetenls_lep_down_DY_stack_3->SetBinError(18,0.03083504);
   bjetenls_lep_down_DY_stack_3->SetEntries(24);
   bjetenls_lep_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_lep_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_lep_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_lep_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_lep_down_W_stack_4 = new TH1F("bjetenls_lep_down_W_stack_4","W",20,3,7);
   bjetenls_lep_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_lep_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_lep_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_lep_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_down_W_stack_4,"hist");
   
   TH1F *bjetenls_lep_down_SinglesPtop_stack_5 = new TH1F("bjetenls_lep_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(3,4.574687);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(4,9.03496);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(5,12.28561);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(6,12.1543);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(7,12.19781);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(8,11.0463);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(9,7.887509);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(10,6.381126);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(11,4.430799);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(12,2.96611);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(13,1.731678);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(14,0.9992785);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(15,0.6023126);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(16,0.3040543);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(17,0.150442);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(18,0.06447268);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(19,0.03500009);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(20,0.01062426);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinContent(21,0.01090834);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(3,0.4264128);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(4,0.5462517);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(5,0.5817283);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(6,0.5221839);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(7,0.4743884);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(8,0.409357);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(9,0.3120241);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(10,0.2550144);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(11,0.1922478);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(12,0.1431722);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(13,0.09878464);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(14,0.06700429);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(15,0.04773091);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(16,0.03043014);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(17,0.01956639);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(18,0.01132594);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(19,0.007773361);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(20,0.003705917);
   bjetenls_lep_down_SinglesPtop_stack_5->SetBinError(21,0.00348181);
   bjetenls_lep_down_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_lep_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_lep_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_lep_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_lep_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_lep_down_fx3109[21] = {
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
   Double_t Graph_from_bjetenls_lep_down_fy3109[21] = {
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
   Double_t Graph_from_bjetenls_lep_down_felx3109[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_lep_down_fely3109[21] = {
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
   Double_t Graph_from_bjetenls_lep_down_fehx3109[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_lep_down_fehy3109[21] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_lep_down_fx3109,Graph_from_bjetenls_lep_down_fy3109,Graph_from_bjetenls_lep_down_felx3109,Graph_from_bjetenls_lep_down_fehx3109,Graph_from_bjetenls_lep_down_fely3109,Graph_from_bjetenls_lep_down_fehy3109);
   grae->SetName("Graph_from_bjetenls_lep_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_lep_down3109 = new TH1F("Graph_Graph_from_bjetenls_lep_down3109","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_lep_down3109->SetMinimum(0);
   Graph_Graph_from_bjetenls_lep_down3109->SetMaximum(331.507);
   Graph_Graph_from_bjetenls_lep_down3109->SetDirectory(0);
   Graph_Graph_from_bjetenls_lep_down3109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_lep_down3109->SetLineColor(ci);
   Graph_Graph_from_bjetenls_lep_down3109->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_lep_down3109->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_lep_down3109->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_lep_down3109->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_lep_down3109->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_lep_down3109->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_lep_down3109->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_lep_down3109->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_lep_down3109->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_lep_down3109->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_lep_down3109->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_lep_down3109->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_lep_down3109->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_lep_down3109);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_lep_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_lep_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_lep_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_lep_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_lep_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_lep_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__110 = new TH1F("ratioframe__110","t#bar{t}",20,3,7);
   ratioframe__110->SetMinimum(0.46);
   ratioframe__110->SetMaximum(1.54);
   ratioframe__110->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__110->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__110->SetMarkerColor(ci);
   ratioframe__110->GetXaxis()->SetTitle("log(E)");
   ratioframe__110->GetXaxis()->SetLabelFont(42);
   ratioframe__110->GetXaxis()->SetLabelSize(0);
   ratioframe__110->GetXaxis()->SetTitleSize(0);
   ratioframe__110->GetXaxis()->SetTitleOffset(0);
   ratioframe__110->GetXaxis()->SetTitleFont(42);
   ratioframe__110->GetYaxis()->SetTitle("Data/MC");
   ratioframe__110->GetYaxis()->SetNoExponent();
   ratioframe__110->GetYaxis()->SetNdivisions(5);
   ratioframe__110->GetYaxis()->SetLabelFont(42);
   ratioframe__110->GetYaxis()->SetLabelSize(0.18);
   ratioframe__110->GetYaxis()->SetTitleSize(0.2);
   ratioframe__110->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__110->GetYaxis()->SetTitleFont(42);
   ratioframe__110->GetZaxis()->SetLabelFont(42);
   ratioframe__110->GetZaxis()->SetLabelSize(0.035);
   ratioframe__110->GetZaxis()->SetTitleSize(0.035);
   ratioframe__110->GetZaxis()->SetTitleFont(42);
   ratioframe__110->Draw("");
   
   Double_t Graph_from_ratio_fx3110[20] = {
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
   Double_t Graph_from_ratio_fy3110[20] = {
   0,
   0,
   0.8553674,
   0.8596374,
   0.8635403,
   0.8949786,
   0.8986918,
   0.904029,
   0.9032212,
   0.891037,
   0.8759366,
   0.8577324,
   0.861674,
   0.8744588,
   0.8504298,
   0.8323135,
   0.8307236,
   0.8376071,
   0.7953926,
   0.7245691};
   Double_t Graph_from_ratio_felx3110[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3110[20] = {
   0,
   0,
   0.01865052,
   0.01138468,
   0.009182101,
   0.008228607,
   0.007510852,
   0.007200802,
   0.007194194,
   0.007511287,
   0.008120328,
   0.009221021,
   0.01088719,
   0.01357215,
   0.01672197,
   0.02234651,
   0.02943723,
   0.04962427,
   0.06300175,
   0.09220411};
   Double_t Graph_from_ratio_fehx3110[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3110[20] = {
   0,
   0,
   0.01865052,
   0.01138468,
   0.009182101,
   0.008228607,
   0.007510852,
   0.007200802,
   0.007194194,
   0.007511287,
   0.008120328,
   0.009221021,
   0.01088719,
   0.01357215,
   0.01672197,
   0.02234651,
   0.02943723,
   0.04962427,
   0.06300175,
   0.09220411};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3110,Graph_from_ratio_fy3110,Graph_from_ratio_felx3110,Graph_from_ratio_fehx3110,Graph_from_ratio_fely3110,Graph_from_ratio_fehy3110);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3110 = new TH1F("Graph_Graph_from_ratio3110","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3110->SetMinimum(0);
   Graph_Graph_from_ratio3110->SetMaximum(1.002353);
   Graph_Graph_from_ratio3110->SetDirectory(0);
   Graph_Graph_from_ratio3110->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3110->SetLineColor(ci);
   Graph_Graph_from_ratio3110->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3110->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3110->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3110->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3110->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3110->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3110->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3110->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3110->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3110->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3110->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3110->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3110->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3110);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
