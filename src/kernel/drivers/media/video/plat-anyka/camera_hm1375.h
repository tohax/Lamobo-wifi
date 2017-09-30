/**
 * @file camera_hm1375.h
 * @brief camera driver file
 * Copyright (C) 2011 Anyka (Guangzhou) Microelectronics Technology Co., Ltd
 * @author wudaochao 
 * @date 2013-04-26
 * @version 1.0
 * @ref
 */
#ifndef __CAMERA_HM1375_H__
#define __CAMERA_HM1375_H__


#if defined (USE_CAMERA_HM1375) || defined (CONFIG_SENSOR_HM1375)

#undef DELAY_FLAG
#undef END_FLAG
#define DELAY_FLAG        0xfd   // first parameter is 0xfe, then 2nd parameter is delay time count
#define END_FLAG          0xfe   // first parameter is 0xff, then parameter table is over 

static const T_U16 INIT_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 UXGA_MODE_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 SXGA_MODE_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 VGA_MODE_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 CIF_MODE_TAB[] = 
{

    END_FLAG, END_FLAG
};

static const T_U16 QVGA_MODE_TAB[] = 
{
   
    END_FLAG, END_FLAG
};

static const T_U16 QCIF_MODE_TAB[] = 
{

    END_FLAG, END_FLAG
};

static const T_U16 QQVGA_MODE_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 PREV_MODE_TAB[] = 
{    
    END_FLAG, END_FLAG
};

static const T_U16 RECORD_MODE_TAB[] = 
{
    0x0022, 0x00,
    0x000C, 0x04,
    0x0006, 0x0F,	//开发板是装倒了的，要VFLIP on,Mirror on
    0x000A, 0x20,
    0x000F, 0x10,
    0x0012, 0x01,
    0x0013, 0x02,
    0x0015, 0x01,
    0x0016, 0x00,
    0x0018, 0x00,
    0x001D, 0x40,
    //0x0020, 0x10,
    0x0020, 0x50,//VSYNC: active low
    0x0023, 0x43,
    0x0024, 0x20,
    0x0025, 0x00,
    0x0026, 0x6F,
    //0x0027, 0x30,//YUYV(YUV422)
    0x0027, 0x10,
    0x0028, 0x01,
    0x002E, 0x0E,
    0x0030, 0x00,
    0x0034, 0x0E,
    0x0035, 0x01,
    0x0036, 0x00,
    0x0038, 0x02,
    0x0039, 0x01,
    0x003A, 0x01,
    0x003B, 0xFF,
    0x003C, 0xFF,
    0x003D, 0x40,
    0x003F, 0x14,
    0x0040, 0x10,
    0x0044, 0x07,
    0x0045, 0x25,
    0x0048, 0x7F,
    0x004E, 0xFF,
    0x0070, 0x00,
    0x0071, 0x4F,
    0x0072, 0x00,
    0x0073, 0x30,
    0x0074, 0x13,
    0x0075, 0x40,
    0x0076, 0x24,
    0x0078, 0x0F,
    0x007A, 0x05,
    0x007B, 0xF2,
    0x007C, 0x10,
    0x0080, 0xC9,
    0x0081, 0x00,
    0x0082, 0x28,
    0x0083, 0xB0,
    0x0084, 0x70,
    0x0086, 0x3E,
    0x0087, 0x70,
    0x0088, 0x11,
    0x0089, 0x3C,
    0x008A, 0x87,
    0x008D, 0x64,
    0x0090, 0x07,
    0x0091, 0x09,
    0x0092, 0x0C,
    0x0093, 0x0C,
    0x0094, 0x0C,
    0x0095, 0x0C,
    0x0096, 0x01,
    0x0097, 0x00,
    0x0098, 0x04,
    0x0099, 0x08,
    0x009A, 0x0C,
    0x0120, 0x36,
    0x0121, 0x81,
    0x0122, 0xEB,
    0x0123, 0x29,
    0x0124, 0x50,
    0x0125, 0xDE,
    0x0126, 0xB1,
    0x013D, 0x0F,
    0x013E, 0x0F,
    0x013F, 0x0F,
    0x0140, 0x14,
    0x0141, 0x0A,
    0x0142, 0x14,
    0x0143, 0x0A,
    0x0144, 0x08,
    0x0145, 0x04,
    0x0146, 0x28,
    0x0147, 0x3C,
    0x0148, 0x28,
    0x0149, 0x3C,
    0x014A, 0x96,
    0x014B, 0xC8,
    0x0150, 0x14,
    0x0151, 0x30,
    0x0152, 0x54,
    0x0153, 0x70,
    0x0154, 0x14,
    0x0155, 0x30,
    0x0156, 0x54,
    0x0157, 0x70,
    0x0158, 0x14,
    0x0159, 0x30,
    0x015A, 0x54,
    0x015B, 0x70,
    0x015C, 0x30,
    0x015D, 0x00,
    0x01D8, 0x20,
    0x01D9, 0x08,
    0x01DA, 0x20,
    0x01DB, 0x08,
    0x01DC, 0x20,
    0x01DD, 0x08,
    0x01DE, 0x20,
    0x01DF, 0x08,
    0x01E0, 0x20,
    0x01E1, 0x08,
    0x01E2, 0xFF,
    0x01E3, 0x00,
    0x01E4, 0x10,
    0x01E5, 0x10,
    0x01E6, 0x02,
    0x01E7, 0x10,
    0x01E8, 0x10,
    0x01E9, 0x10,
    0x01EA, 0x10,
    0x01EC, 0xFA,
    0x01EB, 0x10,
    0x0220, 0xF0,
    0x0221, 0xA0,
    0x0222, 0x00,
    0x0223, 0x80,
    0x0224, 0x80,
    0x0225, 0x00,
    0x0226, 0x80,
    0x0227, 0x80,
    0x0228, 0x00,
    0x0229, 0x80,
    0x022A, 0x80,
    0x022B, 0x00,
    0x022C, 0x80,
    0x022D, 0x12,
    0x022E, 0x10,
    0x022F, 0x12,
    0x0230, 0x10,
    0x0231, 0x12,
    0x0232, 0x10,
    0x0233, 0x12,
    0x0234, 0x10,
    0x0235, 0x80,
    0x0236, 0x02,
    0x0237, 0x80,
    0x0238, 0x02,
    0x0239, 0x80,
    0x023A, 0x02,
    0x023B, 0x80,
    0x023C, 0x02,
    0x023D, 0x00,
    0x023E, 0x02,
    0x023F, 0x00,
    0x0240, 0x02,
    0x0241, 0x00,
    0x0242, 0x02,
    0x0243, 0x00,
    0x0244, 0x02,
    0x0251, 0x10,
    0x0280, 0x00,
    0x0281, 0x41,
    0x0282, 0x00,
    0x0283, 0x6D,
    0x0284, 0x00,
    0x0285, 0xBC,
    0x0286, 0x01,
    0x0287, 0x45,
    0x0288, 0x01,
    0x0289, 0x7B,
    0x028A, 0x01,
    0x028B, 0xAC,
    0x028C, 0x01,
    0x028D, 0xD2,
    0x028E, 0x01,
    0x028F, 0xF6,
    0x0290, 0x02,
    0x0291, 0x16,
    0x0292, 0x02,
    0x0293, 0x35,
    0x0294, 0x02,
    0x0295, 0x6E,
    0x0296, 0x02,
    0x0297, 0xA2,
    0x0298, 0x02,
    0x0299, 0xFF,
    0x029A, 0x03,
    0x029B, 0x51,
    0x029C, 0x03,
    0x029D, 0x9B,
    0x029E, 0x00,
    0x029F, 0x85,
    0x02A0, 0x06,
    0x02C0, 0x80,
    0x02C1, 0x01,
    0x02C2, 0x71,
    0x02C3, 0x04,
    0x02C4, 0x0F,
    0x02C5, 0x04,
    0x02C6, 0x3D,
    0x02C7, 0x04,
    0x02C8, 0x94,
    0x02C9, 0x01,
    0x02CA, 0x57,
    0x02CB, 0x04,
    0x02CC, 0x0F,
    0x02CD, 0x04,
    0x02CE, 0x8F,
    0x02CF, 0x04,
    0x02D0, 0x9E,
    0x02D1, 0x01,
    0x02E0, 0x06,
    0x02E1, 0xC0,
    0x02E2, 0xE0,
    0x02F0, 0x48,
    0x02F1, 0x01,
    0x02F2, 0x32,
    0x02F3, 0x04,
    0x02F4, 0x16,
    0x02F5, 0x04,
    0x02F6, 0x52,
    0x02F7, 0x04,
    0x02F8, 0xAA,
    0x02F9, 0x01,
    0x02FA, 0x58,
    0x02FB, 0x04,
    0x02FC, 0x56,
    0x02FD, 0x04,
    0x02FE, 0xDD,
    0x02FF, 0x04,
    0x0300, 0x33,
    0x0301, 0x02,
    0x0324, 0x00,
    0x0325, 0x01,
    0x0333, 0x86,
    0x0334, 0x00,
    0x0335, 0x86,
    0x0340, 0x40,
    0x0341, 0x44,
    0x0342, 0x4A,
    0x0343, 0x2B,
    0x0344, 0x94,
    0x0345, 0x3F,
    0x0346, 0x8E,
    0x0347, 0x51,
    0x0348, 0x75,
    0x0349, 0x5C,
    0x034A, 0x6A,
    0x034B, 0x68,
    0x034C, 0x5E,
    0x0350, 0x7C,
    0x0351, 0x78,
    0x0352, 0x08,
    0x0353, 0x04,
    0x0354, 0x80,
    0x0355, 0x9A,
    0x0356, 0xCC,
    0x0357, 0xFF,
    0x0358, 0xFF,
    0x035A, 0xFF,
    0x035B, 0x00,
    0x035C, 0x70,
    0x035D, 0x80,
    0x035F, 0xA0,
    0x0488, 0x30,
    0x0360, 0xDF,
    0x0361, 0x00,
    0x0362, 0xFF,
    0x0363, 0x03,
    0x0364, 0xFF,
    0x037B, 0x11,
    0x037C, 0x1E,
    0x0380, 0xFF,
    0x0383, 0x50,
    0x038A, 0x64,
    0x038B, 0x64,
    0x038E, 0x40,
    0x0391, 0x2A,
    0x0393, 0x1E,
    0x0394, 0x64,
    0x0395, 0x23,
    0x0398, 0x03,
    0x0399, 0x45,
    0x039A, 0x06,
    0x039B, 0x8B,
    0x039C, 0x0D,
    0x039D, 0x16,
    0x039E, 0x0A,
    0x039F, 0x10,
    0x03A0, 0x10,
    0x03A1, 0xE5,
    0x03A2, 0x06,
    0x03A4, 0x18,
    0x03A5, 0x48,
    0x03A6, 0x2D,
    0x03A7, 0x78,
    0x03AC, 0x5A,
    0x03AD, 0x0F,
    0x03AE, 0x7F,
    0x03AF, 0x04,
    0x03B0, 0x35,
    0x03B1, 0x14,
    0x036F, 0x04,
    0x0370, 0x0A,
    0x0371, 0x04,
    0x0372, 0x10,
    0x0373, 0x40,
    0x0374, 0x20,
    0x0375, 0x04,
    0x0376, 0x00,
    0x0377, 0x08,
    0x0378, 0x08,
    0x0379, 0x04,
    0x037A, 0x08,
    0x0420, 0x00,
    0x0421, 0x00,
    0x0422, 0x00,
    0x0423, 0x84,
    0x0430, 0x10,
    0x0431, 0x60,
    0x0432, 0x10,
    0x0433, 0x20,
    0x0434, 0x00,
    0x0435, 0x30,
    0x0436, 0x00,
    0x0450, 0xFD,
    0x0451, 0xD8,
    0x0452, 0xA0,
    0x0453, 0x50,
    0x0454, 0x00,
    0x0459, 0x04,
    0x045A, 0x00,
    0x045B, 0x30,
    0x045C, 0x01,
    0x045D, 0x70,
    0x0460, 0x00,
    0x0461, 0x00,
    0x0462, 0x00,
    0x0465, 0x16,
    0x0466, 0x14,
    0x0478, 0x00,
    0x0480, 0x48,
    0x0481, 0x06,
    0x0482, 0x0C,
    0x04B0, 0x50,
    0x04B1, 0x86,
    0x04B2, 0x00,
    0x04B3, 0x18,
    0x04B4, 0x00,
    0x04B5, 0x00,
    0x04B6, 0x30,
    0x04B7, 0x00,
    0x04B8, 0x00,
    0x04B9, 0x10,
    0x04BA, 0x00,
    0x04BB, 0x00,
    0x04BD, 0x00,
    0x04C0, 0x00,
    0x04D0, 0x56,
    0x04D6, 0x30,
    0x04DD, 0x10,
    0x04D9, 0x16,
    0x04D3, 0x18,
    0x0540, 0x01,
    0x0541, 0x06,
    0x0542, 0x01,
    0x0543, 0x3B,
    0x0580, 0x50,
    0x0581, 0x30,
    0x0582, 0x2D,
    0x0583, 0x16,
    0x0584, 0x1E,
    0x0585, 0x0F,
    0x0586, 0x08,
    0x0587, 0x10,
    0x0590, 0x10,
    0x0591, 0x10,
    0x0592, 0x05,
    0x0593, 0x05,
    0x0594, 0x04,
    0x0595, 0x06,
    0x05B0, 0x04,
    0x05B1, 0x00,
    0x05E4, 0x02,
    0x05E5, 0x00,
    0x05E6, 0x81,
    0x05E7, 0x02,
    0x05E8, 0x09,
    0x05E9, 0x00,
    0x05EA, 0xE8,
    0x05EB, 0x01,
    0x0666, 0x02,
    0x0667, 0xE0,
    0x067F, 0x19,
    0x067C, 0x00,
    0x067D, 0x00,
    0x0682, 0x00,
    0x0683, 0x00,
    0x0688, 0x00,
    0x0689, 0x00,
    0x068E, 0x00,
    0x068F, 0x00,
    0x0695, 0x00,
    0x0694, 0x00,
    0x0697, 0x19,
    0x069B, 0x00,
    0x069C, 0x20,
    0x0720, 0x00,
    0x0725, 0x6A,
    0x0726, 0x03,
    0x072B, 0x64,
    0x072C, 0x64,
    0x072D, 0x20,
    0x072E, 0x82,
    0x072F, 0x08,
    0x0800, 0x16,
    0x0801, 0x4F,
    0x0802, 0x00,
    0x0803, 0x68,
    0x0804, 0x01,
    0x0805, 0x28,
    0x0806, 0x10,
    0x0808, 0x1D,
    0x0809, 0x18,
    0x080A, 0x10,
    0x080B, 0x07,
    0x080D, 0x0F,
    0x080E, 0x0F,
    0x0810, 0x00,
    0x0811, 0x08,
    0x0812, 0x20,
    0x0857, 0x0A,
    0x0858, 0x04,
    0x0859, 0x01,
    0x085A, 0x04,
    0x085B, 0x18,
    0x085C, 0x04,
    0x085D, 0x7F,
    0x085E, 0x02,
    0x085F, 0xD0,
    0x0860, 0x03,
    0x0861, 0x7F,
    0x0862, 0x02,
    0x0863, 0xD0,
    0x0864, 0x02,
    0x0865, 0x7F,
    0x0866, 0x01,
    0x0867, 0x00,
    0x0868, 0x40,
    0x0869, 0x01,
    0x086A, 0x00,
    0x086B, 0x40,
    0x086C, 0x01,
    0x086D, 0x00,
    0x086E, 0x40,
    0x0870, 0x00,
    0x0871, 0x14,
    0x0872, 0x01,
    0x0873, 0x20,
    0x0874, 0x00,
    0x0875, 0x14,
    0x0876, 0x00,
    0x0877, 0xEC,
    0x0815, 0x00,
    0x0816, 0x4C,
    0x0817, 0x00,
    0x0818, 0x7B,
    0x0819, 0x00,
    0x081A, 0xCA,
    0x081B, 0x01,
    0x081C, 0x3E,
    0x081D, 0x01,
    0x081E, 0x77,
    0x081F, 0x01,
    0x0820, 0xAA,
    0x0821, 0x01,
    0x0822, 0xCE,
    0x0823, 0x01,
    0x0824, 0xEE,
    0x0825, 0x02,
    0x0826, 0x16,
    0x0827, 0x02,
    0x0828, 0x33,
    0x0829, 0x02,
    0x082A, 0x65,
    0x082B, 0x02,
    0x082C, 0x91,
    0x082D, 0x02,
    0x082E, 0xDC,
    0x082F, 0x03,
    0x0830, 0x28,
    0x0831, 0x03,
    0x0832, 0x74,
    0x0833, 0x03,
    0x0834, 0xFF,
    0x0882, 0x00,
    0x0883, 0x3E,
    0x0884, 0x00,
    0x0885, 0x70,
    0x0886, 0x00,
    0x0887, 0xB8,
    0x0888, 0x01,
    0x0889, 0x28,
    0x088A, 0x01,
    0x088B, 0x5B,
    0x088C, 0x01,
    0x088D, 0x8A,
    0x088E, 0x01,
    0x088F, 0xB1,
    0x0890, 0x01,
    0x0891, 0xD9,
    0x0892, 0x01,
    0x0893, 0xEE,
    0x0894, 0x02,
    0x0895, 0x0F,
    0x0896, 0x02,
    0x0897, 0x4C,
    0x0898, 0x02,
    0x0899, 0x74,
    0x089A, 0x02,
    0x089B, 0xC3,
    0x089C, 0x03,
    0x089D, 0x0F,
    0x089E, 0x03,
    0x089F, 0x57,
    0x08A0, 0x03,
    0x08A1, 0xFF,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    0x002C, 0x00,
    0x0005, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 RECORD_720P_TAB[] = 
{
    0x0022, 0x00, // SFTSRT	_Soft Reset
    0x000C, 0x04,
    0x0006, 0x0B,	//开发板是装倒了的，要VFLIP on,Mirror on
    0x000A, 0x00,
    0x000F, 0x10,
    0x0012, 0x01,
    0x0013, 0x02,
    0x0015, 0x01,
    0x0016, 0x00,
    0x0018, 0x00,
    0x001D, 0x40,
    //	0x0020, 0x10,	//VSYNC: active high
    0x0020, 0x50,		//VSYNC: active low
    0x0023, 0x43,
    0x0024, 0x20,
    0x0025, 0x00,		//PCLK=78MHz
    //	0x0025, 0x01, 	//PCLK=39MHz                                                                                       
    0x0026, 0x6C,
    //	0x0027, 0x30,	//YUYV(YUV422)
    0x0027, 0x10,		//UYVY(YUV422)
    0x0028, 0x01,
    0x0030, 0x00,
    0x0034, 0x0E,
    0x0035, 0x01,
    0x0036, 0x00,
    0x0038, 0x02,
    0x0039, 0x01,
    0x003A, 0x01,
    0x003B, 0xFF,
    0x003C, 0xFF,
    0x003D, 0x40,
    0x003F, 0x14,
    0x0040, 0x10,
    0x0044, 0x07,
    0x0045, 0x35,
    0x0048, 0x7F,
    0x004E, 0xFF,
    0x0070, 0x22,
    0x0071, 0x3F,
    0x0072, 0x22,
    0x0073, 0x30,
    0x0074, 0x13,
    0x0075, 0x40,
    0x0076, 0x24,
    0x0078, 0x0F,
    0x007A, 0x06,
    0x007B, 0x14,
    0x007C, 0x10,
    0x0080, 0xC9,
    0x0081, 0x00,
    0x0082, 0x28,
    0x0083, 0xB0,
    0x0084, 0x60,
    0x0086, 0x3E,
    0x0087, 0x70,
    0x0088, 0x11,
    0x0089, 0x3C,
    0x008A, 0x87,
    0x008D, 0x64,
    0x0090, 0x07,
    0x0091, 0x09,
    0x0092, 0x0C,
    0x0093, 0x0C,
    0x0094, 0x0C,
    0x0095, 0x0C,
    0x0096, 0x01,
    0x0097, 0x00,
    0x0098, 0x04,
    0x0099, 0x08,
    0x009A, 0x0C,
    0x0120, 0x36,
    0x0121, 0x81,
    0x0122, 0xEB,
    0x0123, 0x29,
    0x0124, 0x50,
    0x0125, 0xDE,
    0x0126, 0xB1,
    0x013D, 0x0F,
    0x013E, 0x0F,
    0x013F, 0x0F,
    0x0140, 0x14,
    0x0141, 0x0A,
    0x0142, 0x14,
    0x0143, 0x0A,
    0x0144, 0x08,
    0x0145, 0x04,
    0x0146, 0x28,
    0x0147, 0x3C,
    0x0148, 0x28,
    0x0149, 0x3C,
    0x014A, 0x96,
    0x014B, 0xC8,
    0x0150, 0x14,
    0x0151, 0x30,
    0x0152, 0x54,
    0x0153, 0x70,
    0x0154, 0x14,
    0x0155, 0x30,
    0x0156, 0x54,
    0x0157, 0x70,
    0x0158, 0x14,
    0x0159, 0x30,
    0x015A, 0x54,
    0x015B, 0x70,
    0x015C, 0x30,
    0x015D, 0x00,
    0x01D8, 0x20,
    0x01D9, 0x08,
    0x01DA, 0x20,
    0x01DB, 0x08,
    0x01DC, 0x20,
    0x01DD, 0x08,
    0x01DE, 0x50,
    0x01E0, 0x50,
    0x01E2, 0x50,
    0x01E4, 0x10,
    0x01E5, 0x10,
    0x01E6, 0x02,
    0x01E7, 0x10,
    0x01E8, 0x10,
    0x01E9, 0x10,
    0x01EC, 0x28,
    0x0220, 0x00,
    0x0221, 0xA0,
    0x0222, 0x00,
    0x0223, 0x80,
    0x0224, 0x80,
    0x0225, 0x00,
    0x0226, 0x80,
    0x0227, 0x80,
    0x0228, 0x00,
    0x0229, 0x80,
    0x022A, 0x80,
    0x022B, 0x00,
    0x022C, 0x80,
    0x022D, 0x12,
    0x022E, 0x10,
    0x022F, 0x12,
    0x0230, 0x10,
    0x0231, 0x12,
    0x0232, 0x10,
    0x0233, 0x12,
    0x0234, 0x10,
    0x0235, 0x88,
    0x0236, 0x02,
    0x0237, 0x88,
    0x0238, 0x02,
    0x0239, 0x88,
    0x023A, 0x02,
    0x023B, 0x88,
    0x023C, 0x02,
    0x023D, 0x04,
    0x023E, 0x02,
    0x023F, 0x04,
    0x0240, 0x02,
    0x0241, 0x04,
    0x0242, 0x02,
    0x0243, 0x04,
    0x0244, 0x02,
    0x0251, 0x10,
    0x0280, 0x00,
    0x0281, 0x41,
    0x0282, 0x00,
    0x0283, 0x6D,
    0x0284, 0x00,
    0x0285, 0xBC,
    0x0286, 0x01,
    0x0287, 0x45,
    0x0288, 0x01,
    0x0289, 0x7B,
    0x028A, 0x01,
    0x028B, 0xAC,
    0x028C, 0x01,
    0x028D, 0xD2,
    0x028E, 0x01,
    0x028F, 0xF6,
    0x0290, 0x02,
    0x0291, 0x16,
    0x0292, 0x02,
    0x0293, 0x35,
    0x0294, 0x02,
    0x0295, 0x6E,
    0x0296, 0x02,
    0x0297, 0xA2,
    0x0298, 0x02,
    0x0299, 0xFF,
    0x029A, 0x03,
    0x029B, 0x51,
    0x029C, 0x03,
    0x029D, 0x9B,
    0x029E, 0x00,
    0x029F, 0x85,
    0x02A0, 0x06,
    0x02C0, 0x80,
    0x02C1, 0x01,
    0x02C2, 0x71,
    0x02C3, 0x04,
    0x02C4, 0x0F,
    0x02C5, 0x04,
    0x02C6, 0x3D,
    0x02C7, 0x04,
    0x02C8, 0x94,
    0x02C9, 0x01,
    0x02CA, 0x57,
    0x02CB, 0x04,
    0x02CC, 0x0F,
    0x02CD, 0x04,
    0x02CE, 0x8F,
    0x02CF, 0x04,
    0x02D0, 0x9E,
    0x02D1, 0x01,
    0x02E0, 0x06,
    0x02E1, 0xC0,
    0x02E2, 0xE0,
    0x02F0, 0x48,
    0x02F1, 0x01,
    0x02F2, 0x32,
    0x02F3, 0x04,
    0x02F4, 0x16,
    0x02F5, 0x04,
    0x02F6, 0x52,
    0x02F7, 0x04,
    0x02F8, 0xAA,
    0x02F9, 0x01,
    0x02FA, 0x58,
    0x02FB, 0x04,
    0x02FC, 0x56,
    0x02FD, 0x04,
    0x02FE, 0xDD,
    0x02FF, 0x04,
    0x0300, 0x33,
    0x0301, 0x02,
    0x0324, 0x00,
    0x0325, 0x01,
    0x0333, 0x86,
    0x0334, 0x00,
    0x0335, 0x86,
    0x0340, 0x40,
    0x0341, 0x44,
    0x0342, 0x4A,
    0x0343, 0x2B,
    0x0344, 0x94,
    0x0345, 0x3F,
    0x0346, 0x8E,
    0x0347, 0x51,
    0x0348, 0x75,
    0x0349, 0x5C,
    0x034A, 0x6A,
    0x034B, 0x68,
    0x034C, 0x5E,
    0x0350, 0x7C,
    0x0351, 0x78,
    0x0352, 0x08,
    0x0353, 0x04,
    0x0354, 0x80,
    0x0355, 0x9A,
    0x0356, 0xCC,
    0x0357, 0xFF,
    0x0358, 0xFF,
    0x035A, 0xFF,
    0x035B, 0x00,
    0x035C, 0x70,
    0x035D, 0x80,
    0x035F, 0xA0,
    0x0488, 0x30,
    0x0360, 0xDF,
    0x0361, 0x00,
    0x0362, 0xFF,
    0x0363, 0x03,
    0x0364, 0xFF,
    0x037B, 0x11,
    0x037C, 0x1E,
    0x0380, 0xFF,
    0x0383, 0x50,
    0x038A, 0x64,
    0x038B, 0x64,
    0x038E, 0x40,
    0x0391, 0x2A,
    0x0393, 0x1E,
    0x0394, 0x64,
    0x0395, 0x23,
    0x0398, 0x03,
    0x0399, 0x45,
    0x039A, 0x06,
    0x039B, 0x8B,
    0x039C, 0x0D,
    0x039D, 0x16,
    0x039E, 0x0A,
    0x039F, 0x10,
    0x03A0, 0x10,
    0x03A1, 0xE5,
    0x03A2, 0x06,
    0x03A4, 0x18,
    0x03A5, 0x48,
    0x03A6, 0x2D,
    0x03A7, 0x78,
    0x03AC, 0x5A,
    0x03AD, 0x0F,
    0x03AE, 0x7F,
    0x03AF, 0x04,
    0x03B0, 0x35,
    0x03B1, 0x14,
    0x036F, 0x04,
    0x0370, 0x0A,
    0x0371, 0x04,
    0x0372, 0x00,
    0x0373, 0x40,
    0x0374, 0x20,
    0x0375, 0x04,
    0x0376, 0x00,
    0x0377, 0x08,
    0x0378, 0x08,
    0x0379, 0x04,
    0x037A, 0x08,
    0x0420, 0x00,
    0x0421, 0x00,
    0x0422, 0x00,
    0x0423, 0x84,
    0x0430, 0x10,
    0x0431, 0x60,
    0x0432, 0x10,
    0x0433, 0x20,
    0x0434, 0x00,
    0x0435, 0x30,
    0x0436, 0x00,
    0x0450, 0xFD,
    0x0451, 0xD8,
    0x0452, 0xA0,
    0x0453, 0x50,
    0x0454, 0x00,
    0x0459, 0x04,
    0x045A, 0x00,
    0x045B, 0x30,
    0x045C, 0x01,
    0x045D, 0x70,
    0x0460, 0x00,
    0x0461, 0x00,
    0x0462, 0x00,
    0x0465, 0x16,
    0x0466, 0x14,
    0x0478, 0x00,
    0x0480, 0x48,
    0x0481, 0x06,
    0x0482, 0x0C,
    0x04B0, 0x50,
    0x04B1, 0x86,
    0x04B2, 0x00,
    0x04B3, 0x18,
    0x04B4, 0x00,
    0x04B5, 0x00,
    0x04B6, 0x30,
    0x04B7, 0x00,
    0x04B8, 0x00,
    0x04B9, 0x10,
    0x04BA, 0x00,
    0x04BB, 0x00,
    0x04BD, 0x00,
    0x04C0, 0x00,
    0x04D0, 0x56,
    0x04D6, 0x30,
    0x04DD, 0x10,
    0x04D9, 0x16,
    0x04D3, 0x18,
    0x0540, 0x00,
    0x0541, 0xD0,
    0x0542, 0x00,
    0x0543, 0xFA,
    0x0580, 0x50,
    0x0581, 0x30,
    0x0582, 0x2D,
    0x0583, 0x16,
    0x0584, 0x1E,
    0x0585, 0x0F,
    0x0586, 0x08,
    0x0587, 0x10,
    0x0590, 0x10,
    0x0591, 0x10,
    0x0592, 0x05,
    0x0593, 0x05,
    0x0594, 0x04,
    0x0595, 0x06,
    0x05B0, 0x04,
    0x05B1, 0x00,
    0x05E4, 0x08,
    0x05E5, 0x00,
    0x05E6, 0x07,
    0x05E7, 0x05,
    0x05E8, 0x0A,
    0x05E9, 0x00,
    0x05EA, 0xD9,
    0x05EB, 0x02,
    0x0666, 0x02,
    0x0667, 0xE0,
    0x067F, 0x19,
    0x067C, 0x00,
    0x067D, 0x00,
    0x0682, 0x00,
    0x0683, 0x00,
    0x0688, 0x00,
    0x0689, 0x00,
    0x068E, 0x00,
    0x068F, 0x00,
    0x0695, 0x00,
    0x0694, 0x00,
    0x0697, 0x19,
    0x069B, 0x00,
    0x069C, 0x30,
    0x0720, 0x00,
    0x0725, 0x6A,
    0x0726, 0x03,
    0x072B, 0x64,
    0x072C, 0x64,
    0x072D, 0x20,
    0x072E, 0x82,
    0x072F, 0x08,
    0x0800, 0x16,
    0x0801, 0x30,
    0x0802, 0x00,
    0x0803, 0x68,
    0x0804, 0x01,
    0x0805, 0x28,
    0x0806, 0x10,
    0x0808, 0x1D,
    0x0809, 0x18,
    0x080A, 0x10,
    0x080B, 0x07,
    0x080D, 0x0F,
    0x080E, 0x0F,
    0x0810, 0x00,
    0x0811, 0x08,
    0x0812, 0x20,
    0x0857, 0x0A,
    0x0858, 0x30,
    0x0859, 0x01,
    0x085A, 0x03,
    0x085B, 0x40,
    0x085C, 0x04,
    0x085D, 0x7F,
    0x085E, 0x02,
    0x085F, 0xD0,
    0x0860, 0x03,
    0x0861, 0x7F,
    0x0862, 0x02,
    0x0863, 0xD0,
    0x0864, 0x00,
    0x0865, 0x7F,
    0x0866, 0x01,
    0x0867, 0x00,
    0x0868, 0x40,
    0x0869, 0x01,
    0x086A, 0x00,
    0x086B, 0x40,
    0x086C, 0x01,
    0x086D, 0x00,
    0x086E, 0x40,
    0x0870, 0x00,
    0x0871, 0x14,
    0x0872, 0x01,
    0x0873, 0x20,
    0x0874, 0x00,
    0x0875, 0x14,
    0x0876, 0x00,
    0x0877, 0xEC,
    0x0815, 0x00,
    0x0816, 0x4C,
    0x0817, 0x00,
    0x0818, 0x7B,
    0x0819, 0x00,
    0x081A, 0xCA,
    0x081B, 0x01,
    0x081C, 0x3E,
    0x081D, 0x01,
    0x081E, 0x77,
    0x081F, 0x01,
    0x0820, 0xAA,
    0x0821, 0x01,
    0x0822, 0xCE,
    0x0823, 0x01,
    0x0824, 0xEE,
    0x0825, 0x02,
    0x0826, 0x16,
    0x0827, 0x02,
    0x0828, 0x33,
    0x0829, 0x02,
    0x082A, 0x65,
    0x082B, 0x02,
    0x082C, 0x91,
    0x082D, 0x02,
    0x082E, 0xDC,
    0x082F, 0x03,
    0x0830, 0x28,
    0x0831, 0x03,
    0x0832, 0x74,
    0x0833, 0x03,
    0x0834, 0xFF,
    0x0882, 0x00,
    0x0883, 0x3E,
    0x0884, 0x00,
    0x0885, 0x70,
    0x0886, 0x00,
    0x0887, 0xB8,
    0x0888, 0x01,
    0x0889, 0x28,
    0x088A, 0x01,
    0x088B, 0x5B,
    0x088C, 0x01,
    0x088D, 0x8A,
    0x088E, 0x01,
    0x088F, 0xB1,
    0x0890, 0x01,
    0x0891, 0xD9,
    0x0892, 0x01,
    0x0893, 0xEE,
    0x0894, 0x02,
    0x0895, 0x0F,
    0x0896, 0x02,
    0x0897, 0x4C,
    0x0898, 0x02,
    0x0899, 0x74,
    0x089A, 0x02,
    0x089B, 0xC3,
    0x089C, 0x03,
    0x089D, 0x0F,
    0x089E, 0x03,
    0x089F, 0x57,
    0x08A0, 0x03,
    0x08A1, 0xFF,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    0x002C, 0x00,
    0x0005, 0x01,
    END_FLAG, END_FLAG
};


/****************   Camera Exposure Table   ****************/
static const T_U16 EXPOSURE_WHOLE_TAB[] = 
{
    // default
    0x038E, 0x40,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 EXPOSURE_CENTER_TAB[] = 
{
    // default
    0x038E, 0x40,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 EXPOSURE_MIDDLE_TAB[] = 
{
    //+3
    0x038E, 0x54,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

/****************   Camera Brightness Table   ****************/
static const T_U16 BRIGHTNESS_0_TAB[] = 
{
    0x0125, 0xDE,
    0x04C0, 0x98,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 BRIGHTNESS_1_TAB[] = 
{
    0x0125, 0xDE,
    0x04C0, 0x8F,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 BRIGHTNESS_2_TAB[] = 
{
    0x0125, 0xDE,
    0x04C0, 0x88,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 BRIGHTNESS_3_TAB[] = 
{
    0x0125, 0xDE,
    0x04C0, 0x00,	//　default
    0x0100, 0x01,	// CMU AE
    0x0101, 0x01,	// CMU AWB
    0x0000, 0x01,	// CMU
    END_FLAG, END_FLAG
};

static const T_U16 BRIGHTNESS_4_TAB[] = 
{
    0x0125, 0xDE,
    0x04C0, 0x08,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 BRIGHTNESS_5_TAB[] = 
{
    0x0125, 0xDE,
    0x04C0, 0x0F,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 BRIGHTNESS_6_TAB[] = 
{
    0x0125, 0xDE,
    0x04C0, 0x18,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 BRIGHTNESS_7_TAB[] = 
{
    0x0125, 0xDE,
    0x04C0, 0x1F,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

/****************   Camera Contrast Table   ****************/
static const T_U16 CONTRAST_1_TAB[] = 
{
    0x04B0, 0x3D,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 CONTRAST_2_TAB[] = 
{
    0x04B0, 0x45,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 CONTRAST_3_TAB[] = 
{
    0x04B0, 0x50,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 CONTRAST_4_TAB[] = 
{
    0x04B0, 0x56,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 CONTRAST_5_TAB[] = 
{
    0x04B0, 0x5C,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 CONTRAST_6_TAB[] = 
{
    0x04B0, 0x64,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 CONTRAST_7_TAB[] = 
{
    0x04B0, 0x6a,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

/* 
   ------reference if plan working

   ;------ Hue ------
   (0x0486, value) ; value range : 00-80 
   (0x0121, 0x81);
   (0x0486, 0xFF);

   (0x0121, 0x81);
   (0x0486, 0x00);

   (0x0121, 0xA1);
   (0x0486, 0xFF);
*/

/****************   Camera Saturation Table   ****************/
static const T_U16 SATURATION_0_TAB[] = 
{
    0x0480, 0x20,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SATURATION_1_TAB[] = 
{
    0x0480, 0x30,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SATURATION_2_TAB[] = 
{
    0x0480, 0x40,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SATURATION_3_TAB[] = 
{
    0x0480, 0x48,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SATURATION_4_TAB[] = 
{ 
    0x0480, 0x58,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SATURATION_5_TAB[] = 
{
    0x0480, 0x68,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SATURATION_6_TAB[] = 
{
    0x0480, 0x78,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};


/****************   Camera Sharpness Table   ****************/
static const T_U16 SHARPNESS_0_TAB[] = 
{
    0x0374, 0x00,
    0x05B0, 0x00,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SHARPNESS_1_TAB[] = 
{
    0x0374, 0x10,
    0x05B0, 0x00,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SHARPNESS_2_TAB[] = 
{
    0x0374, 0x20,
    0x05B0, 0x04,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SHARPNESS_3_TAB[] = 
{
    0x0374, 0x30,
    0x05B0, 0x08,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SHARPNESS_4_TAB[] = 
{
    0x0374, 0x40,
    0x05B0, 0x0c,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SHARPNESS_5_TAB[] = 
{
    0x0374, 0x50,
    0x05B0, 0x0f,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

static const T_U16 SHARPNESS_6_TAB[] = 
{
    0x0374, 0x60,
    0x05B0, 0x10,
    0x0100, 0x01,
    0x0101, 0x01,
    0x0000, 0x01,
    END_FLAG, END_FLAG
};

/****************   Camera hue Table   ****************/
static const T_U16 HUE_0_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 HUE_1_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 HUE_2_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 HUE_3_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 HUE_4_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 HUE_5_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 HUE_6_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 HUE_AUTO_0_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 HUE_AUTO_1_TAB[] = 
{
    END_FLAG, END_FLAG
};

/****************   Camera AWB Table   ****************/
/*
  AWB Normal
*/
static const T_U16 AWB_AUTO_TAB[] = 
{
    //AWB Normal
    0x0380, 0xFF,
    0x032D, 0x99,
    0x032E, 0x01,
    0x032F, 0x00,
    0x0330, 0x01,
    0x0331, 0x3E,
    0x0332, 0x01,
    0x0000, 0x00,
    0x0100, 0x00,
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 AWB_SUNNY_TAB[] = 
{
    //Daylight //7000K
    0x0380, 0xFD, 		
    0x032D, 0x8F,
    0x032E, 0x01,
    0x032F, 0x00,
    0x0330, 0x01,
    0x0331, 0x1D,
    0x0332, 0x01,
    0x0000, 0x00,
    0x0100, 0x00,
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 AWB_CLOUDY_TAB[] = 
{
    //Cloud //13000K
    0x0380, 0xFD, 		 
    0x032D, 0x22,
    0x032E, 0x01,
    0x032F, 0x00,
    0x0330, 0x01,
    0x0331, 0x7D,
    0x0332, 0x01,
    0x0000, 0x00,
    0x0100, 0x00,
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 AWB_OFFICE_TAB[] = 
{
    // Incandescence //5000K
    0x0380, 0xFD, 	   
    0x032D, 0x4E,
    0x032E, 0x01,
    0x032F, 0x00,
    0x0330, 0x01,
    0x0331, 0x93,
    0x0332, 0x01,
    0x0000, 0x00,
    0x0100, 0x00,
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 AWB_HOME_TAB[] = 
{
    // Incandescence //5000K
    0x0380, 0xFD, 	   
    0x032D, 0x4E,
    0x032E, 0x01,
    0x032F, 0x00,
    0x0330, 0x01,
    0x0331, 0x93,
    0x0332, 0x01,
    0x0000, 0x00,
    0x0100, 0x00,
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

/****************   Camera Effect Table   ****************/
static const T_U16 EFFECT_NORMAL_TAB[] = 
{
    0x0120, 0x37,      
    0x0488, 0x10,      
    0x0486, 0x00,
    0x0487, 0xFF,
    0x0000, 0x00,   
    0x0100, 0x00,   
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 EFFECT_SEPIA_TAB[] = 
{
    0x0120, 0x27,           
    0x0488, 0x11,       
    0x0486, 0x40,          
    0x0487, 0xA0,
    0x0000, 0x00,  
    0x0100, 0x00,  
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 EFFECT_ANTIQUE_TAB[] = 
{
    //ColorInv
    0x0120, 0x37,          
    0x0488, 0x12,
    0x0486, 0x00,
    0x0487, 0xFF,
    0x0000, 0x00,  
    0x0100, 0x00, 
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 EFFECT_BLUISH_TAB[] = 
{
    0x0120, 0x27,          
    0x0488, 0x11,
    0x0486, 0xB0,
    0x0487, 0x30,
    0x0000, 0x00, 
    0x0100, 0x00,
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 EFFECT_GREENISH_TAB[] = 
{
    0x0120, 0x27,          
    0x0488, 0x11,
    0x0486, 0x70,
    0x0487, 0x50,
    0x0000, 0x00, 
    0x0100, 0x00, 
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 EFFECT_REDDISH_TAB[] = 
{
    0x0120, 0x27,          
    0x0488, 0x11,
    0x0486, 0x70,
    0x0487, 0xB0,
    0x0000, 0x00, 
    0x0100, 0x00,
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 EFFECT_NEGATIVE_TAB[] = 
{
    //ColorInv
    0x0120, 0x37, 		 
    0x0488, 0x12,
    0x0486, 0x00,
    0x0487, 0xFF,
    0x0000, 0x00,  
    0x0100, 0x00, 
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

static const T_U16 EFFECT_BW_TAB[] = 
{
    //Grayscale                                               
    0x0120, 0x27,             
    0x0488, 0x11,           
    0x0486, 0x80,            
    0x0487, 0x80,
    0x0000, 0x00,    
    0x0100, 0x00,    
    0x0101, 0x00,
    END_FLAG, END_FLAG
};

/****************   Camera night/day mode   ****************/
static const T_U16 DAY_MODE_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 NIGHT_MODE_TAB[] = 
{
    END_FLAG, END_FLAG
};

/****************   Camera Mirror Table   ****************/
//;---- Flip / Mirror Reg0x0006[1][0] ------
//(0x0006, 0x09); [bit[0] : Flip value :08/09
//(0x0006, 0x08); [bit[0] : Flip

//(0x0006, 0x0a); [bit[1] : mirror value :08/0a
//(0x0006, 0x08); [bit[1] : mirror value :08/0a

static const T_U16 MIRROR_V_TAB[] = 
{
    //0x0006, 0x09,
    0x0006, 0x0a,
	END_FLAG, END_FLAG
};

static const T_U16 MIRROR_H_TAB[] = 
{
    //0x0006, 0x0a,
    0x0006, 0x09,
	END_FLAG, END_FLAG
};

static const T_U16 MIRROR_NORMAL_TAB[] = 
{
    //0x0006, 0x08,
    0x0006, 0x0b,
	END_FLAG, END_FLAG
};

static const T_U16 MIRROR_FLIP_TAB[] = 
{
    //0x0006, 0x0b,
    0x0006, 0x08,
	END_FLAG, END_FLAG
};


/****************   Camera anti-flicker mode   ****************/
static const T_U16 ANTI_FLICKER_DISABLE_TAB[] = 
{
    END_FLAG, END_FLAG
};

static const T_U16 ANTI_FLICKER_50HZ_TAB[] = 
{
    0x0120, 0x36,
    //0x0542, 0x00,
    //0x0543, 0xFA,
    END_FLAG, END_FLAG
};

static const T_U16 ANTI_FLICKER_60HZ_TAB[] = 
{
    0x0120, 0x37,
    //0x0540, 0x00,
    //0x0541, 0xD0,
    END_FLAG, END_FLAG
};

static const T_U16 ANTI_FLICKER_AUTO_TAB[] = 
{
    END_FLAG, END_FLAG
};

#endif
#endif
