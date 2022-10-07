#include <talkie.h>


//uint8_t spSERVICE[] PROGMEM = {0x0C,0xF8,0x29,0x45,0x01,0xBF,0x95,0x5A,0x20,0x00,0xBF,0xA5,0x3A,0xE0,0x97,0x32,0x03,0xFC,0x5C,0x56,0xF2,0x6A,0x2A,0x20,0x2C,0xF9,0xC8,0x8A,0x2F,0xC1,0x95,0xEC,0x23,0xCD,0x31,0x99,0x97,0xB3,0x8F,0x34,0xBB,0x12,0x5A,0xF1,0x1E,0xF2,0xE4,0x42,0xA5,0xC8,0xA9,0x98,0x9C,0x49,0xD5,0x08,0x37,0x6D,0x29,0x26,0x55,0x52,0xBA,0xB6,0xB5,0x58,0x17,0x0F,0x7F,0xDD,0xCE,0x6C,0x5D,0xC2,0xF3,0xD7,0x78,0x9A,0x49,0x51,0xB3,0xCE,0xE5,0xAB,0x3A,0xD9,0xCC,0x76,0x95,0xBF,0xDB,0x76,0x15,0xF6,0x67,0x80,0x5F,0x53,0x0C,0xF0,0x6B,0xB2,0x03,0x7E,0x4E,0x37,0xC0,0x6F,0x66,0x0A,0xF8,0xAB,0xD9,0x00,0x7F,0xA6,0x29,0xE0,0xB7,0x92,0xFF,0x07};
//uint8_t spSECURITY[] PROGMEM = {0x02,0xF8,0x59,0xC8,0x00,0xBF,0xB7,0x18,0xE0,0x97,0xB4,0x00,0xFC,0x1E,0xD6,0xA2,0x1F,0xCB,0x44,0x9D,0xDD,0xAA,0xA7,0x0C,0xE1,0xD4,0x2D,0xAB,0x1E,0xB6,0x10,0xCB,0xB6,0x20,0x70,0x8A,0x52,0x15,0xAA,0x01,0x06,0x98,0x36,0xC2,0x01,0xD3,0x09,0x07,0x60,0x96,0xB6,0x91,0xF4,0x98,0x84,0xA9,0x5D,0x46,0x51,0x6D,0x11,0xB7,0xF4,0x1D,0x79,0xD1,0x2D,0x3C,0xDC,0x77,0xE4,0x39,0x34,0xCB,0x88,0xDF,0x51,0xE4,0x98,0x64,0xAD,0x7E,0x47,0x5D,0x42,0xB2,0x45,0xFA,0x29,0x43,0x0D,0xEE,0x8A,0xE1,0xD5,0x01,0x83,0xAB,0x39,0x20,0x03,0xF7,0x35,0x34,0xAF,0x64,0x9A,0xAF,0xC6,0x38,0x8C,0xA3,0x54,0xAC,0x2E,0xCB,0xF0,0x8E,0x14,0xB9,0xB9,0x2E,0x7E,0xFD,0x7F};
//uint8_t spCALL[]          PROGMEM = {0x02,0x48,0xA5,0xD8,0x02,0x1A,0x18,0x71,0x16,0x15,0x95,0xA4,0x7A,0x65,0x95,0xD5,0x44,0x88,0xFB,0x5B,0xDC,0x62,0x95,0x49,0x4E,0xA7,0x49,0xB6,0x5D,0xED,0x76,0x76,0x73,0x9A,0x4B,0xD9,0x83,0xBD,0x2A,0xB4,0xCE,0xF5,0x0A,0x77,0x50,0xB9,0x25,0x92,0x25,0xDE,0xE1,0x49,0xC2,0x77,0x44,0x5D,0xFB,0xEF,0xFF,0x01};
//uint8_t spCOME[]              PROGMEM ={0x0E,0x88,0xCD,0xD4,0x01,0xCE,0xB9,0x38,0x20,0xBA,0x54,0x05,0xC4,0x1C,0x1A,0x92,0x64,0xAA,0x2D,0x38,0xED,0xCD,0x6E,0x76,0x32,0x17,0xBA,0xD5,0xB8,0xC9,0xCD,0x77,0xD5,0x6A,0x9B,0xA5,0x54,0x28,0x4D,0x6C,0x63,0x1B,0xDB,0xD8,0xF9,0xCE,0xF6,0xB2,0xA7,0xFD,0x03};
//uint8_t spGOT[]               PROGMEM ={0xA2,0x20,0xBA,0x2A,0xDD,0x13,0x8F,0x2A,0x07,0x13,0x2D,0x5D,0x7B,0xF3,0x93,0xFB,0x6C,0xE1,0x11,0x73,0x4F,0xE1,0x73,0xB6,0x6B,0xD4,0xBF,0xC5,0xAD,0x66,0x5D,0x3A,0xEF,0x5A,0x4A,0xC2,0x52,0xEE,0x75,0x0F,0x20,0x00,0x43,0xC2,0x19,0x30,0x44,0x04,0x3C};
//uint8_t spGOODBYE[]           PROGMEM ={0xA9,0x49,0xE1,0x54,0x91,0x2D,0xAF,0x22,0x07,0x55,0x29,0x69,0x7B,0xF2,0x18,0x38,0x32,0x3C,0xCB,0x4D,0x52,0xC8,0x4A,0x5A,0x65,0x99,0x52,0x21,0x6A,0x61,0x69,0x2E,0x45,0x46,0x2C,0x43,0xA9,0x3C,0x3D,0x1C,0x87,0x2A,0x3A,0xFB,0x50,0x6E,0x73,0xEB,0xDB,0xEC,0x6E,0x77,0xA3,0xF7,0xD1,0x4E,0x35,0xA2,0xCC,0x7E,0x74,0x3E,0xC6,0xA8,0x79,0x85,0xD1,0x86,0x64,0x65,0x16,0x95,0x5B,0x13,0x52,0xB0,0x65,0x94,0x2E,0xB5,0x4D,0x6A,0x55,0x65,0xF8,0x01,0x00,0x00};
//uint8_t spGOT[]               PROGMEM ={0xA2,0x20,0xBA,0x2A,0xDD,0x13,0x8F,0x2A,0x07,0x13,0x2D,0x5D,0x7B,0xF3,0x93,0xFB,0x6C,0xE1,0x11,0x73,0x4F,0xE1,0x73,0xB6,0x6B,0xD4,0xBF,0xC5,0xAD,0x66,0x5D,0x3A,0xEF,0x5A,0x4A,0xC2,0x52,0xEE,0x75,0x0F,0x20,0x00,0x43,0xC2,0x19,0x30,0x44,0x04,0x3C};
//uint8_t spFAST[]          PROGMEM = {0x08,0x68,0xD6,0x55,0x02,0x0A,0x18,0x22,0x5D,0x02,0x1A,0x58,0x45,0x75,0xA3,0x5E,0xFA,0xE6,0x96,0xB7,0x39,0x6D,0xD3,0xA3,0xD6,0xBA,0xFA,0xF6,0x6B,0xAE,0xAE,0xA4,0xCA,0xEE,0xAC,0xAD,0x99,0xD1,0x28,0x5B,0x5C,0x8E,0xE2,0x4A,0x2B,0xFD,0x4E,0xBE,0xE2,0x85,0x80,0x25,0x5B,0x39,0xC0,0x80,0xDF,0x32,0x24,0xA0,0x01,0x0B,0x58,0x80,0x02,0xC0,0x80,0x3B,0x4C,0x14,0xF0,0xBC,0x38,0x03,0x96,0xDD,0xF9,0x7F};
//uint8_t spEMERGENCY[] PROGMEM = {0xA3,0x5B,0xCE,0x18,0x23,0x9F,0xAC,0x76,0x79,0x13,0x88,0x7C,0xB2,0xAA,0x19,0x8C,0x21,0x72,0xF5,0xAA,0x5A,0x50,0xD2,0xB0,0xD5,0xA9,0x76,0x52,0xB2,0x53,0xAD,0x95,0x26,0x72,0xD5,0x1A,0x8D,0xD6,0xDA,0x24,0xC5,0x22,0xC2,0x5E,0xAB,0x93,0xD6,0xB0,0x54,0xA5,0xAB,0x88,0x31,0xCD,0x93,0x92,0xAD,0x3C,0xDB,0x56,0x59,0xF6,0xB6,0x92,0x5C,0x83,0x6C,0x30,0xEB,0x0A,0x4A,0x5D,0xC6,0x45,0xAF,0x23,0xA8,0x53,0xC8,0xC2,0xF2,0xAA,0x24,0x3B,0x12,0xD3,0x6E,0xED,0xF2,0xB3,0x0C,0x99,0xDD,0x4B,0x00,0xB6,0x13,0x3A,0xE5,0xD4,0xA6,0xAC,0x91,0xE7,0x54,0xC3,0xA4,0xA1,0xE9,0xB6,0xD3,0x4E,0x19,0x46,0xA1,0xFD,0x46,0x3B,0xB9,0x8A,0x8E,0xB4,0x29,0x43,0x15,0xC2,0x93,0x1C,0xBD,0x8C,0x45,0xB0,0x8D,0x71,0xBD,0x36,0x6D,0xA6,0xA6,0xA2,0x69,0x0D,0xF0,0x8C,0xAB,0x02,0x7E,0x4A,0x31,0xC0,0x6F,0xA5,0x16,0x18,0x55,0x37,0x2E,0xEA,0xFE,0x65,0x0C,0x43,0xBB,0x50,0xFA,0x96,0x36,0x4E,0x93,0x82,0xE5,0x7B,0xDB,0x32,0x94,0x33,0x6E,0xFC,0x19,0xDB,0x74,0xC1,0x58,0xB1,0xA6,0xEC,0xCB,0x17,0x43,0xFA,0x9A,0x70,0x0C,0x6F,0x60,0x55,0xAB,0xFF,0x1F};
//uint8_t spCLEAR[] PROGMEM = {0x0C,0xC8,0xA3,0x39,0x00,0xC5,0x96,0x3B,0xA0,0x73,0x4F,0x03,0x4C,0xAD,0xD5,0xB2,0xCC,0x6C,0x42,0xB8,0xCB,0xCA,0x1A,0xE7,0xAC,0xE4,0xB6,0x2B,0x9F,0x46,0xC2,0x82,0xB6,0xAD,0x62,0x5A,0x37,0x0A,0xDE,0xB6,0x8A,0x19,0xDA,0xC1,0x69,0xDB,0x2A,0xA6,0x2B,0x85,0x90,0xAD,0xAB,0x9C,0xAE,0x04,0x53,0xB6,0xAC,0x72,0xD8,0x12,0x2C,0xD9,0x32,0xAA,0xE6,0x9A,0xB8,0x65,0xCB,0xA8,0xAA,0x6D,0xD4,0x95,0x2E,0xA5,0x2A,0xB6,0x51,0x4F,0xB2,0xA5,0xAA,0xA4,0x45,0x59,0xF1,0xFA,0xFF};
//uint8_t spMORE_THAN[] PROGMEM = {0x62,0x4E,0x9C,0x62,0xCC,0x9C,0xBA,0x3D,0x09,0x8E,0x52,0x4F,0x9C,0xE6,0xA2,0xA5,0x82,0x55,0x55,0x99,0xAA,0xA2,0x0C,0x53,0xC5,0x6D,0xEC,0x9A,0xBD,0x43,0xA4,0x8C,0x3E,0xC8,0x9A,0x4D,0x72,0x3A,0xDA,0x28,0x7B,0x26,0xD1,0xE9,0xAA,0x83,0xED,0x1E,0xC3,0x34,0x2B,0x0F,0xFE,0x2C,0x55,0x72,0x8F,0x2C,0xD4,0xD4,0x32,0xD9,0xB5,0xD2,0x98,0xCD,0x3A,0xB4,0xE3,0xC8,0xB2,0x69,0x4A,0x8F,0x45,0xA6,0x76,0x26,0x24,0x35,0x6B,0xA9,0x2E,0x73,0x35,0xF1,0x4A,0x5D,0xBA,0x2E,0x53,0x54,0xAD,0xCD,0xAA,0xAA,0x33,0x35,0xCD,0x55,0xAB,0xEA,0xAA,0x58,0x33,0x5E,0xAD,0xBA,0xC9,0x66,0xCF,0x7C,0xBD,0x9A,0x66,0x9A,0x23,0x73,0xD1,0x6E,0x56,0xDB,0x74,0x73,0x66,0x2C,0xDA,0xED,0x6A,0x9B,0x6A,0xCE,0x88,0x47,0xAB,0x6B,0x56,0x74,0x38,0x9D,0xB4,0xB6,0x1A,0x8A,0x94,0x74,0xD5,0x9A,0x66,0xA9,0xDC,0x42,0x63,0xA9,0xAB,0x46,0x5F,0x4E,0xCD,0xA9,0x2E,0x42,0xE8,0xB2,0x2C,0xFD,0x3F};
//uint8_t spPAPA[] PROGMEM = {0x0A,0x28,0x56,0xB9,0xA5,0x45,0x55,0x84,0x49,0xCC,0x93,0x66,0xD7,0x19,0x26,0x4B,0x4E,0x96,0xDD,0x44,0xBA,0xAE,0xBE,0xD9,0xCC,0x10,0x28,0x42,0xB9,0x8B,0xC8,0x06,0x60,0x80,0xF1,0xE9,0xAB,0xCA,0xA6,0x23,0xD4,0x36,0xDF,0xE1,0x8C,0x55,0x74,0x86,0x6B,0x9F,0xB1,0x67,0xBD,0xE1,0xE6,0xBB,0xDB,0x97,0x53,0x45,0x88,0xCF,0xAE,0xDF,0xFF,0x03};
