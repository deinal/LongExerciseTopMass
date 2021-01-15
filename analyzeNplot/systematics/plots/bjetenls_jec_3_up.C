void bjetenls_jec_3_up()
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
   p1->Range(2.421687,-55.90279,7.240964,410.7872);
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
   
   TH1F *frame__33 = new TH1F("frame__33","t#bar{t}",20,3,7);
   frame__33->SetMinimum(0.1);
   frame__33->SetMaximum(406.1203);
   frame__33->SetEntries(505536);
   frame__33->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__33->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__33->SetMarkerColor(ci);
   frame__33->GetXaxis()->SetTitle("log(E)");
   frame__33->GetXaxis()->SetLabelFont(42);
   frame__33->GetXaxis()->SetLabelSize(0.035);
   frame__33->GetXaxis()->SetTitleSize(0.035);
   frame__33->GetXaxis()->SetTitleFont(42);
   frame__33->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__33->GetYaxis()->SetNoExponent();
   frame__33->GetYaxis()->SetLabelFont(42);
   frame__33->GetYaxis()->SetTitleSize(0.045);
   frame__33->GetYaxis()->SetTitleOffset(1.3);
   frame__33->GetYaxis()->SetTitleFont(42);
   frame__33->GetZaxis()->SetLabelFont(42);
   frame__33->GetZaxis()->SetLabelSize(0.035);
   frame__33->GetZaxis()->SetTitleSize(0.035);
   frame__33->GetZaxis()->SetTitleFont(42);
   frame__33->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_17 = new TH1F("mc_stack_17","mc",20,3,7);
   mc_stack_17->SetMinimum(-4.558023e-10);
   mc_stack_17->SetMaximum(328.0202);
   mc_stack_17->SetDirectory(0);
   mc_stack_17->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_17->SetLineColor(ci);
   mc_stack_17->GetXaxis()->SetLabelFont(42);
   mc_stack_17->GetXaxis()->SetLabelSize(0.035);
   mc_stack_17->GetXaxis()->SetTitleSize(0.035);
   mc_stack_17->GetXaxis()->SetTitleFont(42);
   mc_stack_17->GetYaxis()->SetLabelFont(42);
   mc_stack_17->GetYaxis()->SetLabelSize(0.035);
   mc_stack_17->GetYaxis()->SetTitleSize(0.035);
   mc_stack_17->GetYaxis()->SetTitleOffset(0);
   mc_stack_17->GetYaxis()->SetTitleFont(42);
   mc_stack_17->GetZaxis()->SetLabelFont(42);
   mc_stack_17->GetZaxis()->SetLabelSize(0.035);
   mc_stack_17->GetZaxis()->SetTitleSize(0.035);
   mc_stack_17->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_17);
   
   
   TH1F *bjetenls_jec_3_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_3_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(3,100.8754);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(4,216.9535);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(5,278.0418);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(6,299.4315);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(7,296.7757);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(8,263.6834);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(9,213.9569);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(10,159.2463);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(11,109.6697);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(12,68.73615);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(13,40.27989);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(14,22.229);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(15,11.48852);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(16,5.33058);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(17,2.335742);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(18,0.8907013);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(19,0.3175218);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(20,0.1034117);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinContent(21,0.03886718);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(3,1.102259);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(4,1.482479);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(5,1.519226);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(6,1.428232);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(7,1.287284);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(8,1.098701);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(9,0.8965994);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(10,0.7006949);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(11,0.5264363);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(12,0.3776203);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(13,0.2614489);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(14,0.1758425);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(15,0.1144882);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(16,0.07066027);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(17,0.04241402);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(18,0.02364459);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(19,0.01282248);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(20,0.006627224);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetBinError(21,0.003559312);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetEntries(498599);
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_3_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_3_up_Diboson_stack_2 = new TH1F("bjetenls_jec_3_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(3,0.1614058);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(4,0.2637832);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(5,0.2390988);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(6,0.2698838);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(7,0.2138565);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(8,0.2266557);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(9,0.1354101);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(10,0.1157301);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(11,0.1132026);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(12,0.07765193);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(13,0.05079917);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(14,0.01806081);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(15,0.02743512);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(16,0.01272102);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(17,0.01158853);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(18,0.00651654);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(19,0.001947699);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(20,0.003076221);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinContent(21,0.001009587);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(3,0.04182187);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(4,0.05096109);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(5,0.04347587);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(6,0.04182832);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(7,0.03319013);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(8,0.03191312);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(9,0.02177872);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(10,0.01796643);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(11,0.01624579);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(12,0.01248713);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(13,0.00920183);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(14,0.004909);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(15,0.005521529);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(16,0.003343319);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(17,0.003011872);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(18,0.001938339);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(19,0.0009771543);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(20,0.001097232);
   bjetenls_jec_3_up_Diboson_stack_2->SetBinError(21,0.0005739894);
   bjetenls_jec_3_up_Diboson_stack_2->SetEntries(543);
   bjetenls_jec_3_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_3_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_3_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_3_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_3_up_DY_stack_3 = new TH1F("bjetenls_jec_3_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(3,0.6434867);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(4,0.3705965);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(5,0.6760669);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(6,0.8765897);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(7,0.8674567);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(8,0.3990245);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(10,0.1299025);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(11,0.1501674);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(12,0.1729625);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(13,0.06308444);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(14,0.07620975);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(15,0.04649513);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(16,0.04322338);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(17,0.0006850422);
   bjetenls_jec_3_up_DY_stack_3->SetBinContent(18,0.03035641);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(3,0.6434867);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(4,0.3705965);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(5,0.4783652);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(6,0.5070357);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(7,0.4340031);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(8,0.2828072);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(10,0.1299025);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(11,0.1098635);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(12,0.1223364);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(13,0.06308444);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(14,0.07620975);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(15,0.04649513);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(16,0.04322338);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(17,0.0006850422);
   bjetenls_jec_3_up_DY_stack_3->SetBinError(18,0.03035641);
   bjetenls_jec_3_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_3_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_3_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_3_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_3_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_3_up_W_stack_4 = new TH1F("bjetenls_jec_3_up_W_stack_4","W",20,3,7);
   bjetenls_jec_3_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_3_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_3_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_3_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_3_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_3_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(3,4.514294);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(4,9.02844);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(5,12.15046);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(6,11.82216);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(7,12.16224);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(8,10.89108);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(9,7.782732);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(10,6.303835);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(11,4.425168);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(12,2.927143);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(13,1.690672);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(14,0.995922);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(15,0.6006809);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(16,0.299798);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(17,0.1482663);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(18,0.06366919);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(19,0.03606707);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(20,0.01038135);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinContent(21,0.01077029);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(3,0.4199173);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(4,0.5422101);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(5,0.5741232);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(6,0.5114822);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(7,0.4702976);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(8,0.4036692);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(9,0.3076333);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(10,0.2518142);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(11,0.1907586);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(12,0.1411271);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(13,0.0968964);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(14,0.06649522);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(15,0.04729828);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(16,0.02999956);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(17,0.01928332);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(18,0.01118361);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(19,0.007816925);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(20,0.003620376);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetBinError(21,0.003437473);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetEntries(6370);
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_3_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_3_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_3_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_3_up_fx3033[21] = {
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
   Double_t Graph_from_bjetenls_jec_3_up_fy3033[21] = {
   0,
   0,
   88.58709,
   193.114,
   253.8806,
   283.7048,
   284.0899,
   255.9203,
   205.7909,
   152.6825,
   103.4934,
   63.6786,
   37.56246,
   21.05679,
   10.75894,
   4.885195,
   2.117119,
   0.8722485,
   0.2859849,
   0.09071722,
   0};
   Double_t Graph_from_bjetenls_jec_3_up_felx3033[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_3_up_fely3033[21] = {
   0,
   0,
   9.394464,
   13.8848,
   15.93363,
   16.84354,
   16.85497,
   15.99751,
   14.34541,
   12.34319,
   10.15692,
   7.959035,
   6.10153,
   4.552134,
   3.228514,
   2.132987,
   1.336171,
   0.7500218,
   0.2848782,
   0.09071722,
   0};
   Double_t Graph_from_bjetenls_jec_3_up_fehx3033[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_3_up_fehy3033[21] = {
   1.841055,
   1.841055,
   10.44773,
   14.92087,
   15.93363,
   16.84354,
   16.85497,
   15.99751,
   14.34541,
   13.38376,
   11.2062,
   9.021873,
   7.183354,
   5.661393,
   4.381158,
   3.35835,
   2.673142,
   2.249954,
   1.992526,
   1.89163,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_3_up_fx3033,Graph_from_bjetenls_jec_3_up_fy3033,Graph_from_bjetenls_jec_3_up_felx3033,Graph_from_bjetenls_jec_3_up_fehx3033,Graph_from_bjetenls_jec_3_up_fely3033,Graph_from_bjetenls_jec_3_up_fehy3033);
   grae->SetName("Graph_from_bjetenls_jec_3_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_3_up3033 = new TH1F("Graph_Graph_from_bjetenls_jec_3_up3033","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_3_up3033->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_3_up3033->SetMaximum(331.0394);
   Graph_Graph_from_bjetenls_jec_3_up3033->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_3_up3033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_3_up3033->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_3_up3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_3_up3033);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_3_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_3_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_3_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_3_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_3_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_3_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__34 = new TH1F("ratioframe__34","t#bar{t}",20,3,7);
   ratioframe__34->SetMinimum(0.46);
   ratioframe__34->SetMaximum(1.54);
   ratioframe__34->SetEntries(505536);

   ci = TColor::GetColor("#cc0000");
   ratioframe__34->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__34->SetMarkerColor(ci);
   ratioframe__34->GetXaxis()->SetTitle("log(E)");
   ratioframe__34->GetXaxis()->SetLabelFont(42);
   ratioframe__34->GetXaxis()->SetLabelSize(0);
   ratioframe__34->GetXaxis()->SetTitleSize(0);
   ratioframe__34->GetXaxis()->SetTitleOffset(0);
   ratioframe__34->GetXaxis()->SetTitleFont(42);
   ratioframe__34->GetYaxis()->SetTitle("Data/MC");
   ratioframe__34->GetYaxis()->SetNoExponent();
   ratioframe__34->GetYaxis()->SetNdivisions(5);
   ratioframe__34->GetYaxis()->SetLabelFont(42);
   ratioframe__34->GetYaxis()->SetLabelSize(0.18);
   ratioframe__34->GetYaxis()->SetTitleSize(0.2);
   ratioframe__34->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__34->GetYaxis()->SetTitleFont(42);
   ratioframe__34->GetZaxis()->SetLabelFont(42);
   ratioframe__34->GetZaxis()->SetLabelSize(0.035);
   ratioframe__34->GetZaxis()->SetTitleSize(0.035);
   ratioframe__34->GetZaxis()->SetTitleFont(42);
   ratioframe__34->Draw("");
   
   Double_t Graph_from_ratio_fx3034[20] = {
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
   Double_t Graph_from_ratio_fy3034[20] = {
   0,
   0,
   0.8341961,
   0.8521627,
   0.8721197,
   0.9081452,
   0.9163621,
   0.9299425,
   0.9275081,
   0.9209068,
   0.9049927,
   0.8854838,
   0.8925498,
   0.9029812,
   0.8845534,
   0.8591133,
   0.8481088,
   0.8799539,
   0.8043755,
   0.776228};
   Double_t Graph_from_ratio_felx3034[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3034[20] = {
   0,
   0,
   0.01850532,
   0.01139319,
   0.009292855,
   0.008356529,
   0.007634656,
   0.007367509,
   0.007344933,
   0.007702956,
   0.008311728,
   0.009432156,
   0.0111554,
   0.01388623,
   0.01716582,
   0.0228389,
   0.02977932,
   0.05126884,
   0.06328904,
   0.09713103};
   Double_t Graph_from_ratio_fehx3034[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3034[20] = {
   0,
   0,
   0.01850532,
   0.01139319,
   0.009292855,
   0.008356529,
   0.007634656,
   0.007367509,
   0.007344933,
   0.007702956,
   0.008311728,
   0.009432156,
   0.0111554,
   0.01388623,
   0.01716582,
   0.0228389,
   0.02977932,
   0.05126884,
   0.06328904,
   0.09713103};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3034,Graph_from_ratio_fy3034,Graph_from_ratio_felx3034,Graph_from_ratio_fehx3034,Graph_from_ratio_fely3034,Graph_from_ratio_fehy3034);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3034 = new TH1F("Graph_Graph_from_ratio3034","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3034->SetMinimum(0);
   Graph_Graph_from_ratio3034->SetMaximum(1.031041);
   Graph_Graph_from_ratio3034->SetDirectory(0);
   Graph_Graph_from_ratio3034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3034->SetLineColor(ci);
   Graph_Graph_from_ratio3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3034);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
