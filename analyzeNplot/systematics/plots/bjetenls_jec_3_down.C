void bjetenls_jec_3_down()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:08 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-56.22192,7.240964,413.1274);
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
   
   TH1F *frame__59 = new TH1F("frame__59","t#bar{t}",20,3,7);
   frame__59->SetMinimum(0.1);
   frame__59->SetMaximum(408.4339);
   frame__59->SetEntries(503848);
   frame__59->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__59->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__59->SetMarkerColor(ci);
   frame__59->GetXaxis()->SetTitle("log(E)");
   frame__59->GetXaxis()->SetLabelFont(42);
   frame__59->GetXaxis()->SetLabelSize(0.035);
   frame__59->GetXaxis()->SetTitleSize(0.035);
   frame__59->GetXaxis()->SetTitleFont(42);
   frame__59->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__59->GetYaxis()->SetNoExponent();
   frame__59->GetYaxis()->SetLabelFont(42);
   frame__59->GetYaxis()->SetTitleSize(0.045);
   frame__59->GetYaxis()->SetTitleOffset(1.3);
   frame__59->GetYaxis()->SetTitleFont(42);
   frame__59->GetZaxis()->SetLabelFont(42);
   frame__59->GetZaxis()->SetLabelSize(0.035);
   frame__59->GetZaxis()->SetTitleSize(0.035);
   frame__59->GetZaxis()->SetTitleFont(42);
   frame__59->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_30 = new TH1F("mc_stack_30","mc",20,3,7);
   mc_stack_30->SetMinimum(-7.917179e-09);
   mc_stack_30->SetMaximum(329.8889);
   mc_stack_30->SetDirectory(0);
   mc_stack_30->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_30->SetLineColor(ci);
   mc_stack_30->GetXaxis()->SetLabelFont(42);
   mc_stack_30->GetXaxis()->SetLabelSize(0.035);
   mc_stack_30->GetXaxis()->SetTitleSize(0.035);
   mc_stack_30->GetXaxis()->SetTitleFont(42);
   mc_stack_30->GetYaxis()->SetLabelFont(42);
   mc_stack_30->GetYaxis()->SetLabelSize(0.035);
   mc_stack_30->GetYaxis()->SetTitleSize(0.035);
   mc_stack_30->GetYaxis()->SetTitleOffset(0);
   mc_stack_30->GetYaxis()->SetTitleFont(42);
   mc_stack_30->GetZaxis()->SetLabelFont(42);
   mc_stack_30->GetZaxis()->SetLabelSize(0.035);
   mc_stack_30->GetZaxis()->SetTitleSize(0.035);
   mc_stack_30->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_30);
   
   
   TH1F *bjetenls_jec_3_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_3_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(3,102.5205);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(4,218.5026);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(5,279.2409);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(6,300.9952);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(7,296.3453);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(8,263.4411);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(9,212.7764);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(10,158.681);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(11,108.551);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(12,68.10962);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(13,39.80065);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(14,21.97646);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(15,11.30365);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(16,5.259885);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(17,2.281021);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(18,0.868942);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(19,0.3100639);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(20,0.1002783);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinContent(21,0.03788173);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(3,1.111518);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(4,1.487623);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(5,1.522379);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(6,1.431905);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(7,1.286209);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(8,1.098235);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(9,0.8940529);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(10,0.6995245);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(11,0.5236869);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(12,0.3759217);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(13,0.2599123);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(14,0.1748938);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(15,0.1135462);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(16,0.07019863);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(17,0.04191683);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(18,0.02334757);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(19,0.01268261);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(20,0.006533597);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetBinError(21,0.003510797);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetEntries(496954);
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_3_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_3_down_Diboson_stack_2 = new TH1F("bjetenls_jec_3_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(3,0.1679228);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(4,0.2781689);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(5,0.2346798);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(6,0.2517798);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(7,0.215693);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(8,0.2111005);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(9,0.1366503);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(10,0.1229032);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(11,0.1043042);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(12,0.0819838);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(13,0.04838793);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(14,0.02059121);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(15,0.0255442);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(16,0.0112092);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(17,0.01088514);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(18,0.006553135);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(19,0.001958637);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(20,0.003093497);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinContent(21,0.001015257);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(3,0.04242932);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(4,0.05259609);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(5,0.04267962);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(6,0.04050323);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(7,0.03348108);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(8,0.03058536);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(9,0.02190628);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(10,0.01847663);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(11,0.01566218);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(12,0.01285871);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(13,0.00891089);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(14,0.005231523);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(15,0.005261909);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(16,0.003163743);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(17,0.002929676);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(18,0.001949224);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(19,0.0009826418);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(20,0.001103394);
   bjetenls_jec_3_down_Diboson_stack_2->SetBinError(21,0.0005772127);
   bjetenls_jec_3_down_Diboson_stack_2->SetEntries(537);
   bjetenls_jec_3_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_3_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_3_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_3_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_3_down_DY_stack_3 = new TH1F("bjetenls_jec_3_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(3,0.6471004);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(4,0.3726777);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(5,0.6798635);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(6,0.8815123);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(7,0.8723282);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(8,0.4012652);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(10,0.130632);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(11,0.1510107);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(12,0.1739338);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(13,0.0634387);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(14,0.07663773);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(15,0.04675623);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(16,0.04346611);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(17,0.0006888892);
   bjetenls_jec_3_down_DY_stack_3->SetBinContent(18,0.03052689);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(3,0.6471004);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(4,0.3726777);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(5,0.4810516);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(6,0.5098831);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(7,0.4364403);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(8,0.2843954);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(10,0.130632);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(11,0.1104805);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(12,0.1230235);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(13,0.0634387);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(14,0.07663773);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(15,0.04675623);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(16,0.04346611);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(17,0.0006888892);
   bjetenls_jec_3_down_DY_stack_3->SetBinError(18,0.03052689);
   bjetenls_jec_3_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_3_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_3_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_3_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_3_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_3_down_W_stack_4 = new TH1F("bjetenls_jec_3_down_W_stack_4","W",20,3,7);
   bjetenls_jec_3_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_3_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_3_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_3_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_3_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_3_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(3,4.473419);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(4,9.025508);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(5,11.92288);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(6,12.05146);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(7,12.0573);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(8,10.89696);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(9,7.709166);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(10,6.246695);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(11,4.382466);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(12,2.85983);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(13,1.728137);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(14,0.9862894);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(15,0.5860538);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(16,0.2973992);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(17,0.1487146);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(18,0.0636145);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(19,0.03445011);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(20,0.01043965);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinContent(21,0.01083077);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(3,0.4186191);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(4,0.5414068);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(5,0.5692712);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(6,0.5169236);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(7,0.4680583);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(8,0.4036789);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(9,0.3060743);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(10,0.2506807);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(11,0.1898927);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(12,0.1396654);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(13,0.09810222);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(14,0.06612732);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(15,0.0467167);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(16,0.02990876);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(17,0.01934351);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(18,0.01117191);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(19,0.007647349);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(20,0.003640707);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetBinError(21,0.003456777);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetEntries(6333);
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_3_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_3_down_fx3059[21] = {
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
   Double_t Graph_from_bjetenls_jec_3_down_fy3059[21] = {
   0,
   0,
   95.70862,
   200.9591,
   256.3065,
   282.4818,
   279.1131,
   247.6586,
   197.9591,
   146.1468,
   98.54514,
   60.6362,
   35.69725,
   20.05751,
   10.07509,
   4.641235,
   2.040994,
   0.7977873,
   0.2730583,
   0.08432398,
   0};
   Double_t Graph_from_bjetenls_jec_3_down_felx3059[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_3_down_fely3059[21] = {
   0,
   0,
   9.766158,
   14.17601,
   16.00958,
   16.80719,
   16.70668,
   15.73717,
   14.0582,
   12.07553,
   9.910323,
   7.765544,
   5.946709,
   4.441011,
   3.120802,
   2.075029,
   1.307517,
   0.7019182,
   0.2722493,
   0.08432398,
   0};
   Double_t Graph_from_bjetenls_jec_3_down_fehx3059[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_3_down_fehy3059[21] = {
   1.841055,
   1.841055,
   10.81741,
   14.17601,
   16.00958,
   16.80719,
   16.70668,
   15.73717,
   15.09383,
   13.117,
   10.96083,
   8.82994,
   7.030643,
   5.552953,
   4.278503,
   3.306108,
   2.650327,
   2.220138,
   1.986141,
   1.88815,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_3_down_fx3059,Graph_from_bjetenls_jec_3_down_fy3059,Graph_from_bjetenls_jec_3_down_felx3059,Graph_from_bjetenls_jec_3_down_fehx3059,Graph_from_bjetenls_jec_3_down_fely3059,Graph_from_bjetenls_jec_3_down_fehy3059);
   grae->SetName("Graph_from_bjetenls_jec_3_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_3_down3059 = new TH1F("Graph_Graph_from_bjetenls_jec_3_down3059","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_3_down3059->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_3_down3059->SetMaximum(329.2179);
   Graph_Graph_from_bjetenls_jec_3_down3059->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_3_down3059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_3_down3059->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_down3059->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_3_down3059);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_3_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_3_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_3_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_3_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_3_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_3_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__60 = new TH1F("ratioframe__60","t#bar{t}",20,3,7);
   ratioframe__60->SetMinimum(0.46);
   ratioframe__60->SetMaximum(1.54);
   ratioframe__60->SetEntries(503848);

   ci = TColor::GetColor("#cc0000");
   ratioframe__60->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__60->SetMarkerColor(ci);
   ratioframe__60->GetXaxis()->SetTitle("log(E)");
   ratioframe__60->GetXaxis()->SetLabelFont(42);
   ratioframe__60->GetXaxis()->SetLabelSize(0);
   ratioframe__60->GetXaxis()->SetTitleSize(0);
   ratioframe__60->GetXaxis()->SetTitleOffset(0);
   ratioframe__60->GetXaxis()->SetTitleFont(42);
   ratioframe__60->GetYaxis()->SetTitle("Data/MC");
   ratioframe__60->GetYaxis()->SetNoExponent();
   ratioframe__60->GetYaxis()->SetNdivisions(5);
   ratioframe__60->GetYaxis()->SetLabelFont(42);
   ratioframe__60->GetYaxis()->SetLabelSize(0.18);
   ratioframe__60->GetYaxis()->SetTitleSize(0.2);
   ratioframe__60->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__60->GetYaxis()->SetTitleFont(42);
   ratioframe__60->GetZaxis()->SetLabelFont(42);
   ratioframe__60->GetZaxis()->SetLabelSize(0.035);
   ratioframe__60->GetZaxis()->SetTitleSize(0.035);
   ratioframe__60->GetZaxis()->SetTitleFont(42);
   ratioframe__60->Draw("");
   
   Double_t Graph_from_ratio_fx3060[20] = {
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
   Double_t Graph_from_ratio_fy3060[20] = {
   0,
   0,
   0.8877616,
   0.8807085,
   0.8775266,
   0.8991083,
   0.9018467,
   0.900739,
   0.8972762,
   0.8847668,
   0.8706267,
   0.8513287,
   0.8572701,
   0.8697975,
   0.8422571,
   0.8270257,
   0.8360243,
   0.8227695,
   0.7881092,
   0.7409097};
   Double_t Graph_from_ratio_felx3060[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3060[20] = {
   0,
   0,
   0.0191357,
   0.01159594,
   0.00931384,
   0.008282479,
   0.007562395,
   0.00722052,
   0.007210613,
   0.007519991,
   0.008148827,
   0.009238155,
   0.01093256,
   0.01363246,
   0.01676895,
   0.02243588,
   0.02983534,
   0.04953959,
   0.06322577,
   0.09557271};
   Double_t Graph_from_ratio_fehx3060[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3060[20] = {
   0,
   0,
   0.0191357,
   0.01159594,
   0.00931384,
   0.008282479,
   0.007562395,
   0.00722052,
   0.007210613,
   0.007519991,
   0.008148827,
   0.009238155,
   0.01093256,
   0.01363246,
   0.01676895,
   0.02243588,
   0.02983534,
   0.04953959,
   0.06322577,
   0.09557271};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3060,Graph_from_ratio_fy3060,Graph_from_ratio_felx3060,Graph_from_ratio_fehx3060,Graph_from_ratio_fely3060,Graph_from_ratio_fehy3060);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3060 = new TH1F("Graph_Graph_from_ratio3060","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3060->SetMinimum(0);
   Graph_Graph_from_ratio3060->SetMaximum(1.00035);
   Graph_Graph_from_ratio3060->SetDirectory(0);
   Graph_Graph_from_ratio3060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3060->SetLineColor(ci);
   Graph_Graph_from_ratio3060->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3060->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3060->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3060->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3060->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3060->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3060->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3060->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3060->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3060->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3060->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3060->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3060->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3060);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
