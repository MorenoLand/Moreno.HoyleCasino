; FUN_00651950  00651950
00651950  PUSH EBP
00651951  MOV EBP,ESP
00651953  SUB ESP,0x50
00651956  MOV dword ptr [EBP + -0x38],ECX
00651959  MOV EAX,dword ptr [EBP + -0x38]
0065195c  MOV ECX,dword ptr [EAX + 0xc]
0065195f  PUSH ECX
00651960  MOV EDX,dword ptr [EBP + -0x38]
00651963  MOV ECX,dword ptr [EDX]
00651965  CALL 0x005f1ad0
0065196a  MOV EAX,dword ptr [EBP + -0x38]
0065196d  MOV ECX,dword ptr [EAX + 0x18]
00651970  MOV dword ptr [EBP + -0xc],ECX
00651973  MOV EDX,dword ptr [EBP + -0xc]
00651976  MOV dword ptr [EBP + -0x8],EDX
00651979  CMP dword ptr [EBP + -0x8],0x0
0065197d  JZ 0x00651992
0065197f  PUSH 0x1
00651981  MOV EAX,dword ptr [EBP + -0x8]
00651984  MOV EDX,dword ptr [EAX]
00651986  MOV ECX,dword ptr [EBP + -0x8]
00651989  MOV EAX,dword ptr [EDX]
0065198b  CALL EAX
0065198d  MOV dword ptr [EBP + -0x3c],EAX
00651990  JMP 0x00651999
00651992  MOV dword ptr [EBP + -0x3c],0x0
00651999  MOV ECX,dword ptr [EBP + -0x38]
0065199c  MOV EDX,dword ptr [ECX + 0x1c]
0065199f  MOV dword ptr [EBP + -0x14],EDX
006519a2  MOV EAX,dword ptr [EBP + -0x14]
006519a5  MOV dword ptr [EBP + -0x10],EAX
006519a8  CMP dword ptr [EBP + -0x10],0x0
006519ac  JZ 0x006519c1
006519ae  PUSH 0x1
006519b0  MOV ECX,dword ptr [EBP + -0x10]
006519b3  MOV EDX,dword ptr [ECX]
006519b5  MOV ECX,dword ptr [EBP + -0x10]
006519b8  MOV EAX,dword ptr [EDX]
006519ba  CALL EAX
006519bc  MOV dword ptr [EBP + -0x40],EAX
006519bf  JMP 0x006519c8
006519c1  MOV dword ptr [EBP + -0x40],0x0
006519c8  MOV dword ptr [EBP + -0x4],0x0
006519cf  JMP 0x006519da
006519d1  MOV ECX,dword ptr [EBP + -0x4]
006519d4  ADD ECX,0x1
006519d7  MOV dword ptr [EBP + -0x4],ECX
006519da  CMP dword ptr [EBP + -0x4],0x6
006519de  JGE 0x00651a15
006519e0  MOV EDX,dword ptr [EBP + -0x4]
006519e3  MOV EAX,dword ptr [EBP + -0x38]
006519e6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x20]
006519ea  MOV dword ptr [EBP + -0x1c],ECX
006519ed  MOV EDX,dword ptr [EBP + -0x1c]
006519f0  MOV dword ptr [EBP + -0x18],EDX
006519f3  CMP dword ptr [EBP + -0x18],0x0
006519f7  JZ 0x00651a0c
006519f9  PUSH 0x1
006519fb  MOV EAX,dword ptr [EBP + -0x18]
006519fe  MOV EDX,dword ptr [EAX]
00651a00  MOV ECX,dword ptr [EBP + -0x18]
00651a03  MOV EAX,dword ptr [EDX]
00651a05  CALL EAX
00651a07  MOV dword ptr [EBP + -0x44],EAX
00651a0a  JMP 0x00651a13
00651a0c  MOV dword ptr [EBP + -0x44],0x0
00651a13  JMP 0x006519d1
00651a15  MOV dword ptr [EBP + -0x4],0x0
00651a1c  JMP 0x00651a27
00651a1e  MOV ECX,dword ptr [EBP + -0x4]
00651a21  ADD ECX,0x1
00651a24  MOV dword ptr [EBP + -0x4],ECX
00651a27  CMP dword ptr [EBP + -0x4],0x4
00651a2b  JGE 0x00651a95
00651a2d  MOV EDX,dword ptr [EBP + -0x4]
00651a30  MOV EAX,dword ptr [EBP + -0x38]
00651a33  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x38]
00651a37  MOV dword ptr [EBP + -0x24],ECX
00651a3a  MOV EDX,dword ptr [EBP + -0x24]
00651a3d  MOV dword ptr [EBP + -0x20],EDX
00651a40  CMP dword ptr [EBP + -0x20],0x0
00651a44  JZ 0x00651a59
00651a46  PUSH 0x1
00651a48  MOV EAX,dword ptr [EBP + -0x20]
00651a4b  MOV EDX,dword ptr [EAX]
00651a4d  MOV ECX,dword ptr [EBP + -0x20]
00651a50  MOV EAX,dword ptr [EDX]
00651a52  CALL EAX
00651a54  MOV dword ptr [EBP + -0x48],EAX
00651a57  JMP 0x00651a60
00651a59  MOV dword ptr [EBP + -0x48],0x0
00651a60  MOV ECX,dword ptr [EBP + -0x4]
00651a63  MOV EDX,dword ptr [EBP + -0x38]
00651a66  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
00651a6a  MOV dword ptr [EBP + -0x2c],EAX
00651a6d  MOV ECX,dword ptr [EBP + -0x2c]
00651a70  MOV dword ptr [EBP + -0x28],ECX
00651a73  CMP dword ptr [EBP + -0x28],0x0
00651a77  JZ 0x00651a8c
00651a79  PUSH 0x1
00651a7b  MOV EDX,dword ptr [EBP + -0x28]
00651a7e  MOV EAX,dword ptr [EDX]
00651a80  MOV ECX,dword ptr [EBP + -0x28]
00651a83  MOV EDX,dword ptr [EAX]
00651a85  CALL EDX
00651a87  MOV dword ptr [EBP + -0x4c],EAX
00651a8a  JMP 0x00651a93
00651a8c  MOV dword ptr [EBP + -0x4c],0x0
00651a93  JMP 0x00651a1e
00651a95  MOV dword ptr [EBP + -0x4],0x0
00651a9c  JMP 0x00651aa7
00651a9e  MOV EAX,dword ptr [EBP + -0x4]
00651aa1  ADD EAX,0x1
00651aa4  MOV dword ptr [EBP + -0x4],EAX
00651aa7  CMP dword ptr [EBP + -0x4],0xa
00651aab  JGE 0x00651ae2
00651aad  MOV ECX,dword ptr [EBP + -0x4]
00651ab0  MOV EDX,dword ptr [EBP + -0x38]
00651ab3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x58]
00651ab7  MOV dword ptr [EBP + -0x34],EAX
00651aba  MOV ECX,dword ptr [EBP + -0x34]
00651abd  MOV dword ptr [EBP + -0x30],ECX
00651ac0  CMP dword ptr [EBP + -0x30],0x0
00651ac4  JZ 0x00651ad9
00651ac6  PUSH 0x1
00651ac8  MOV EDX,dword ptr [EBP + -0x30]
00651acb  MOV EAX,dword ptr [EDX]
00651acd  MOV ECX,dword ptr [EBP + -0x30]
00651ad0  MOV EDX,dword ptr [EAX]
00651ad2  CALL EDX
00651ad4  MOV dword ptr [EBP + -0x50],EAX
00651ad7  JMP 0x00651ae0
00651ad9  MOV dword ptr [EBP + -0x50],0x0
00651ae0  JMP 0x00651a9e
00651ae2  MOV ESP,EBP
00651ae4  POP EBP
00651ae5  RET
