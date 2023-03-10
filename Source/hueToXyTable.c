/**************************************************************************************************
  Filename:       HueToXyTable.c
  Revised:        $Date: 2013-04-03 14:59:11 -0700 (Wed, 03 Apr 2013) $
  Revision:       $Revision: 33727 $

  Description:    This file contains hue to X,Y conversion tables
                 (HSL color space -> xyY color space).


  Copyright 2011-2012 Texas Instruments Incorporated. All rights reserved.

  IMPORTANT: Your use of this Software is limited to those specific rights
  granted under the terms of a software license agreement between the user
  who downloaded the software, his/her employer (which must be your employer)
  and Texas Instruments Incorporated (the "License").  You may not use this
  Software unless you agree to abide by the terms of the License. The License
  limits your use, and you acknowledge, that the Software may not be modified,
  copied or distributed unless embedded on a Texas Instruments microcontroller
  or used solely and exclusively in conjunction with a Texas Instruments radio
  frequency transceiver, which is integrated into your product.  Other than for
  the foregoing purpose, you may not use, reproduce, copy, prepare derivative
  works of, modify, distribute, perform, display or sell this Software and/or
  its documentation for any purpose.

  YOU FURTHER ACKNOWLEDGE AND AGREE THAT THE SOFTWARE AND DOCUMENTATION ARE
  PROVIDED “AS IS” WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED,
  INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE,
  NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL
  TEXAS INSTRUMENTS OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT,
  NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER
  LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
  INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE
  OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT
  OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
  (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

  Should you have any questions regarding your right to use this Software,
  contact Texas Instruments Incorporated at www.TI.com.
**************************************************************************************************/

//Color table generated for R[0749,0249], G[0074,799], B[0129,0029].
CONST unsigned short hueToX[] = {
0xbfff,0xbdf6,0xbbee,0xb9e5,0xb7dd,0xb5d4,0xb3cc,0xb1c4,
0xafbb,0xadb3,0xabaa,0xa9a2,0xa799,0xa591,0xa389,0xa180,
0x9f78,0x9d6f,0x9b67,0x995e,0x9756,0x954e,0x9345,0x913d,
0x8f34,0x8d2c,0x8b24,0x891b,0x8713,0x850a,0x8302,0x80f9,
0x7ef1,0x7ce9,0x7ae0,0x78d8,0x76cf,0x74c7,0x72be,0x70b6,
0x6eae,0x6ca5,0x6a9d,0x6894,0x668c,0x6483,0x627b,0x6073,
0x5e6a,0x5c62,0x5a59,0x5851,0x5649,0x5440,0x5238,0x502f,
0x4e27,0x4c1e,0x4a16,0x480e,0x4605,0x43fd,0x41f4,0x3fec,
0x3de3,0x3bdb,0x39d3,0x37ca,0x35c2,0x33b9,0x31b1,0x2fa8,
0x2da0,0x2b98,0x298f,0x2787,0x257e,0x2376,0x216e,0x1f65,
0x1d5d,0x1b54,0x194c,0x1743,0x1333,0x135d,0x1387,0x13b2,
0x13dc,0x1406,0x1431,0x145b,0x1486,0x14b0,0x14da,0x1505,
0x152f,0x155a,0x1584,0x15ae,0x15d9,0x1603,0x162e,0x1658,
0x1682,0x16ad,0x16d7,0x1702,0x172c,0x1756,0x1781,0x17ab,
0x17d6,0x1800,0x182a,0x1855,0x187f,0x18aa,0x18d4,0x18fe,
0x1929,0x1953,0x197e,0x19a8,0x19d2,0x19fd,0x1a27,0x1a52,
0x1a7c,0x1aa6,0x1ad1,0x1afb,0x1b26,0x1b50,0x1b7a,0x1ba5,
0x1bcf,0x1bfa,0x1c24,0x1c4e,0x1c79,0x1ca3,0x1cce,0x1cf8,
0x1d22,0x1d4d,0x1d77,0x1da2,0x1dcc,0x1df6,0x1e21,0x1e4b,
0x1e76,0x1ea0,0x1eca,0x1ef5,0x1f1f,0x1f4a,0x1f74,0x1f9e,
0x1fc9,0x1ff3,0x201e,0x2048,0x2072,0x209d,0x20c7,0x20f2,
0x2147,0x2325,0x2503,0x26e1,0x28bf,0x2a9d,0x2c7b,0x2e59,
0x3037,0x3215,0x33f3,0x35d1,0x37af,0x398d,0x3b6b,0x3d49,
0x3f27,0x4105,0x42e3,0x44c1,0x469f,0x487d,0x4a5b,0x4c39,
0x4e17,0x4ff5,0x51d3,0x53b1,0x558f,0x576d,0x594b,0x5b29,
0x5d07,0x5ee5,0x60c3,0x62a1,0x647f,0x665d,0x683b,0x6a19,
0x6bf7,0x6dd5,0x6fb3,0x7192,0x7370,0x754e,0x772c,0x790a,
0x7ae8,0x7cc6,0x7ea4,0x8082,0x8260,0x843e,0x861c,0x87fa,
0x89d8,0x8bb6,0x8d94,0x8f72,0x9150,0x932e,0x950c,0x96ea,
0x98c8,0x9aa6,0x9c84,0x9e62,0xa040,0xa21e,0xa3fc,0xa5da,
0xa7b8,0xa996,0xab74,0xad52,0xaf30,0xb10e,0xb2ec,0xb4ca,
0xb6a8,0xb886,0xba64,0xbc42,0xbe20,0xbec9,0xbf72,0xbfff,};

CONST unsigned short hueToY[] = {
0x3fff,0x41a7,0x434f,0x44f7,0x469f,0x4847,0x49ef,0x4b97,
0x4d3f,0x4ee7,0x508f,0x5237,0x53df,0x5587,0x572f,0x58d7,
0x5a7f,0x5c27,0x5dd0,0x5f78,0x6120,0x62c8,0x6470,0x6618,
0x67c0,0x6968,0x6b10,0x6cb8,0x6e60,0x7008,0x71b0,0x7358,
0x7500,0x76a8,0x7850,0x79f9,0x7ba1,0x7d49,0x7ef1,0x8099,
0x8241,0x83e9,0x8591,0x8739,0x88e1,0x8a89,0x8c31,0x8dd9,
0x8f81,0x9129,0x92d1,0x9479,0x9622,0x97ca,0x9972,0x9b1a,
0x9cc2,0x9e6a,0xa012,0xa1ba,0xa362,0xa50a,0xa6b2,0xa85a,
0xaa02,0xabaa,0xad52,0xaefa,0xb0a2,0xb24b,0xb3f3,0xb59b,
0xb743,0xb8eb,0xba93,0xbc3b,0xbde3,0xbf8b,0xc133,0xc2db,
0xc483,0xc62b,0xc7d3,0xc97b,0xcccc,0xca7a,0xc828,0xc5d6,
0xc385,0xc133,0xbee1,0xbc90,0xba3e,0xb7ec,0xb59b,0xb349,
0xb0f7,0xaea6,0xac54,0xaa02,0xa7b1,0xa55f,0xa30d,0xa0bc,
0x9e6a,0x9c18,0x99c7,0x9775,0x9523,0x92d2,0x9080,0x8e2e,
0x8bdd,0x898b,0x8739,0x84e8,0x8296,0x8044,0x7df3,0x7ba1,
0x794f,0x76fe,0x74ac,0x725a,0x7009,0x6db7,0x6b65,0x6914,
0x66c2,0x6470,0x621f,0x5fcd,0x5d7b,0x5b2a,0x58d8,0x5686,
0x5435,0x51e3,0x4f91,0x4d40,0x4aee,0x489c,0x464b,0x43f9,
0x41a7,0x3f56,0x3d04,0x3ab2,0x3861,0x360f,0x33bd,0x316c,
0x2f1a,0x2cc8,0x2a77,0x2825,0x25d3,0x2382,0x2130,0x1ede,
0x1c8d,0x1a3b,0x17e9,0x1597,0x1346,0x10f4,0x0ea2,0x0c51,
0x07ae,0x0857,0x0901,0x09aa,0x0a54,0x0afe,0x0ba7,0x0c51,
0x0cfa,0x0da4,0x0e4e,0x0ef7,0x0fa1,0x104a,0x10f4,0x119e,
0x1247,0x12f1,0x139b,0x1444,0x14ee,0x1597,0x1641,0x16eb,
0x1794,0x183e,0x18e7,0x1991,0x1a3b,0x1ae4,0x1b8e,0x1c37,
0x1ce1,0x1d8b,0x1e34,0x1ede,0x1f88,0x2031,0x20db,0x2184,
0x222e,0x22d8,0x2381,0x242b,0x24d4,0x257e,0x2628,0x26d1,
0x277b,0x2824,0x28ce,0x2978,0x2a21,0x2acb,0x2b75,0x2c1e,
0x2cc8,0x2d71,0x2e1b,0x2ec5,0x2f6e,0x3018,0x30c1,0x316b,
0x3215,0x32be,0x3368,0x3411,0x34bb,0x3565,0x360e,0x36b8,
0x3762,0x380b,0x38b5,0x395e,0x3a08,0x3ab2,0x3b5b,0x3c05,
0x3cae,0x3d58,0x3e02,0x3eab,0x3f55,0x3ffe,0x3ffd,0x3fff,};

