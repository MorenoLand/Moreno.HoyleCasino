; FUN_00577990  00577990
00577990  PUSH EBP
00577991  MOV EBP,ESP
00577993  SUB ESP,0x20
00577996  MOV dword ptr [EBP + -0x18],ECX
00577999  CALL dword ptr [0x006b20bc]
0057799f  MOV dword ptr [EBP + -0x14],EAX
005779a2  MOV byte ptr [EBP + -0xd],0x0
005779a6  MOV ECX,dword ptr [EBP + -0x18]
005779a9  CALL 0x005fc360
005779ae  MOV dword ptr [EBP + -0x1c],EAX
005779b1  CMP dword ptr [EBP + -0x1c],0x0
005779b5  JZ 0x005779bc
005779b7  JMP 0x00577b52
005779bc  MOV EAX,dword ptr [EBP + -0x18]
005779bf  MOV ECX,dword ptr [EAX + 0x20]
005779c2  MOV dword ptr [EBP + -0x8],ECX
005779c5  MOV dword ptr [EBP + -0x4],0x0
005779cc  JMP 0x005779d7
005779ce  MOV EDX,dword ptr [EBP + -0x4]
005779d1  ADD EDX,0x1
005779d4  MOV dword ptr [EBP + -0x4],EDX
005779d7  MOV EAX,dword ptr [EBP + -0x18]
005779da  MOV ECX,dword ptr [EBP + -0x4]
005779dd  CMP ECX,dword ptr [EAX + 0x24]
005779e0  JGE 0x00577ad8
005779e6  MOV EDX,dword ptr [EBP + -0x18]
005779e9  MOV EAX,dword ptr [EDX + 0x30]
005779ec  MOV ECX,dword ptr [EAX + 0x18c]
005779f2  MOV EDX,dword ptr [EBP + -0x4]
005779f5  MOV ECX,dword ptr [ECX + EDX*0x4]
005779f8  CALL 0x005eb220
005779fd  MOV dword ptr [EBP + -0xc],EAX
00577a00  MOV EAX,dword ptr [EBP + -0x8]
00577a03  CDQ
00577a04  MOV ECX,0xa
00577a09  IDIV ECX
00577a0b  IMUL EDX,EDX,0x3
00577a0e  CMP dword ptr [EBP + -0xc],EDX
00577a11  JZ 0x00577a8a
00577a13  MOV EDX,dword ptr [EBP + -0x18]
00577a16  MOVZX EAX,byte ptr [EDX + 0x2c]
00577a1a  TEST EAX,EAX
00577a1c  JZ 0x00577a29
00577a1e  MOV ECX,dword ptr [EBP + -0xc]
00577a21  ADD ECX,0x1
00577a24  MOV dword ptr [EBP + -0x20],ECX
00577a27  JMP 0x00577a32
00577a29  MOV EDX,dword ptr [EBP + -0xc]
00577a2c  SUB EDX,0x1
00577a2f  MOV dword ptr [EBP + -0x20],EDX
00577a32  MOV EAX,dword ptr [EBP + -0x20]
00577a35  MOV dword ptr [EBP + -0xc],EAX
00577a38  CMP dword ptr [EBP + -0xc],0x1e
00577a3c  JNZ 0x00577a45
00577a3e  MOV dword ptr [EBP + -0xc],0x0
00577a45  CMP dword ptr [EBP + -0xc],-0x1
00577a49  JNZ 0x00577a52
00577a4b  MOV dword ptr [EBP + -0xc],0x1d
00577a52  MOV ECX,dword ptr [EBP + -0xc]
00577a55  PUSH ECX
00577a56  MOV EDX,dword ptr [EBP + -0x18]
00577a59  MOV EAX,dword ptr [EDX + 0x30]
00577a5c  MOV ECX,dword ptr [EAX + 0x18c]
00577a62  MOV EDX,dword ptr [EBP + -0x4]
00577a65  MOV EAX,dword ptr [ECX + EDX*0x4]
00577a68  MOV ECX,dword ptr [EBP + -0x18]
00577a6b  MOV EDX,dword ptr [ECX + 0x30]
00577a6e  MOV ECX,dword ptr [EDX + 0x18c]
00577a74  MOV EDX,dword ptr [EBP + -0x4]
00577a77  MOV ECX,dword ptr [ECX + EDX*0x4]
00577a7a  MOV EAX,dword ptr [EAX]
00577a7c  MOV EDX,dword ptr [EAX + 0xb0]
00577a82  CALL EDX
00577a84  MOV byte ptr [EBP + -0xd],0x1
00577a88  JMP 0x00577ac5
00577a8a  MOV EAX,dword ptr [EBP + -0x18]
00577a8d  MOV ECX,dword ptr [EAX + 0x30]
00577a90  MOVSX EDX,word ptr [ECX + 0x184]
00577a97  MOV EAX,dword ptr [EBP + -0x18]
00577a9a  CMP dword ptr [EAX + 0x24],EDX
00577a9d  JGE 0x00577ac5
00577a9f  MOV ECX,dword ptr [EBP + -0x4]
00577aa2  ADD ECX,0x1
00577aa5  MOV EDX,dword ptr [EBP + -0x18]
00577aa8  CMP dword ptr [EDX + 0x24],ECX
00577aab  JNZ 0x00577ac5
00577aad  MOV EAX,dword ptr [EBP + -0x18]
00577ab0  MOV ECX,dword ptr [EAX + 0x24]
00577ab3  ADD ECX,0x1
00577ab6  MOV EDX,dword ptr [EBP + -0x18]
00577ab9  MOV dword ptr [EDX + 0x24],ECX
00577abc  MOV EAX,dword ptr [EBP + -0x18]
00577abf  MOV ECX,dword ptr [EBP + -0x14]
00577ac2  MOV dword ptr [EAX + 0x28],ECX
00577ac5  MOV EAX,dword ptr [EBP + -0x8]
00577ac8  CDQ
00577ac9  MOV ECX,0xa
00577ace  IDIV ECX
00577ad0  MOV dword ptr [EBP + -0x8],EAX
00577ad3  JMP 0x005779ce
00577ad8  MOVZX EDX,byte ptr [EBP + -0xd]
00577adc  TEST EDX,EDX
00577ade  JZ 0x00577b3e
00577ae0  MOV EAX,dword ptr [EBP + -0x18]
00577ae3  MOV ECX,dword ptr [EAX + 0x28]
00577ae6  ADD ECX,0x12c
00577aec  CMP dword ptr [EBP + -0x14],ECX
00577aef  JBE 0x00577b1e
00577af1  MOV EDX,dword ptr [EBP + -0x18]
00577af4  MOV EAX,dword ptr [EDX + 0x30]
00577af7  MOVSX ECX,word ptr [EAX + 0x184]
00577afe  MOV EDX,dword ptr [EBP + -0x18]
00577b01  CMP dword ptr [EDX + 0x24],ECX
00577b04  JGE 0x00577b15
00577b06  MOV EAX,dword ptr [EBP + -0x18]
00577b09  MOV ECX,dword ptr [EAX + 0x24]
00577b0c  ADD ECX,0x1
00577b0f  MOV EDX,dword ptr [EBP + -0x18]
00577b12  MOV dword ptr [EDX + 0x24],ECX
00577b15  MOV EAX,dword ptr [EBP + -0x18]
00577b18  MOV ECX,dword ptr [EBP + -0x14]
00577b1b  MOV dword ptr [EAX + 0x28],ECX
00577b1e  PUSH 0x0
00577b20  MOV EDX,dword ptr [EBP + -0x18]
00577b23  MOV EAX,dword ptr [EDX]
00577b25  MOV ECX,dword ptr [EBP + -0x18]
00577b28  MOV EDX,dword ptr [EAX + 0x4]
00577b2b  CALL EDX
00577b2d  PUSH 0x5
00577b2f  MOV EAX,dword ptr [EBP + -0x18]
00577b32  MOV EDX,dword ptr [EAX]
00577b34  MOV ECX,dword ptr [EBP + -0x18]
00577b37  MOV EAX,dword ptr [EDX + 0x1c]
00577b3a  CALL EAX
00577b3c  JMP 0x00577b50
00577b3e  MOV ECX,dword ptr [EBP + -0x18]
00577b41  MOV EDX,dword ptr [ECX + 0x30]
00577b44  MOV EAX,dword ptr [EBP + -0x18]
00577b47  MOV ECX,dword ptr [EAX + 0x20]
00577b4a  MOV dword ptr [EDX + 0x188],ECX
00577b50  JMP 0x00577b6d
00577b52  XOR EDX,EDX
00577b54  JNZ 0x00577b6d
00577b56  PUSH 0x554
00577b5b  PUSH 0x6cad74
00577b60  PUSH 0x6b2f58
00577b65  CALL 0x005e9f20
00577b6a  ADD ESP,0xc
00577b6d  MOV ESP,EBP
00577b6f  POP EBP
00577b70  RET
