; FUN_00621ce0  00621ce0
00621ce0  PUSH EBP
00621ce1  MOV EBP,ESP
00621ce3  SUB ESP,0x24
00621ce6  MOV EAX,dword ptr [EBP + 0x10]
00621ce9  CMP EAX,dword ptr [EBP + 0x14]
00621cec  JGE 0x00621eb5
00621cf2  MOV ECX,dword ptr [EBP + 0x10]
00621cf5  SHL ECX,0x1
00621cf7  CMP ECX,dword ptr [EBP + 0x14]
00621cfa  JG 0x00621d11
00621cfc  MOV EDX,dword ptr [EBP + 0x10]
00621cff  PUSH EDX
00621d00  MOV EAX,dword ptr [EBP + 0xc]
00621d03  PUSH EAX
00621d04  CALL 0x00621ec0
00621d09  ADD ESP,0x8
00621d0c  MOV dword ptr [EBP + -0x1c],EAX
00621d0f  JMP 0x00621d24
00621d11  MOV ECX,dword ptr [EBP + 0x10]
00621d14  PUSH ECX
00621d15  MOV EDX,dword ptr [EBP + 0xc]
00621d18  PUSH EDX
00621d19  CALL 0x00621f30
00621d1e  ADD ESP,0x8
00621d21  MOV dword ptr [EBP + -0x1c],EAX
00621d24  CMP dword ptr [EBP + -0x1c],0x0
00621d28  JNZ 0x00621d2f
00621d2a  JMP 0x00621eb5
00621d2f  MOV EAX,dword ptr [EBP + 0x10]
00621d32  SHL EAX,0x5
00621d35  ADD EAX,dword ptr [EBP + 0xc]
00621d38  MOV dword ptr [EBP + -0x8],EAX
00621d3b  MOV ECX,dword ptr [EBP + -0x8]
00621d3e  MOV EDX,dword ptr [EBP + -0x1c]
00621d41  MOV EAX,dword ptr [EDX + 0x4]
00621d44  MOV dword ptr [ECX + 0x4],EAX
00621d47  MOV ECX,dword ptr [EBP + -0x8]
00621d4a  MOV EDX,dword ptr [EBP + -0x1c]
00621d4d  MOV EAX,dword ptr [EDX + 0xc]
00621d50  MOV dword ptr [ECX + 0xc],EAX
00621d53  MOV ECX,dword ptr [EBP + -0x8]
00621d56  MOV EDX,dword ptr [EBP + -0x1c]
00621d59  MOV EAX,dword ptr [EDX + 0x14]
00621d5c  MOV dword ptr [ECX + 0x14],EAX
00621d5f  MOV ECX,dword ptr [EBP + -0x8]
00621d62  MOV EDX,dword ptr [EBP + -0x1c]
00621d65  MOV EAX,dword ptr [EDX]
00621d67  MOV dword ptr [ECX],EAX
00621d69  MOV ECX,dword ptr [EBP + -0x8]
00621d6c  MOV EDX,dword ptr [EBP + -0x1c]
00621d6f  MOV EAX,dword ptr [EDX + 0x8]
00621d72  MOV dword ptr [ECX + 0x8],EAX
00621d75  MOV ECX,dword ptr [EBP + -0x8]
00621d78  MOV EDX,dword ptr [EBP + -0x1c]
00621d7b  MOV EAX,dword ptr [EDX + 0x10]
00621d7e  MOV dword ptr [ECX + 0x10],EAX
00621d81  MOV ECX,dword ptr [EBP + -0x1c]
00621d84  MOV EDX,dword ptr [EBP + -0x1c]
00621d87  MOV EAX,dword ptr [ECX + 0x4]
00621d8a  SUB EAX,dword ptr [EDX]
00621d8c  SHL EAX,0x2
00621d8f  IMUL EAX,EAX,0x1e
00621d92  MOV dword ptr [EBP + -0x14],EAX
00621d95  MOV ECX,dword ptr [EBP + -0x1c]
00621d98  MOV EDX,dword ptr [EBP + -0x1c]
00621d9b  MOV EAX,dword ptr [ECX + 0xc]
00621d9e  SUB EAX,dword ptr [EDX + 0x8]
00621da1  SHL EAX,0x2
00621da4  IMUL EAX,EAX,0x3b
00621da7  MOV dword ptr [EBP + -0x18],EAX
00621daa  MOV ECX,dword ptr [EBP + -0x1c]
00621dad  MOV EDX,dword ptr [EBP + -0x1c]
00621db0  MOV EAX,dword ptr [ECX + 0x14]
00621db3  SUB EAX,dword ptr [EDX + 0x10]
00621db6  SHL EAX,0x3
00621db9  IMUL EAX,EAX,0xb
00621dbc  MOV dword ptr [EBP + -0x10],EAX
00621dbf  MOV ECX,dword ptr [EBP + -0x18]
00621dc2  MOV dword ptr [EBP + -0xc],ECX
00621dc5  MOV dword ptr [EBP + -0x4],0x1
00621dcc  MOV EDX,dword ptr [EBP + -0x14]
00621dcf  CMP EDX,dword ptr [EBP + -0xc]
00621dd2  JLE 0x00621de1
00621dd4  MOV EAX,dword ptr [EBP + -0x14]
00621dd7  MOV dword ptr [EBP + -0xc],EAX
00621dda  MOV dword ptr [EBP + -0x4],0x0
00621de1  MOV ECX,dword ptr [EBP + -0x10]
00621de4  CMP ECX,dword ptr [EBP + -0xc]
00621de7  JLE 0x00621df0
00621de9  MOV dword ptr [EBP + -0x4],0x2
00621df0  MOV EDX,dword ptr [EBP + -0x4]
00621df3  MOV dword ptr [EBP + -0x24],EDX
00621df6  CMP dword ptr [EBP + -0x24],0x0
00621dfa  JZ 0x00621e0a
00621dfc  CMP dword ptr [EBP + -0x24],0x1
00621e00  JZ 0x00621e33
00621e02  CMP dword ptr [EBP + -0x24],0x2
00621e06  JZ 0x00621e5e
00621e08  JMP 0x00621e87
00621e0a  MOV EAX,dword ptr [EBP + -0x1c]
00621e0d  MOV EAX,dword ptr [EAX + 0x4]
00621e10  MOV ECX,dword ptr [EBP + -0x1c]
00621e13  ADD EAX,dword ptr [ECX]
00621e15  CDQ
00621e16  SUB EAX,EDX
00621e18  SAR EAX,0x1
00621e1a  MOV dword ptr [EBP + -0x20],EAX
00621e1d  MOV EDX,dword ptr [EBP + -0x1c]
00621e20  MOV EAX,dword ptr [EBP + -0x20]
00621e23  MOV dword ptr [EDX + 0x4],EAX
00621e26  MOV ECX,dword ptr [EBP + -0x20]
00621e29  ADD ECX,0x1
00621e2c  MOV EDX,dword ptr [EBP + -0x8]
00621e2f  MOV dword ptr [EDX],ECX
00621e31  JMP 0x00621e87
00621e33  MOV EAX,dword ptr [EBP + -0x1c]
00621e36  MOV EAX,dword ptr [EAX + 0xc]
00621e39  MOV ECX,dword ptr [EBP + -0x1c]
00621e3c  ADD EAX,dword ptr [ECX + 0x8]
00621e3f  CDQ
00621e40  SUB EAX,EDX
00621e42  SAR EAX,0x1
00621e44  MOV dword ptr [EBP + -0x20],EAX
00621e47  MOV EDX,dword ptr [EBP + -0x1c]
00621e4a  MOV EAX,dword ptr [EBP + -0x20]
00621e4d  MOV dword ptr [EDX + 0xc],EAX
00621e50  MOV ECX,dword ptr [EBP + -0x20]
00621e53  ADD ECX,0x1
00621e56  MOV EDX,dword ptr [EBP + -0x8]
00621e59  MOV dword ptr [EDX + 0x8],ECX
00621e5c  JMP 0x00621e87
00621e5e  MOV EAX,dword ptr [EBP + -0x1c]
00621e61  MOV EAX,dword ptr [EAX + 0x14]
00621e64  MOV ECX,dword ptr [EBP + -0x1c]
00621e67  ADD EAX,dword ptr [ECX + 0x10]
00621e6a  CDQ
00621e6b  SUB EAX,EDX
00621e6d  SAR EAX,0x1
00621e6f  MOV dword ptr [EBP + -0x20],EAX
00621e72  MOV EDX,dword ptr [EBP + -0x1c]
00621e75  MOV EAX,dword ptr [EBP + -0x20]
00621e78  MOV dword ptr [EDX + 0x14],EAX
00621e7b  MOV ECX,dword ptr [EBP + -0x20]
00621e7e  ADD ECX,0x1
00621e81  MOV EDX,dword ptr [EBP + -0x8]
00621e84  MOV dword ptr [EDX + 0x10],ECX
00621e87  MOV EAX,dword ptr [EBP + -0x1c]
00621e8a  PUSH EAX
00621e8b  MOV ECX,dword ptr [EBP + 0x8]
00621e8e  PUSH ECX
00621e8f  CALL 0x006217b0
00621e94  ADD ESP,0x8
00621e97  MOV EDX,dword ptr [EBP + -0x8]
00621e9a  PUSH EDX
00621e9b  MOV EAX,dword ptr [EBP + 0x8]
00621e9e  PUSH EAX
00621e9f  CALL 0x006217b0
00621ea4  ADD ESP,0x8
00621ea7  MOV ECX,dword ptr [EBP + 0x10]
00621eaa  ADD ECX,0x1
00621ead  MOV dword ptr [EBP + 0x10],ECX
00621eb0  JMP 0x00621ce6
00621eb5  MOV EAX,dword ptr [EBP + 0x10]
00621eb8  MOV ESP,EBP
00621eba  POP EBP
00621ebb  RET
