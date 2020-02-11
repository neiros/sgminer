#ifndef LYRA2TDC_H
#define LYRA2TDC_H

#include "miner.h"
#define LYRA2TDC_SCRATCHBUF_SIZE (1536) // matrix size [12][4][4] uint64_t or equivalent
#define LYRA2TDC_SECBUF_SIZE (4) // (not used)
extern int lyra2TDC_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void lyra2TDC_regenhash(struct work *work);

#endif /* LYRA2TDC_H */
