; FUN_004f8f20  004f8f20
004f8f20  PUSH EBP
004f8f21  MOV EBP,ESP
004f8f23  SUB ESP,0x8
004f8f26  MOV dword ptr [EBP + -0x8],ECX
004f8f29  MOV EAX,dword ptr [EBP + -0x8]
004f8f2c  MOV CX,word ptr [EAX + 0x8]
004f8f30  MOV word ptr [EBP + -0x4],CX
004f8f34  MOV EDX,dword ptr [EBP + -0x8]
004f8f37  MOV AX,word ptr [EDX + 0x8]
004f8f3b  ADD AX,0x1
004f8f3f  MOV ECX,dword ptr [EBP + -0x8]
004f8f42  MOV word ptr [ECX + 0x8],AX
004f8f46  MOV EDX,dword ptr [EBP + -0x8]
004f8f49  MOVSX EAX,word ptr [EDX + 0x8]
004f8f4d  MOV ECX,dword ptr [EBP + -0x8]
004f8f50  MOVSX EDX,word ptr [ECX + 0x6]
004f8f54  CMP EAX,EDX
004f8f56  JNZ 0x004f8f61
004f8f58  MOV EAX,dword ptr [EBP + -0x8]
004f8f5b  MOV word ptr [EAX + 0x8],0x0
004f8f61  MOV ECX,dword ptr [EBP + -0x8]
004f8f64  MOVSX EDX,word ptr [ECX + 0x8]
004f8f68  MOVSX EAX,word ptr [EBP + -0x4]
004f8f6c  CMP EDX,EAX
004f8f6e  JZ 0x004f8fc9
004f8f70  MOV ECX,dword ptr [EBP + -0x8]
004f8f73  MOVSX EDX,word ptr [ECX + 0x8]
004f8f77  MOV EAX,dword ptr [EBP + -0x8]
004f8f7a  MOV ECX,dword ptr [EAX + 0x30]
004f8f7d  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f8f81  TEST EDX,EDX
004f8f83  JNZ 0x004f8f9a
004f8f85  MOV EAX,dword ptr [EBP + -0x8]
004f8f88  MOVSX ECX,word ptr [EAX + 0x8]
004f8f8c  MOV EDX,dword ptr [EBP + -0x8]
004f8f8f  MOV EAX,dword ptr [EDX + 0x34]
004f8f92  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f8f96  TEST ECX,ECX
004f8f98  JZ 0x004f8fc9
004f8f9a  MOV EDX,dword ptr [EBP + -0x8]
004f8f9d  MOV AX,word ptr [EDX + 0x8]
004f8fa1  ADD AX,0x1
004f8fa5  MOV ECX,dword ptr [EBP + -0x8]
004f8fa8  MOV word ptr [ECX + 0x8],AX
004f8fac  MOV EDX,dword ptr [EBP + -0x8]
004f8faf  MOVSX EAX,word ptr [EDX + 0x8]
004f8fb3  MOV ECX,dword ptr [EBP + -0x8]
004f8fb6  MOVSX EDX,word ptr [ECX + 0x6]
004f8fba  CMP EAX,EDX
004f8fbc  JNZ 0x004f8fc7
004f8fbe  MOV EAX,dword ptr [EBP + -0x8]
004f8fc1  MOV word ptr [EAX + 0x8],0x0
004f8fc7  JMP 0x004f8f61
004f8fc9  MOV ECX,dword ptr [EBP + -0x8]
004f8fcc  MOVSX EDX,word ptr [ECX + 0x8]
004f8fd0  MOVSX EAX,word ptr [EBP + -0x4]
004f8fd4  CMP EDX,EAX
004f8fd6  JZ 0x004f8fe3
004f8fd8  MOV ECX,dword ptr [EBP + -0x8]
004f8fdb  MOV AX,word ptr [ECX + 0x8]
004f8fdf  JMP 0x004f9046
004f8fe3  MOV ECX,dword ptr [EBP + -0x8]
004f8fe6  CALL 0x004f91a0
004f8feb  MOVSX EDX,AX
004f8fee  CMP EDX,0x1
004f8ff1  JNZ 0x004f9001
004f8ff3  MOV EAX,dword ptr [EBP + -0x8]
004f8ff6  MOV byte ptr [EAX],0x0
004f8ff9  MOV AX,0xfffe
004f8ffd  JMP 0x004f9046
004f9001  MOV ECX,dword ptr [EBP + -0x8]
004f9004  CALL 0x004f9110
004f9009  MOVSX ECX,AX
004f900c  CMP ECX,0x1
004f900f  JG 0x004f9027
004f9011  MOV EDX,dword ptr [EBP + -0x8]
004f9014  MOV byte ptr [EDX],0x0
004f9017  MOV ECX,dword ptr [EBP + -0x8]
004f901a  CALL 0x004f9220
004f901f  MOV AX,0xfffd
004f9023  JMP 0x004f9046
004f9027  XOR EAX,EAX
004f9029  JNZ 0x004f9042
004f902b  PUSH 0x5b0
004f9030  PUSH 0x6bfe08
004f9035  PUSH 0x6b2b64
004f903a  CALL 0x005e9f20
004f903f  ADD ESP,0xc
004f9042  MOV AX,0xfffe
004f9046  MOV ESP,EBP
004f9048  POP EBP
004f9049  RET
