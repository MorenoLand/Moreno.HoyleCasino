; FUN_00688940  00688940
00688940  PUSH EBP
00688941  MOV EBP,ESP
00688943  SUB ESP,0xc4
00688949  MOV dword ptr [EBP + 0xffffff40],0x40010005
00688953  MOV dword ptr [EBP + 0xffffff44],0x6e554c
0068895d  MOV dword ptr [EBP + 0xffffff48],0x40010008
00688967  MOV dword ptr [EBP + 0xffffff4c],0x6e553c
00688971  MOV dword ptr [EBP + 0xffffff50],0x80000002
0068897b  MOV dword ptr [EBP + 0xffffff54],0x6e5524
00688985  MOV dword ptr [EBP + 0xffffff58],0x80000003
0068898f  MOV dword ptr [EBP + 0xffffff5c],0x6e5514
00688999  MOV dword ptr [EBP + 0xffffff60],0xc0000005
006889a3  MOV dword ptr [EBP + 0xffffff64],0x6e5500
006889ad  MOV dword ptr [EBP + 0xffffff68],0xc0000006
006889b7  MOV dword ptr [EBP + 0xffffff6c],0x6e54ec
006889c1  MOV dword ptr [EBP + 0xffffff70],0xc0000017
006889cb  MOV dword ptr [EBP + 0xffffff74],0x6e54e0
006889d5  MOV dword ptr [EBP + 0xffffff78],0xc000001d
006889df  MOV dword ptr [EBP + 0xffffff7c],0x6e54c8
006889e9  MOV dword ptr [EBP + -0x80],0xc0000025
006889f0  MOV dword ptr [EBP + -0x7c],0x6e54ac
006889f7  MOV dword ptr [EBP + -0x78],0xc0000026
006889fe  MOV dword ptr [EBP + -0x74],0x6e5494
00688a05  MOV dword ptr [EBP + -0x70],0xc000008c
00688a0c  MOV dword ptr [EBP + -0x6c],0x6e547c
00688a13  MOV dword ptr [EBP + -0x68],0xc000008d
00688a1a  MOV dword ptr [EBP + -0x64],0x6e5460
00688a21  MOV dword ptr [EBP + -0x60],0xc000008e
00688a28  MOV dword ptr [EBP + -0x5c],0x6e5448
00688a2f  MOV dword ptr [EBP + -0x58],0xc000008f
00688a36  MOV dword ptr [EBP + -0x54],0x6e5430
00688a3d  MOV dword ptr [EBP + -0x50],0xc0000090
00688a44  MOV dword ptr [EBP + -0x4c],0x6e5414
00688a4b  MOV dword ptr [EBP + -0x48],0xc0000091
00688a52  MOV dword ptr [EBP + -0x44],0x6e5400
00688a59  MOV dword ptr [EBP + -0x40],0xc0000092
00688a60  MOV dword ptr [EBP + -0x3c],0x6e53ec
00688a67  MOV dword ptr [EBP + -0x38],0xc0000093
00688a6e  MOV dword ptr [EBP + -0x34],0x6e53d8
00688a75  MOV dword ptr [EBP + -0x30],0xc0000094
00688a7c  MOV dword ptr [EBP + -0x2c],0x6e53bc
00688a83  MOV dword ptr [EBP + -0x28],0xc0000095
00688a8a  MOV dword ptr [EBP + -0x24],0x6e53a8
00688a91  MOV dword ptr [EBP + -0x20],0xc0000096
00688a98  MOV dword ptr [EBP + -0x1c],0x6e538c
00688a9f  MOV dword ptr [EBP + -0x18],0xc00000fd
00688aa6  MOV dword ptr [EBP + -0x14],0x6e5378
00688aad  MOV dword ptr [EBP + -0x10],0xc0000142
00688ab4  MOV dword ptr [EBP + -0xc],0x6e535c
00688abb  MOV dword ptr [EBP + -0x8],0xe06d7363
00688ac2  MOV dword ptr [EBP + -0x4],0x6e5340
00688ac9  MOV dword ptr [EBP + 0xffffff3c],0x0
00688ad3  JMP 0x00688ae4
00688ad5  MOV EAX,dword ptr [EBP + 0xffffff3c]
00688adb  ADD EAX,0x1
00688ade  MOV dword ptr [EBP + 0xffffff3c],EAX
00688ae4  CMP dword ptr [EBP + 0xffffff3c],0x18
00688aeb  JNC 0x00688b10
00688aed  MOV ECX,dword ptr [EBP + 0xffffff3c]
00688af3  MOV EDX,dword ptr [EBP + 0x8]
00688af6  CMP EDX,dword ptr [EBP + ECX*0x8 + 0xffffff40]
00688afd  JNZ 0x00688b0e
00688aff  MOV EAX,dword ptr [EBP + 0xffffff3c]
00688b05  MOV EAX,dword ptr [EBP + EAX*0x8 + 0xffffff44]
00688b0c  JMP 0x00688b15
00688b0e  JMP 0x00688ad5
00688b10  MOV EAX,0x6e5328
00688b15  MOV ESP,EBP
00688b17  POP EBP
00688b18  RET
