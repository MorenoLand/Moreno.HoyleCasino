; FUN_00678900  00678900
00678900  PUSH EBP
00678901  MOV EBP,ESP
00678903  SUB ESP,0x8
00678906  MOV dword ptr [EBP + -0x8],ECX
00678909  MOV ECX,dword ptr [EBP + -0x8]
0067890c  CALL 0x005f5f50
00678911  MOV EAX,dword ptr [EBP + -0x8]
00678914  MOV dword ptr [EAX],0x6e1fe4
0067891a  MOV ECX,dword ptr [EBP + -0x8]
0067891d  MOV dword ptr [ECX + 0x194],0x0
00678927  MOV EDX,dword ptr [EBP + -0x8]
0067892a  MOV byte ptr [EDX + 0x2ac],0x0
00678931  MOV dword ptr [EBP + -0x4],0x0
00678938  JMP 0x00678943
0067893a  MOV EAX,dword ptr [EBP + -0x4]
0067893d  ADD EAX,0x1
00678940  MOV dword ptr [EBP + -0x4],EAX
00678943  CMP dword ptr [EBP + -0x4],0xc
00678947  JGE 0x0067896d
00678949  MOV ECX,dword ptr [EBP + -0x4]
0067894c  MOV EDX,dword ptr [EBP + -0x8]
0067894f  MOV dword ptr [EDX + ECX*0x4 + 0x198],0x0
0067895a  MOV EAX,dword ptr [EBP + -0x4]
0067895d  MOV ECX,dword ptr [EBP + -0x8]
00678960  MOV dword ptr [ECX + EAX*0x4 + 0x1c8],0x0
0067896b  JMP 0x0067893a
0067896d  MOV dword ptr [EBP + -0x4],0x0
00678974  JMP 0x0067897f
00678976  MOV EDX,dword ptr [EBP + -0x4]
00678979  ADD EDX,0x1
0067897c  MOV dword ptr [EBP + -0x4],EDX
0067897f  CMP dword ptr [EBP + -0x4],0x3
00678983  JGE 0x00678998
00678985  MOV EAX,dword ptr [EBP + -0x4]
00678988  MOV ECX,dword ptr [EBP + -0x8]
0067898b  MOV dword ptr [ECX + EAX*0x4 + 0x1f8],0x0
00678996  JMP 0x00678976
00678998  MOV dword ptr [EBP + -0x4],0x0
0067899f  JMP 0x006789aa
006789a1  MOV EDX,dword ptr [EBP + -0x4]
006789a4  ADD EDX,0x1
006789a7  MOV dword ptr [EBP + -0x4],EDX
006789aa  CMP dword ptr [EBP + -0x4],0x4
006789ae  JGE 0x006789e5
006789b0  MOV EAX,dword ptr [EBP + -0x4]
006789b3  MOV ECX,dword ptr [EBP + -0x8]
006789b6  MOV dword ptr [ECX + EAX*0x4 + 0x20c],0x0
006789c1  MOV EDX,dword ptr [EBP + -0x4]
006789c4  MOV EAX,dword ptr [EBP + -0x8]
006789c7  MOV dword ptr [EAX + EDX*0x4 + 0x21c],0x0
006789d2  MOV ECX,dword ptr [EBP + -0x4]
006789d5  MOV EDX,dword ptr [EBP + -0x8]
006789d8  MOV dword ptr [EDX + ECX*0x4 + 0x25c],0x0
006789e3  JMP 0x006789a1
006789e5  MOV dword ptr [EBP + -0x4],0x0
006789ec  JMP 0x006789f7
006789ee  MOV EAX,dword ptr [EBP + -0x4]
006789f1  ADD EAX,0x1
006789f4  MOV dword ptr [EBP + -0x4],EAX
006789f7  CMP dword ptr [EBP + -0x4],0x5
006789fb  JGE 0x00678a10
006789fd  MOV ECX,dword ptr [EBP + -0x4]
00678a00  MOV EDX,dword ptr [EBP + -0x8]
00678a03  MOV dword ptr [EDX + ECX*0x4 + 0x248],0x0
00678a0e  JMP 0x006789ee
00678a10  MOV EAX,dword ptr [EBP + -0x8]
00678a13  MOV dword ptr [EAX + 0x298],0x0
00678a1d  MOV ECX,dword ptr [EBP + -0x8]
00678a20  MOV dword ptr [ECX + 0x190],0x0
00678a2a  MOV EDX,dword ptr [EBP + -0x8]
00678a2d  MOV dword ptr [EDX + 0x2a4],0xffffffff
00678a37  MOV EAX,dword ptr [EBP + -0x8]
00678a3a  MOV dword ptr [EAX + 0x208],0x0
00678a44  MOV ECX,dword ptr [EBP + -0x8]
00678a47  MOV dword ptr [ECX + 0x204],0x0
00678a51  MOV EDX,dword ptr [EBP + -0x8]
00678a54  MOV dword ptr [EDX + 0x22c],0x0
00678a5e  MOV EAX,dword ptr [EBP + -0x8]
00678a61  MOV dword ptr [EAX + 0x230],0x0
00678a6b  MOV ECX,dword ptr [EBP + -0x8]
00678a6e  MOV dword ptr [ECX + 0x240],0x0
00678a78  MOV dword ptr [EBP + -0x4],0x0
00678a7f  JMP 0x00678a8a
00678a81  MOV EDX,dword ptr [EBP + -0x4]
00678a84  ADD EDX,0x1
00678a87  MOV dword ptr [EBP + -0x4],EDX
00678a8a  CMP dword ptr [EBP + -0x4],0x3
00678a8e  JGE 0x00678aa3
00678a90  MOV EAX,dword ptr [EBP + -0x4]
00678a93  MOV ECX,dword ptr [EBP + -0x8]
00678a96  MOV dword ptr [ECX + EAX*0x4 + 0x234],0x0
00678aa1  JMP 0x00678a81
00678aa3  MOV EDX,dword ptr [EBP + -0x8]
00678aa6  MOV dword ptr [EDX + 0x244],0x0
00678ab0  MOV EAX,dword ptr [EBP + -0x8]
00678ab3  MOV dword ptr [EAX + 0x26c],0x0
00678abd  MOV ECX,dword ptr [EBP + -0x8]
00678ac0  MOV dword ptr [ECX + 0x270],0x0
00678aca  MOV dword ptr [EBP + -0x4],0x0
00678ad1  JMP 0x00678adc
00678ad3  MOV EDX,dword ptr [EBP + -0x4]
00678ad6  ADD EDX,0x1
00678ad9  MOV dword ptr [EBP + -0x4],EDX
00678adc  CMP dword ptr [EBP + -0x4],0x3
00678ae0  JGE 0x00678af5
00678ae2  MOV EAX,dword ptr [EBP + -0x4]
00678ae5  MOV ECX,dword ptr [EBP + -0x8]
00678ae8  MOV dword ptr [ECX + EAX*0x4 + 0x274],0x0
00678af3  JMP 0x00678ad3
00678af5  MOV dword ptr [EBP + -0x4],0x0
00678afc  JMP 0x00678b07
00678afe  MOV EDX,dword ptr [EBP + -0x4]
00678b01  ADD EDX,0x1
00678b04  MOV dword ptr [EBP + -0x4],EDX
00678b07  CMP dword ptr [EBP + -0x4],0x2
00678b0b  JGE 0x00678b31
00678b0d  MOV EAX,dword ptr [EBP + -0x4]
00678b10  MOV ECX,dword ptr [EBP + -0x8]
00678b13  MOV dword ptr [ECX + EAX*0x4 + 0x280],0x0
00678b1e  MOV EDX,dword ptr [EBP + -0x4]
00678b21  MOV EAX,dword ptr [EBP + -0x8]
00678b24  MOV dword ptr [EAX + EDX*0x4 + 0x288],0x0
00678b2f  JMP 0x00678afe
00678b31  MOV ECX,dword ptr [EBP + -0x8]
00678b34  MOV dword ptr [ECX + 0x290],0x0
00678b3e  MOV EDX,dword ptr [EBP + -0x8]
00678b41  MOV dword ptr [EDX + 0x294],0x0
00678b4b  MOV EAX,dword ptr [EBP + -0x8]
00678b4e  MOV ESP,EBP
00678b50  POP EBP
00678b51  RET
