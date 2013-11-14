//--------------------------------------------------------------
// 2byte ���� 16x16
// by bluesky22c 2011.11.18
//--------------------------------------------------------------

const unsigned char NUM1_fontTable[]={
 // 0 [��] 0xa3b0 ------------------------
 0x03,0xc0,  // ......QQQQ......
 0x0e,0x70,  // ....QQQ..QQQ....
 0x1c,0x38,  // ...QQQ....QQQ...
 0x1c,0x38,  // ...QQQ....QQQ...
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x1c,0x38,  // ...QQQ....QQQ...
 0x1c,0x38,  // ...QQQ....QQQ...
 0x0e,0x70,  // ....QQQ..QQQ....
 0x03,0xc0,  // ......QQQQ......

 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x07,0x80,  // .....QQQQ.......
 0x0f,0x80,  // ....QQQQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x0f,0xe0,  // ....QQQQQQQ.....
   
	// 2 [��] 0xa3b2 ------------------------
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x1c,0x38,  // ...QQQ....QQQ...
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x30,0x1c,  // ..QQ.......QQQ..
 0x00,0x3c,  // ..........QQQQ..
 0x00,0x78,  // .........QQQQ...
 0x00,0xf0,  // ........QQQQ....
 0x01,0xc0,  // .......QQQ......
 0x03,0x80,  // ......QQQ.......
 0x07,0x00,  // .....QQQ........
 0x0e,0x00,  // ....QQQ.........
 0x1c,0x00,  // ...QQQ..........
 0x3c,0x00,  // ..QQQQ..........
 0x38,0x00,  // ..QQQ...........
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..

	// 3 [��] 0xa3b3 ------------------------
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x1c,0x38,  // ...QQQ....QQQ...
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x00,0x1c,  // ...........QQQ..
 0x00,0x38,  // ..........QQQ...
 0x00,0xf0,  // ........QQQQ....
 0x07,0xe0,  // .....QQQQQQ.....
 0x00,0x70,  // .........QQQ....
 0x00,0x38,  // ..........QQQ...
 0x00,0x1c,  // ...........QQQ..
 0x00,0x1c,  // ...........QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x3c,  // ..QQQ.....QQQQ..
 0x1c,0x78,  // ...QQQ...QQQQ...
 0x0f,0xf0,  // ....QQQQQQQQ....

	// 4 [��] 0xa3b4 ------------------------
 0x00,0xe0,  // ........QQQ.....
 0x01,0xe0,  // .......QQQQ.....
 0x01,0xe0,  // .......QQQQ.....
 0x03,0xe0,  // ......QQQQQ.....
 0x03,0xe0,  // ......QQQQQ.....
 0x06,0xe0,  // .....QQ.QQQ.....
 0x0e,0xe0,  // ....QQQ.QQQ.....
 0x0c,0xe0,  // ....QQ..QQQ.....
 0x1c,0xe0,  // ...QQQ..QQQ.....
 0x38,0xe0,  // ..QQQ...QQQ.....
 0x30,0xe0,  // ..QQ....QQQ.....
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....

	// 5 [��] 0xa3b5 ------------------------
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x38,0x00,  // ..QQQ...........
 0x38,0x00,  // ..QQQ...........
 0x38,0x00,  // ..QQQ...........
 0x38,0x00,  // ..QQQ...........
 0x38,0x00,  // ..QQQ...........
 0x3f,0xf0,  // ..QQQQQQQQQQ....
 0x38,0x78,  // ..QQQ....QQQQ...
 0x00,0x38,  // ..........QQQ...
 0x00,0x1c,  // ...........QQQ..
 0x00,0x1c,  // ...........QQQ..
 0x00,0x1c,  // ...........QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x38,  // ..QQQ.....QQQ...
 0x3c,0x70,  // ..QQQQ...QQQ....
 0x1f,0xe0,  // ...QQQQQQQQ.....

	// 6 [��] 0xa3b6 ------------------------
 0x07,0xf0,  // .....QQQQQQQ....
 0x0e,0x38,  // ....QQQ...QQQ...
 0x1c,0x1c,  // ...QQQ.....QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x00,  // ..QQQ...........
 0x38,0x00,  // ..QQQ...........
 0x3f,0xf0,  // ..QQQQQQQQQQ....
 0x3c,0x38,  // ..QQQQ....QQQ...
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x1c,0x38,  // ...QQQ....QQQ...
 0x0f,0xf0,  // ....QQQQQQQQ....

	// 7 [��] 0xa3b7 ------------------------
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x00,0x1c,  // ...........QQQ..
 0x00,0x1c,  // ...........QQQ..
 0x00,0x18,  // ...........QQ...
 0x00,0x30,  // ..........QQ....
 0x00,0x70,  // .........QQQ....
 0x00,0x60,  // .........QQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xc0,  // ........QQ......
 0x01,0xc0,  // .......QQQ......
 0x01,0x80,  // .......QQ.......
 0x01,0x80,  // .......QQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......
 0x03,0x80,  // ......QQQ.......

	// 8 [��] 0xa3b8 ------------------------
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x1c,0x38,  // ...QQQ....QQQ...
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x1c,0x38,  // ...QQQ....QQQ...
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x1c,0x38,  // ...QQQ....QQQ...
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x3c,0x3c,  // ..QQQQ....QQQQ..
 0x1c,0x38,  // ...QQQ....QQQ...
 0x0f,0xf0,  // ....QQQQQQQQ....

	// 9 [��] 0xa3b9 ------------------------
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x1c,0x38,  // ...QQQ....QQQ...
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x1c,0x3c,  // ...QQQ....QQQQ..
 0x0f,0xfc,  // ....QQQQQQQQQQ..
 0x00,0x3c,  // ..........QQQQ..
 0x00,0x1c,  // ...........QQQ..
 0x00,0x1c,  // ...........QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x1c,0x38,  // ...QQQ....QQQ...
 0x0f,0xf0,  // ....QQQQQQQQ....

   0xff
};

const unsigned char NUM2_fontTable[]={
 // 0 [��] 0xa3b0 ------------------------
 0x00,0x00,  // ................
 0x07,0xe0,  // .....QQQQQQ.....
 0x1f,0xf8,  // ...QQQQQQQQQQ...
 0x3c,0x3c,  // ..QQQQ....QQQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x38,0x1c,  // ..QQQ......QQQ..
 0x3c,0x3c,  // ..QQQQ....QQQQ..
 0x1f,0xf8,  // ...QQQQQQQQQQ...
 0x07,0xe0,  // .....QQQQQQ.....
 0x00,0x00,  // ................


 	// 1 [��] 0xa3b1 ------------------------
 0x00,0x00,  // ................
 0x00,0xe0,  // ........QQQ.....
 0x01,0xe0,  // .......QQQQ.....
 0x0f,0xe0,  // ....QQQQQQQ.....
 0x0f,0xe0,  // ....QQQQQQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0xe0,  // ........QQQ.....
 0x00,0x00,  // ................
   
	// 2 [��] 0xa3b2 ------------------------
 0x00,0x00,  // ................
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x78,0x1e,  // .QQQQ......QQQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x00,0x3e,  // ..........QQQQQ.
 0x00,0xf8,  // ........QQQQQ...
 0x01,0xf0,  // .......QQQQQ....
 0x03,0xe0,  // ......QQQQQ.....
 0x07,0xc0,  // .....QQQQQ......
 0x1f,0x00,  // ...QQQQQ........
 0x3e,0x00,  // ..QQQQQ.........
 0x7f,0xfe,  // .QQQQQQQQQQQQQQ.
 0x7f,0xfe,  // .QQQQQQQQQQQQQQ.
 0x00,0x00,  // ................


	// 3 [��] 0xa3b3 ------------------------
 0x00,0x00,  // ................
 0x1f,0xf0,  // ...QQQQQQQQQ....
 0x3f,0xf8,  // ..QQQQQQQQQQQ...
 0x78,0x1c,  // .QQQQ......QQQ..
 0x70,0x1c,  // .QQQ.......QQQ..
 0x00,0x1c,  // ...........QQQ..
 0x00,0x38,  // ..........QQQ...
 0x07,0xf8,  // .....QQQQQQQQ...
 0x07,0xfc,  // .....QQQQQQQQQ..
 0x00,0x1e,  // ...........QQQQ.
 0x00,0x0e,  // ............QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x78,0x1e,  // .QQQQ......QQQQ.
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x1f,0xf8,  // ...QQQQQQQQQQ...
 0x00,0x00,  // ................

	// 4 [��] 0xa3b4 ------------------------
 0x00,0x00,  // ................
 0x00,0xf8,  // ........QQQQQ...
 0x01,0xf8,  // .......QQQQQQ...
 0x03,0xf8,  // ......QQQQQQQ...
 0x07,0xb8,  // .....QQQQ.QQQ...
 0x0f,0x38,  // ....QQQQ..QQQ...
 0x1e,0x38,  // ...QQQQ...QQQ...
 0x3c,0x38,  // ..QQQQ....QQQ...
 0x78,0x38,  // .QQQQ.....QQQ...
 0x70,0x38,  // .QQQ......QQQ...
 0x7f,0xfe,  // .QQQQQQQQQQQQQQ.
 0x7f,0xfe,  // .QQQQQQQQQQQQQQ.
 0x00,0x38,  // ..........QQQ...
 0x00,0x38,  // ..........QQQ...
 0x00,0x38,  // ..........QQQ...
 0x00,0x00,  // ................

	// 5 [��] 0xa3b5 ------------------------
 0x00,0x00,  // ................
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x38,0x00,  // ..QQQ...........
 0x38,0x00,  // ..QQQ...........
 0x70,0x00,  // .QQQ............
 0x7f,0xe0,  // .QQQQQQQQQQ.....
 0x7f,0xf8,  // .QQQQQQQQQQQQ...
 0x78,0x1c,  // .QQQQ......QQQ..
 0x00,0x0e,  // ............QQQ.
 0x00,0x0e,  // ............QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x78,0x3c,  // .QQQQ.....QQQQ..
 0x3f,0xf8,  // ..QQQQQQQQQQQ...
 0x1f,0xe0,  // ...QQQQQQQQ.....
 0x00,0x00,  // ................

	// 6 [��] 0xa3b6 ------------------------
 0x00,0x00,  // ................
 0x07,0xf0,  // .....QQQQQQQ....
 0x1f,0xfc,  // ...QQQQQQQQQQQ..
 0x3c,0x1e,  // ..QQQQ.....QQQQ.
 0x78,0x0e,  // .QQQQ.......QQQ.
 0x70,0x00,  // .QQQ............
 0x7f,0xf0,  // .QQQQQQQQQQQ....
 0x7f,0xfc,  // .QQQQQQQQQQQQQ..
 0x78,0x1c,  // .QQQQ......QQQ..
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x38,0x1c,  // ..QQQ......QQQ..
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x00,0x00,  // ................

	// 7 [��] 0xa3b7 ------------------------
 0x00,0x00,  // ................
 0x7f,0xfe,  // .QQQQQQQQQQQQQQ.
 0x7f,0xfe,  // .QQQQQQQQQQQQQQ.
 0x00,0x1e,  // ...........QQQQ.
 0x00,0x1e,  // ...........QQQQ.
 0x00,0x3c,  // ..........QQQQ..
 0x00,0x3c,  // ..........QQQQ..
 0x00,0x78,  // .........QQQQ...
 0x00,0x78,  // .........QQQQ...
 0x00,0xf0,  // ........QQQQ....
 0x00,0xf0,  // ........QQQQ....
 0x01,0xe0,  // .......QQQQ.....
 0x01,0xe0,  // .......QQQQ.....
 0x03,0xc0,  // ......QQQQ......
 0x03,0xc0,  // ......QQQQ......
 0x00,0x00,  // ................

	// 8 [��] 0xa3b8 ------------------------
 0x00,0x00,  // ................
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x1f,0xf8,  // ...QQQQQQQQQQ...
 0x3c,0x3c,  // ..QQQQ....QQQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x1c,0x38,  // ...QQQ....QQQ...
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x1f,0xf8,  // ...QQQQQQQQQQ...
 0x38,0x1c,  // ..QQQ......QQQ..
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x78,0x1e,  // .QQQQ......QQQQ.
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x00,0x00,  // ................

	// 9 [��] 0xa3b9 ------------------------
 0x00,0x00,  // ................
 0x0f,0xf0,  // ....QQQQQQQQ....
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x38,0x1c,  // ..QQQ......QQQ..
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x38,0x1e,  // ..QQQ......QQQQ.
 0x3f,0xfe,  // ..QQQQQQQQQQQQQ.
 0x07,0xee,  // .....QQQQQQ.QQQ.
 0x00,0x0e,  // ............QQQ.
 0x70,0x0e,  // .QQQ........QQQ.
 0x78,0x1e,  // .QQQQ......QQQQ.
 0x3f,0xfc,  // ..QQQQQQQQQQQQ..
 0x1f,0xf0,  // ...QQQQQQQQQ....
 0x00,0x00,  // ................



   0xff
};
