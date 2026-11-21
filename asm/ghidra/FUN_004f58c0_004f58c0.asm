; FUN_004f58c0  004f58c0
004f58c0  PUSH EBP
004f58c1  MOV EBP,ESP
004f58c3  SUB ESP,0x8
004f58c6  MOV dword ptr [EBP + -0x8],ECX
004f58c9  MOV EAX,dword ptr [EBP + -0x8]
004f58cc  MOVZX ECX,byte ptr [EAX + 0x1]
004f58d0  TEST ECX,ECX
004f58d2  JNZ 0x004f58eb
004f58d4  PUSH 0x167
004f58d9  PUSH 0x6bfe08
004f58de  PUSH 0x6bfe6c
004f58e3  CALL 0x005e9f20
004f58e8  ADD ESP,0xc
004f58eb  MOV EAX,dword ptr [EBP + -0x8]
004f58ee  MOVZX ECX,byte ptr [EAX]
004f58f1  TEST ECX,ECX
004f58f3  JNZ 0x004f590c
004f58f5  PUSH 0x168
004f58fa  PUSH 0x6bfe08
004f58ff  PUSH 0x6c0020
004f5904  CALL 0x005e9f20
004f5909  ADD ESP,0xc
004f590c  MOV ECX,dword ptr [EBP + -0x8]
004f590f  CALL 0x004f9110
004f5914  MOVSX EAX,AX
004f5917  CMP EAX,0x2
004f591a  JGE 0x004f5933
004f591c  PUSH 0x169
004f5921  PUSH 0x6bfe08
004f5926  PUSH 0x6bfe7c
004f592b  CALL 0x005e9f20
004f5930  ADD ESP,0xc
004f5933  CMP dword ptr [EBP + 0x8],0x0
004f5937  JG 0x004f5950
004f5939  PUSH 0x16a
004f593e  PUSH 0x6bfe08
004f5943  PUSH 0x6c0038
004f5948  CALL 0x005e9f20
004f594d  ADD ESP,0xc
004f5950  MOV ECX,dword ptr [EBP + -0x8]
004f5953  CALL 0x004f6640
004f5958  MOVZX EAX,AL
004f595b  TEST EAX,EAX
004f595d  JNZ 0x004f5976
004f595f  PUSH 0x16b
004f5964  PUSH 0x6bfe08
004f5969  PUSH 0x6c0008
004f596e  CALL 0x005e9f20
004f5973  ADD ESP,0xc
004f5976  MOV EDX,dword ptr [EBP + -0x8]
004f5979  MOVSX EAX,word ptr [EDX + 0x8]
004f597d  MOV ECX,dword ptr [EBP + -0x8]
004f5980  MOV EDX,dword ptr [ECX + 0x4c]
004f5983  MOV ECX,dword ptr [EBP + -0x8]
004f5986  MOV CX,word ptr [ECX + 0x2c]
004f598a  MOV word ptr [EDX + EAX*0x2],CX
004f598e  MOV EDX,dword ptr [EBP + -0x8]
004f5991  MOV AX,word ptr [EDX + 0x2c]
004f5995  ADD AX,0x1
004f5999  MOV ECX,dword ptr [EBP + -0x8]
004f599c  MOV word ptr [ECX + 0x2c],AX
004f59a0  MOV EDX,dword ptr [EBP + -0x8]
004f59a3  MOVSX EAX,word ptr [EDX + 0x8]
004f59a7  MOV ECX,dword ptr [EBP + -0x8]
004f59aa  MOV EDX,dword ptr [ECX + 0x5c]
004f59ad  MOV AX,word ptr [EDX + EAX*0x2]
004f59b1  ADD AX,0x1
004f59b5  MOV ECX,dword ptr [EBP + -0x8]
004f59b8  MOVSX EDX,word ptr [ECX + 0x8]
004f59bc  MOV ECX,dword ptr [EBP + -0x8]
004f59bf  MOV ECX,dword ptr [ECX + 0x5c]
004f59c2  MOV word ptr [ECX + EDX*0x2],AX
004f59c6  MOV EDX,dword ptr [EBP + -0x8]
004f59c9  MOVSX EAX,word ptr [EDX + 0x8]
004f59cd  MOV ECX,dword ptr [EBP + -0x8]
004f59d0  MOV EDX,dword ptr [ECX + 0x50]
004f59d3  MOV AX,word ptr [EDX + EAX*0x2]
004f59d7  ADD AX,0x1
004f59db  MOV ECX,dword ptr [EBP + -0x8]
004f59de  MOVSX EDX,word ptr [ECX + 0x8]
004f59e2  MOV ECX,dword ptr [EBP + -0x8]
004f59e5  MOV ECX,dword ptr [ECX + 0x50]
004f59e8  MOV word ptr [ECX + EDX*0x2],AX
004f59ec  MOV EDX,dword ptr [EBP + -0x8]
004f59ef  MOV EAX,dword ptr [EDX + 0xc]
004f59f2  ADD EAX,dword ptr [EBP + 0x8]
004f59f5  MOV ECX,dword ptr [EBP + -0x8]
004f59f8  MOV dword ptr [ECX + 0xc],EAX
004f59fb  MOV EDX,dword ptr [EBP + -0x8]
004f59fe  MOVSX EAX,word ptr [EDX + 0x8]
004f5a02  MOV ECX,dword ptr [EBP + -0x8]
004f5a05  MOV EDX,dword ptr [ECX + 0x68]
004f5a08  MOV EAX,dword ptr [EDX + EAX*0x4]
004f5a0b  ADD EAX,dword ptr [EBP + 0x8]
004f5a0e  MOV ECX,dword ptr [EBP + -0x8]
004f5a11  MOVSX EDX,word ptr [ECX + 0x8]
004f5a15  MOV ECX,dword ptr [EBP + -0x8]
004f5a18  MOV ECX,dword ptr [ECX + 0x68]
004f5a1b  MOV dword ptr [ECX + EDX*0x4],EAX
004f5a1e  MOV EDX,dword ptr [EBP + -0x8]
004f5a21  MOV EAX,dword ptr [EDX + 0x14]
004f5a24  ADD EAX,dword ptr [EBP + 0x8]
004f5a27  MOV ECX,dword ptr [EBP + -0x8]
004f5a2a  MOV dword ptr [ECX + 0x14],EAX
004f5a2d  MOV EDX,dword ptr [EBP + -0x8]
004f5a30  MOVSX EAX,word ptr [EDX + 0x8]
004f5a34  MOV ECX,dword ptr [EBP + -0x8]
004f5a37  MOV EDX,dword ptr [ECX + 0x38]
004f5a3a  MOV byte ptr [EAX + EDX*0x1],0x1
004f5a3e  MOV ECX,dword ptr [EBP + -0x8]
004f5a41  CALL 0x004f8f20
004f5a46  MOV word ptr [EBP + -0x4],AX
004f5a4a  MOVSX EAX,word ptr [EBP + -0x4]
004f5a4e  TEST EAX,EAX
004f5a50  JGE 0x004f5a69
004f5a52  PUSH 0x178
004f5a57  PUSH 0x6bfe08
004f5a5c  PUSH 0x6bff84
004f5a61  CALL 0x005e9f20
004f5a66  ADD ESP,0xc
004f5a69  MOV AX,word ptr [EBP + -0x4]
004f5a6d  MOV ESP,EBP
004f5a6f  POP EBP
004f5a70  RET 0x4
