#include "consumer.h"


void Consumer::consume(void) {
	while (1) {
		sc_uint<32> seqNum = chCon->read().SequenceNumber;

		cout << "Sequence number: " << seqNum << endl;
		cout << sc_time_stamp() << endl;
	}
}