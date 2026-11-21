; FUN_00402da0  00402da0
00402da0  PUSH EBP
00402da1  MOV EBP,ESP
00402da3  SUB ESP,0xc
00402da6  MOV dword ptr [EBP + -0x8],ECX
00402da9  MOV dword ptr [EBP + -0x4],0x0
00402db0  MOV EAX,dword ptr [EBP + 0x10]
00402db3  MOV dword ptr [EBP + -0xc],EAX
00402db6  CMP dword ptr [EBP + -0xc],0x9
00402dba  JA 0x00402def
00402dbc  MOV ECX,dword ptr [EBP + -0xc]
00402dbf  MOVZX EDX,byte ptr [ECX + 0x402e90]
00402dc6  JMP dword ptr [EDX*0x4 + 0x402e7c]
00402dcd  MOV dword ptr [EBP + -0x4],0x0
00402dd4  JMP 0x00402def
00402dd6  MOV dword ptr [EBP + -0x4],0x1
00402ddd  JMP 0x00402def
00402ddf  MOV dword ptr [EBP + -0x4],0x0
00402de6  JMP 0x00402def
00402de8  MOV dword ptr [EBP + -0x4],0x3
00402def  MOV EAX,dword ptr [EBP + -0x4]
00402df2  PUSH EAX
00402df3  MOV ECX,dword ptr [EBP + -0x8]
00402df6  MOV EDX,dword ptr [ECX + 0xae4]
00402dfc  MOV EAX,dword ptr [EBP + -0x8]
00402dff  MOV ECX,dword ptr [EAX + 0xae4]
00402e05  MOV EDX,dword ptr [EDX]
00402e07  MOV EAX,dword ptr [EDX + 0xb0]
00402e0d  CALL EAX
00402e0f  MOV ECX,dword ptr [EBP + 0xc]
00402e12  PUSH ECX
00402e13  MOV EDX,dword ptr [EBP + 0x8]
00402e16  PUSH EDX
00402e17  MOV EAX,dword ptr [EBP + -0x8]
00402e1a  MOV EDX,dword ptr [EAX]
00402e1c  MOV ECX,dword ptr [EBP + -0x8]
00402e1f  MOV EAX,dword ptr [EDX + 0xd8]
00402e25  CALL EAX
00402e27  PUSH EAX
00402e28  MOV ECX,dword ptr [EBP + 0xc]
00402e2b  PUSH ECX
00402e2c  MOV EDX,dword ptr [EBP + 0x8]
00402e2f  PUSH EDX
00402e30  MOV EAX,dword ptr [EBP + -0x8]
00402e33  MOV EDX,dword ptr [EAX]
00402e35  MOV ECX,dword ptr [EBP + -0x8]
00402e38  MOV EAX,dword ptr [EDX + 0xd4]
00402e3e  CALL EAX
00402e40  PUSH EAX
00402e41  MOV ECX,dword ptr [EBP + -0x8]
00402e44  MOV EDX,dword ptr [ECX + 0xae4]
00402e4a  MOV EAX,dword ptr [EBP + -0x8]
00402e4d  MOV ECX,dword ptr [EAX + 0xae4]
00402e53  MOV EDX,dword ptr [EDX]
00402e55  MOV EAX,dword ptr [EDX + 0x44]
00402e58  CALL EAX
00402e5a  MOV ECX,dword ptr [EBP + -0x8]
00402e5d  MOV EDX,dword ptr [ECX + 0xae4]
00402e63  MOV EAX,dword ptr [EBP + -0x8]
00402e66  MOV ECX,dword ptr [EAX + 0xae4]
00402e6c  MOV EDX,dword ptr [EDX]
00402e6e  MOV EAX,dword ptr [EDX + 0x74]
00402e71  CALL EAX
00402e73  MOV ESP,EBP
00402e75  POP EBP
00402e76  RET 0xc
