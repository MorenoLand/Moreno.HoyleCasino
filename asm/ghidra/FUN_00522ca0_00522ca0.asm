; FUN_00522ca0  00522ca0
00522ca0  PUSH EBP
00522ca1  MOV EBP,ESP
00522ca3  SUB ESP,0x10
00522ca6  MOV dword ptr [EBP + -0x10],ECX
00522ca9  MOV dword ptr [EBP + -0x4],0xfffffea0
00522cb0  MOV dword ptr [EBP + -0xc],0x0
00522cb7  JMP 0x00522cc2
00522cb9  MOV EAX,dword ptr [EBP + -0xc]
00522cbc  ADD EAX,0x1
00522cbf  MOV dword ptr [EBP + -0xc],EAX
00522cc2  CMP dword ptr [EBP + -0xc],0x1a
00522cc6  JGE 0x00522d68
00522ccc  MOV ECX,dword ptr [EBP + -0xc]
00522ccf  MOV EDX,dword ptr [0x00793374]
00522cd5  CMP dword ptr [EDX + ECX*0x4 + 0xd44],-0x1
00522cdd  JLE 0x00522d63
00522ce3  MOV EAX,dword ptr [EBP + -0xc]
00522ce6  MOV ECX,dword ptr [0x00793374]
00522cec  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd44]
00522cf3  PUSH EDX
00522cf4  MOV EAX,dword ptr [EBP + -0xc]
00522cf7  MOV ECX,dword ptr [EBP + -0x10]
00522cfa  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
00522cfe  MOV EAX,dword ptr [EBP + -0xc]
00522d01  MOV ECX,dword ptr [EBP + -0x10]
00522d04  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
00522d08  MOV EDX,dword ptr [EDX]
00522d0a  MOV EAX,dword ptr [EDX + 0xb0]
00522d10  CALL EAX
00522d12  MOV EAX,dword ptr [EBP + -0xc]
00522d15  CDQ
00522d16  MOV ECX,0xd
00522d1b  IDIV ECX
00522d1d  IMUL EDX,EDX,0x19
00522d20  ADD EDX,0x58
00522d23  MOV dword ptr [EBP + -0x8],EDX
00522d26  MOV EAX,dword ptr [EBP + -0xc]
00522d29  CDQ
00522d2a  MOV ECX,0xd
00522d2f  IDIV ECX
00522d31  TEST EDX,EDX
00522d33  JNZ 0x00522d3e
00522d35  MOV EDX,dword ptr [EBP + -0x4]
00522d38  ADD EDX,0x11
00522d3b  MOV dword ptr [EBP + -0x4],EDX
00522d3e  MOV EAX,dword ptr [EBP + -0x4]
00522d41  PUSH EAX
00522d42  MOV ECX,dword ptr [EBP + -0x8]
00522d45  PUSH ECX
00522d46  MOV EDX,dword ptr [EBP + -0xc]
00522d49  MOV EAX,dword ptr [EBP + -0x10]
00522d4c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
00522d50  MOV EDX,dword ptr [EBP + -0xc]
00522d53  MOV EAX,dword ptr [EBP + -0x10]
00522d56  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x18]
00522d5a  MOV EAX,dword ptr [ECX]
00522d5c  MOV ECX,EDX
00522d5e  MOV EDX,dword ptr [EAX + 0x44]
00522d61  CALL EDX
00522d63  JMP 0x00522cb9
00522d68  MOV dword ptr [EBP + -0xc],0x0
00522d6f  JMP 0x00522d7a
00522d71  MOV EAX,dword ptr [EBP + -0xc]
00522d74  ADD EAX,0x1
00522d77  MOV dword ptr [EBP + -0xc],EAX
00522d7a  CMP dword ptr [EBP + -0xc],0x1a
00522d7e  JGE 0x00522db0
00522d80  MOV ECX,dword ptr [EBP + -0xc]
00522d83  MOV EDX,dword ptr [0x00793374]
00522d89  CMP dword ptr [EDX + ECX*0x4 + 0xd44],-0x1
00522d91  JLE 0x00522dae
00522d93  MOV EAX,dword ptr [EBP + -0xc]
00522d96  MOV ECX,dword ptr [EBP + -0x10]
00522d99  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
00522d9d  MOV EAX,dword ptr [EBP + -0xc]
00522da0  MOV ECX,dword ptr [EBP + -0x10]
00522da3  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
00522da7  MOV EDX,dword ptr [EDX]
00522da9  MOV EAX,dword ptr [EDX + 0x74]
00522dac  CALL EAX
00522dae  JMP 0x00522d71
00522db0  MOV ESP,EBP
00522db2  POP EBP
00522db3  RET
