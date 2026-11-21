; FUN_004f5cd0  004f5cd0
004f5cd0  PUSH EBP
004f5cd1  MOV EBP,ESP
004f5cd3  SUB ESP,0x8
004f5cd6  PUSH ESI
004f5cd7  PUSH EDI
004f5cd8  MOV dword ptr [EBP + -0x8],ECX
004f5cdb  MOV EAX,dword ptr [EBP + -0x8]
004f5cde  MOVZX ECX,byte ptr [EAX + 0x1]
004f5ce2  TEST ECX,ECX
004f5ce4  JNZ 0x004f5cfd
004f5ce6  PUSH 0x1a5
004f5ceb  PUSH 0x6bfe08
004f5cf0  PUSH 0x6bfe6c
004f5cf5  CALL 0x005e9f20
004f5cfa  ADD ESP,0xc
004f5cfd  MOV EAX,dword ptr [EBP + -0x8]
004f5d00  MOVZX ECX,byte ptr [EAX]
004f5d03  TEST ECX,ECX
004f5d05  JNZ 0x004f5d1e
004f5d07  PUSH 0x1a6
004f5d0c  PUSH 0x6bfe08
004f5d11  PUSH 0x6c0020
004f5d16  CALL 0x005e9f20
004f5d1b  ADD ESP,0xc
004f5d1e  MOV ECX,dword ptr [EBP + -0x8]
004f5d21  CALL 0x004f6690
004f5d26  MOVZX EAX,AL
004f5d29  TEST EAX,EAX
004f5d2b  JNZ 0x004f5d44
004f5d2d  PUSH 0x1a7
004f5d32  PUSH 0x6bfe08
004f5d37  PUSH 0x6c0060
004f5d3c  CALL 0x005e9f20
004f5d41  ADD ESP,0xc
004f5d44  MOV ECX,dword ptr [EBP + -0x8]
004f5d47  CALL 0x004f67d0
004f5d4c  MOV EDX,dword ptr [EBP + -0x8]
004f5d4f  ADD EAX,dword ptr [EDX + 0xc]
004f5d52  MOV ECX,dword ptr [EBP + -0x8]
004f5d55  MOV dword ptr [ECX + 0xc],EAX
004f5d58  MOV EDX,dword ptr [EBP + -0x8]
004f5d5b  MOVSX ESI,word ptr [EDX + 0x8]
004f5d5f  MOV EAX,dword ptr [EBP + -0x8]
004f5d62  MOV EDI,dword ptr [EAX + 0x68]
004f5d65  MOV ECX,dword ptr [EBP + -0x8]
004f5d68  CALL 0x004f67d0
004f5d6d  ADD EAX,dword ptr [EDI + ESI*0x4]
004f5d70  MOV ECX,dword ptr [EBP + -0x8]
004f5d73  MOVSX EDX,word ptr [ECX + 0x8]
004f5d77  MOV ECX,dword ptr [EBP + -0x8]
004f5d7a  MOV ECX,dword ptr [ECX + 0x68]
004f5d7d  MOV dword ptr [ECX + EDX*0x4],EAX
004f5d80  MOV EDX,dword ptr [EBP + -0x8]
004f5d83  MOVSX EAX,word ptr [EDX + 0x8]
004f5d87  MOV ECX,dword ptr [EBP + -0x8]
004f5d8a  MOV EDX,dword ptr [ECX + 0x38]
004f5d8d  MOV byte ptr [EAX + EDX*0x1],0x1
004f5d91  MOV EAX,dword ptr [EBP + -0x8]
004f5d94  MOVSX ECX,word ptr [EAX + 0x8]
004f5d98  MOV EDX,dword ptr [EBP + -0x8]
004f5d9b  MOV EAX,dword ptr [EDX + 0x60]
004f5d9e  MOV CX,word ptr [EAX + ECX*0x2]
004f5da2  ADD CX,0x1
004f5da6  MOV EDX,dword ptr [EBP + -0x8]
004f5da9  MOVSX EAX,word ptr [EDX + 0x8]
004f5dad  MOV EDX,dword ptr [EBP + -0x8]
004f5db0  MOV EDX,dword ptr [EDX + 0x60]
004f5db3  MOV word ptr [EDX + EAX*0x2],CX
004f5db7  MOV EAX,dword ptr [EBP + -0x8]
004f5dba  MOVSX ECX,word ptr [EAX + 0x8]
004f5dbe  MOV EDX,dword ptr [EBP + -0x8]
004f5dc1  MOV EAX,dword ptr [EDX + 0x54]
004f5dc4  MOV CX,word ptr [EAX + ECX*0x2]
004f5dc8  ADD CX,0x1
004f5dcc  MOV EDX,dword ptr [EBP + -0x8]
004f5dcf  MOVSX EAX,word ptr [EDX + 0x8]
004f5dd3  MOV EDX,dword ptr [EBP + -0x8]
004f5dd6  MOV EDX,dword ptr [EDX + 0x54]
004f5dd9  MOV word ptr [EDX + EAX*0x2],CX
004f5ddd  MOV ECX,dword ptr [EBP + -0x8]
004f5de0  CALL 0x004f8f20
004f5de5  MOV word ptr [EBP + -0x4],AX
004f5de9  MOVSX EAX,word ptr [EBP + -0x4]
004f5ded  TEST EAX,EAX
004f5def  JL 0x004f5e67
004f5df1  MOVSX ECX,word ptr [EBP + -0x4]
004f5df5  MOV EDX,dword ptr [EBP + -0x8]
004f5df8  MOV EAX,dword ptr [EDX + 0x38]
004f5dfb  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f5dff  TEST ECX,ECX
004f5e01  JZ 0x004f5e67
004f5e03  MOVSX EDX,word ptr [EBP + -0x4]
004f5e07  MOV EAX,dword ptr [EBP + -0x8]
004f5e0a  MOV ECX,dword ptr [EAX + 0x68]
004f5e0d  MOV EAX,dword ptr [EBP + -0x8]
004f5e10  MOV ECX,dword ptr [ECX + EDX*0x4]
004f5e13  CMP ECX,dword ptr [EAX + 0x14]
004f5e16  JNZ 0x004f5e67
004f5e18  MOV EDX,dword ptr [EBP + -0x8]
004f5e1b  MOV byte ptr [EDX],0x0
004f5e1e  MOV ECX,dword ptr [EBP + -0x8]
004f5e21  CALL 0x004f9110
004f5e26  MOVSX EAX,AX
004f5e29  CMP EAX,0x1
004f5e2c  JNZ 0x004f5e61
004f5e2e  MOV ECX,dword ptr [EBP + -0x8]
004f5e31  CALL 0x004f9220
004f5e36  MOV ECX,dword ptr [EBP + -0x8]
004f5e39  CALL 0x004f6420
004f5e3e  TEST EAX,EAX
004f5e40  JZ 0x004f5e59
004f5e42  PUSH 0x1b6
004f5e47  PUSH 0x6bfe08
004f5e4c  PUSH 0x6c0048
004f5e51  CALL 0x005e9f20
004f5e56  ADD ESP,0xc
004f5e59  MOV AX,0xfffd
004f5e5d  JMP 0x004f5e6b
004f5e61  OR AX,0xffff
004f5e65  JMP 0x004f5e6b
004f5e67  MOV AX,word ptr [EBP + -0x4]
004f5e6b  POP EDI
004f5e6c  POP ESI
004f5e6d  MOV ESP,EBP
004f5e6f  POP EBP
004f5e70  RET
