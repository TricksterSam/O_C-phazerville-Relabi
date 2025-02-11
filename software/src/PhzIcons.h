// Icons! Made with http://beigemaze.com/bitmap8x8.html
// Retouched with https://goatama.ridiculousglitch.com/bitca/ (Column major MSB Bottom)

#ifndef PHAZER_ICON_SET
#define PHAZER_ICON_SET

namespace PhzIcons {

// external
const uint8_t calibr8[8] = { 0x7e, 0x81, 0x81, 0x00, 0x76, 0x89, 0x89, 0x76 };
const uint8_t tuner[8] = { 0x00, 0x00, 0x1e, 0xe0, 0x1e, 0x00, 0x00, 0x00 };

// global
const uint8_t metronome[8] = {0xf3,0x8c,0x9a,0xa2,0x82,0x8c,0xf0,0x00};
const uint8_t midiIn[8] = { 0x18, 0x7e, 0x81, 0xb9, 0x89, 0xb1, 0x89, 0xb1 };
const uint8_t midiOut[8] = { 0xb9, 0xa9, 0xbd, 0x81, 0xb5, 0x81, 0x7e, 0x18 };

// utilities
const uint8_t dualAttenuverter[8] = { 0x26, 0x20, 0x1c, 0x00, 0x00, 0x1c, 0x02, 0x32 };
const uint8_t button2[8] = { 0x06, 0x0f, 0x0f, 0x06, 0x60, 0xf0, 0xf0, 0x60 };
const uint8_t scope[8] = { 0x00, 0x20, 0xee, 0x29, 0xee, 0x24, 0x88, 0x70 };
const uint8_t switchApp[8] = { 0x00, 0x00, 0x14, 0x18, 0x10, 0x00, 0x00, 0x00 };

//triggers
const uint8_t burst[8] = { 0x00, 0x18, 0x00, 0x34, 0x00, 0x5a, 0x00, 0xad };
const uint8_t clockSkip[8] = { 0x12, 0x80, 0x24, 0x01, 0x80, 0x24, 0x01, 0x48 };
const uint8_t drumMap[8] = { 0x00, 0x6a, 0x54, 0x2a, 0x54, 0x2a, 0x56, 0x00 };
const uint8_t euclidX[8] = { 0x42, 0x00, 0x02, 0x40, 0x02, 0x00, 0x47, 0x00 };
const uint8_t trigseq[8] = { 0xb1, 0xd7, 0x01, 0xf0, 0xb7, 0x01, 0x33, 0xf4 };
const uint8_t trigseq16[8] = { 0x6f, 0xaa, 0x00, 0xe2, 0x6f, 0x00, 0x6e, 0xed };
const uint8_t shuffle[8] = { 0x30, 0x81, 0x3c, 0x42, 0xf9, 0x41, 0x39, 0x86 };
const uint8_t palimpsest[8] = { 0xf0, 0x8e, 0xa1, 0xa9, 0xa9, 0x81, 0x79, 0x06 };

//gated
const uint8_t compare[8] = { 0x55, 0x55, 0x00, 0xff, 0xff, 0x00, 0x49, 0x92 };
const uint8_t gateDelay[8] = { 0xfe, 0x81, 0xbc, 0x22, 0x22, 0xbc, 0x81, 0xfe };
const uint8_t gateVca[8] = { 0x80, 0xa0, 0x2e, 0x8f, 0x8f, 0x2e, 0xa0, 0x80 };
const uint8_t shiftGate[8] = { 0x48, 0x05, 0x40, 0xde, 0x51, 0x51, 0xde, 0x40 };
const uint8_t voltage[8] = { 0x00, 0x00, 0x04, 0x4a, 0x29, 0x10, 0x00, 0x00 };

//logic
const uint8_t calculate[8] = { 0x00, 0x00, 0x42, 0x30, 0x0c, 0x42, 0x00, 0x00 };
const uint8_t cumulus[8] = {0x70,0x88,0xa7,0x80,0x80,0x97,0x88,0x70};
const uint8_t logic[8] = { 0x15, 0x44, 0x15, 0x40, 0x40, 0x05, 0x11, 0x44 };
const uint8_t trending[8] = { 0xff, 0x80, 0x88, 0x84, 0x84, 0x98, 0x90, 0x88 };
const uint8_t thresholdLogicNeuron[8] = { 0x7c, 0x63, 0x04, 0x18, 0xd8, 0xc1, 0x36, 0x0e };
const uint8_t schmitt[8] = { 0x42, 0xff, 0x81, 0x42, 0x42, 0x24, 0x24, 0x18 };
const uint8_t mixerBal[8] = { 0x5c, 0x80, 0x9f, 0x80, 0x90, 0x80, 0x5e, 0x00 };

//dividers
const uint8_t brancher[8] = { 0x06, 0x18, 0x26, 0x41, 0xa0, 0x2c, 0x10, 0x0e };
const uint8_t binaryCounter[8] = { 0x3c, 0x42, 0x3c, 0x00, 0x10, 0x00, 0x04, 0x7e };
const uint8_t divSeq[8] = { 0x45, 0x00, 0xa5, 0x00, 0x4a, 0x00, 0x44, 0x00 };
const uint8_t polyDiv[8] = { 0xa5, 0x00, 0xa5, 0x00, 0x00, 0xa5, 0x00, 0xa5 };
const uint8_t probDiv[8] = { 0x21, 0x00, 0x84, 0x00, 0x00, 0x20, 0x00, 0x81 };
const uint8_t resetClk[8] = { 0x3b, 0x01, 0x39, 0x01, 0x39, 0x01, 0x11, 0x1f };
const uint8_t clockDivider[8] = { 0x24, 0x00, 0x81, 0x00, 0x00, 0x81, 0x00, 0x24 };

// envelopes
const uint8_t ADSR_EG[8] = {0x90, 0x8c, 0x62, 0x11, 0x11, 0x11, 0x66, 0x88};
const uint8_t AD_EG[8] = { 0x88, 0x88, 0x46, 0x21, 0x12, 0x64, 0x88, 0x88 };
const uint8_t envelopeFollower[8] = { 0x5f, 0x1d, 0x5b, 0x17, 0x57, 0x5b, 0x5d, 0x1f };
const uint8_t slew[8] = { 0xf0, 0x8c, 0x86, 0x9e, 0xbc, 0xf8, 0xf0, 0xe0 };
const uint8_t vectorEG[8] = { 0x08, 0x06, 0x01, 0x22, 0x64, 0xf5, 0x64, 0x28 };

//LFOs
const uint8_t ebb_n_Flow[8] = { 0x84, 0x82, 0x41, 0x41, 0x49, 0x59, 0x2a, 0x24 };
const uint8_t lowerenz[8] = { 0x1e, 0x3f, 0x37, 0x1c, 0x38, 0xec, 0xfc, 0x78 };
const uint8_t vectorLFO[8] = { 0x02, 0x01, 0x22, 0x64, 0xf5, 0x64, 0x28, 0x04 };
const uint8_t vectorMod[8] = { 0x08, 0x07, 0x22, 0x64, 0xf5, 0x64, 0x28, 0x06 };
const uint8_t vectorMorph[8] = { 0x20, 0x1c, 0x08, 0x91, 0xd7, 0x91, 0x20, 0x18 };
const uint8_t runglBook[8] = { 0x38, 0x54, 0x52, 0x51, 0x51, 0x49, 0x25, 0x12  };

//quantizers
const uint8_t dualQuantizer[8] = {  0x0f, 0xff, 0x0f, 0x00, 0x0f, 0xff, 0x0f, 0x00  };
const uint8_t scaleDuet[8] = { 0x05, 0xa7, 0xe5, 0xa7, 0xe5, 0xa7, 0xe5, 0xa0 };
const uint8_t squanch[8] = {0x3f, 0x41, 0x92, 0x84, 0x84, 0x92, 0x41, 0x3f};
const uint8_t chordinate[8] = { 0x06, 0xc7, 0xf0, 0x00, 0x0c, 0x0f, 0xc0, 0xf0 };
const uint8_t multiscale[8] = { 0xfc, 0xfc, 0x00, 0xff, 0x81, 0xff, 0x00, 0x80 };

//sequencers
const uint8_t carpeggio[8] = { 0x83, 0x78, 0x07, 0xf0, 0x0f, 0xe0, 0x1f, 0xc0 };
const uint8_t cvRec[8] = { 0x3d, 0xfc, 0x05, 0xa4, 0xa5, 0x05, 0xfc, 0x3d };
const uint8_t ASR[8] = { 0x10, 0x08, 0x08, 0x04, 0x10, 0x08, 0x08, 0x04 };
const uint8_t DualTM[8] = { 0x06, 0x29, 0x49, 0x06, 0x60, 0x92, 0x94, 0x60 };
const uint8_t enigmaJr[8] = { 0x00, 0x3c, 0x7e, 0x7a, 0x6e, 0x7e, 0x3c, 0x00 };
const uint8_t gameOfLife[8] = { 0x00, 0x60, 0x60, 0x66, 0x66, 0x78, 0x78, 0x00 };
const uint8_t pigeons[8] = { 0x3c, 0xc2, 0x01, 0x0d, 0x01, 0x02, 0x48, 0x94 };
const uint8_t probMeloD[8] = { 0x0c, 0x0f, 0x61, 0x78, 0x08, 0xc0, 0xf0, 0x10 };
const uint8_t seq32[8] = { 0x01, 0x88, 0xa9, 0xf8, 0x01, 0xc9, 0xa8, 0x91 };
const uint8_t seqPlay7[8] = { 0x01, 0xf8, 0xf9, 0x70, 0x21, 0x09, 0xe8, 0x19 };
const uint8_t shredder[8] = {  0xe6, 0x07, 0xb4, 0x05, 0x05, 0x74, 0x07, 0xd6 };
const uint8_t sequenceX[8] = { 0x01, 0x00, 0x45, 0x6c, 0x11, 0x6d, 0x44, 0x01 };
const uint8_t switchSeq[8] = { 0x10, 0x18, 0x14, 0x00, 0x50, 0x65, 0x46, 0x04 };
const uint8_t stairs[8] = { 0x70, 0x90, 0x1c, 0x24, 0x47, 0x49, 0x89, 0x12 };
const uint8_t tb3P0[8] = { 0x3e, 0x63, 0xe3, 0xff, 0xff, 0xe3, 0x63, 0x3e };
const uint8_t strum[8] = { 0x00, 0x3a, 0x46, 0x40, 0x40, 0x46, 0x3a, 0x00};
const uint8_t rndWalk[8] = { 0x02, 0x24, 0xd6, 0x11, 0x31, 0x42, 0x26, 0x18 };

//audio
const uint8_t boots_n_cats[8] = { 0x1f, 0x11, 0x17, 0x18, 0x00, 0x70, 0x88, 0x90 };
const uint8_t bugCrack[8] = { 0x10, 0xc8, 0x3d, 0x4a, 0x4a, 0x3d, 0xc8, 0x10 };
const uint8_t drLoFi[8] = { 0x00, 0x3e, 0x2a, 0xae, 0x2e, 0xaa, 0xbe, 0x00 };


// BONUS
const uint8_t full_book[8] = { 0x38, 0x5c, 0x5e, 0x5f, 0x5f, 0x4f, 0x27, 0x12 };
const uint8_t nova[8] = {0x7c, 0x82, 0x39, 0x42, 0x9c, 0x41, 0x3e, 0x00};
const uint8_t half_a_book[8] = {0x38, 0x54, 0x52, 0x51, 0x51, 0x51, 0x49, 0x25};
const uint8_t camels[8] = { 0x60, 0x92, 0x4d, 0x51, 0x8a, 0x69, 0x12, 0x0c };
const uint8_t frontBack[8] = { 0xfc, 0x84, 0xb4, 0x87, 0xfd, 0x21, 0x21, 0x3f };
const uint8_t enigmaSr[8] = { 0x3c, 0x7e, 0xf7, 0xff, 0xdd, 0xff, 0x7e, 0x3c };
const uint8_t legoFace[8] = { 0xfc, 0x82, 0xaa, 0xa2, 0xa2, 0xaa, 0x82, 0xfc };
const uint8_t evilTopo[8] = { 0x83, 0xaf, 0x2f, 0x1a, 0x1a, 0x2f, 0xaf, 0x83 };
const uint8_t pergamen[8] = { 0x01, 0x01, 0x39, 0x45, 0x55, 0x49, 0x22, 0x1c };
const uint8_t clock_warp_B[8] = { 0x91, 0x20, 0x26, 0x01, 0x80, 0x64, 0x04, 0x89 };
const uint8_t clock_warp_A[8] = { 0x91, 0x00, 0x24, 0x01, 0x80, 0x24, 0x00, 0x89 };
const uint8_t umbrella[8] = { 0x18, 0x15, 0x14, 0xf2, 0x94, 0x15, 0x18, 0x02 };
const uint8_t coatButton[8] = { 0xc3, 0x81, 0x10, 0x04, 0x20, 0x08, 0x81, 0xc3 };

} // namespace PhzIcons

#endif // PHAZER_ICON_SET
