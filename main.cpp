#include <iostream>
#include "TH1F.h"
#include "TRandom3.h"
#include "TCanvas.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    TH1F* hist = new TH1F("h", "h", 1000, -5, 5);
    TRandom3 rando;
    for(int i=0; i < 1000; ++i) { hist->Fill(rando.Gaus()); }
    TCanvas* canv = new TCanvas("c");
    hist->Draw();
    canv->SaveAs("testplot.pdf");
    return 0;
}