; FUN_00417970  00417970
00417970  PUSH EBP
00417971  MOV EBP,ESP
00417973  SUB ESP,0xc
00417976  MOV dword ptr [EBP + -0xc],ECX
00417979  PUSH -0x1
0041797b  MOV ECX,dword ptr [0x007947e0]
00417981  CALL 0x005de600
00417986  MOV ECX,EAX
00417988  CALL 0x0063aae0
0041798d  MOV dword ptr [EBP + -0x4],EAX
00417990  MOV EAX,dword ptr [EBP + 0x8]
00417993  MOV dword ptr [EBP + -0x8],EAX
00417996  CMP dword ptr [EBP + 0x8],0x0
0041799a  JZ 0x004179a2
0041799c  CMP dword ptr [EBP + -0x4],0x0
004179a0  JNZ 0x004179a9
004179a2  XOR AL,AL
004179a4  JMP 0x00417a51
004179a9  MOV ECX,dword ptr [EBP + -0x4]
004179ac  MOV EDX,dword ptr [EBP + -0x8]
004179af  MOV AL,byte ptr [EDX]
004179b1  MOV byte ptr [ECX],AL
004179b3  MOV ECX,dword ptr [EBP + -0x4]
004179b6  MOV EDX,dword ptr [EBP + -0x8]
004179b9  MOV AL,byte ptr [EDX + 0x1]
004179bc  MOV byte ptr [ECX + 0x1],AL
004179bf  MOV ECX,dword ptr [EBP + -0x4]
004179c2  MOV EDX,dword ptr [EBP + -0x8]
004179c5  MOV AL,byte ptr [EDX + 0x2]
004179c8  MOV byte ptr [ECX + 0x2],AL
004179cb  MOV ECX,dword ptr [EBP + -0x4]
004179ce  MOV EDX,dword ptr [EBP + -0x8]
004179d1  MOV AL,byte ptr [EDX + 0x3]
004179d4  MOV byte ptr [ECX + 0x3],AL
004179d7  MOV ECX,dword ptr [EBP + -0x4]
004179da  MOV EDX,dword ptr [EBP + -0x8]
004179dd  MOV AL,byte ptr [EDX + 0x4]
004179e0  MOV byte ptr [ECX + 0x4],AL
004179e3  MOV ECX,dword ptr [EBP + -0x4]
004179e6  MOV EDX,dword ptr [EBP + -0x8]
004179e9  MOV AL,byte ptr [EDX + 0x5]
004179ec  MOV byte ptr [ECX + 0x5],AL
004179ef  MOV ECX,dword ptr [EBP + -0x4]
004179f2  MOV EDX,dword ptr [EBP + -0x8]
004179f5  MOV AL,byte ptr [EDX + 0x6]
004179f8  MOV byte ptr [ECX + 0x6],AL
004179fb  MOV ECX,dword ptr [EBP + -0x4]
004179fe  MOV EDX,dword ptr [EBP + -0x8]
00417a01  MOV AL,byte ptr [EDX + 0x7]
00417a04  MOV byte ptr [ECX + 0x7],AL
00417a07  MOV ECX,dword ptr [EBP + -0x4]
00417a0a  MOV EDX,dword ptr [EBP + -0x8]
00417a0d  MOV AL,byte ptr [EDX + 0x8]
00417a10  MOV byte ptr [ECX + 0x8],AL
00417a13  MOV ECX,dword ptr [EBP + -0x4]
00417a16  MOV EDX,dword ptr [EBP + -0x8]
00417a19  MOV AL,byte ptr [EDX + 0x9]
00417a1c  MOV byte ptr [ECX + 0x9],AL
00417a1f  MOV ECX,dword ptr [EBP + -0x4]
00417a22  MOV EDX,dword ptr [EBP + -0x8]
00417a25  MOV AL,byte ptr [EDX + 0xa]
00417a28  MOV byte ptr [ECX + 0xa],AL
00417a2b  MOV ECX,dword ptr [EBP + -0x4]
00417a2e  MOV EDX,dword ptr [EBP + -0x8]
00417a31  MOV AL,byte ptr [EDX + 0xb]
00417a34  MOV byte ptr [ECX + 0xb],AL
00417a37  MOV ECX,dword ptr [EBP + -0x4]
00417a3a  MOV EDX,dword ptr [EBP + -0x8]
00417a3d  MOV AL,byte ptr [EDX + 0xc]
00417a40  MOV byte ptr [ECX + 0xc],AL
00417a43  MOV ECX,dword ptr [EBP + -0x4]
00417a46  MOV EDX,dword ptr [EBP + -0x8]
00417a49  MOV AL,byte ptr [EDX + 0xd]
00417a4c  MOV byte ptr [ECX + 0xd],AL
00417a4f  MOV AL,0x1
00417a51  MOV ESP,EBP
00417a53  POP EBP
00417a54  RET 0x4
