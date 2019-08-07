#include "PcapReader.h"

int main() {
	PcapReader p("../../recordings examples/recording1.pcapng");
	p.read();
	return 0;
}